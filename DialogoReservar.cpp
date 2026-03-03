#include "DialogoReservar.h"
#include "Funcionalidades/system/system.h"
#include "Reservas.h"
#include <wx/msgdlg.h>
#include <vector>

DialogoReservar::DialogoReservar(wxWindow *parent, Libro& libro, Alumno& alumno) 
	: MyDialogReservar(parent), libroAReservar(libro), alumnoReserva(alumno) {
	
	m_staticNombreLibroReservarValor->SetLabel(libroAReservar.VerNombre());
	m_calendar1->SetDateRange(wxDateTime::Today(), wxDefaultDateTime);
	
	estadoSeleccion = 0; // Empezamos esperando el primer clic
	PintarDiasCalendario();
	
	this->Layout();
	this->Fit();
	this->Center();
}

DialogoReservar::~DialogoReservar() {}

// === LÓGICA DE COLORES ===
void DialogoReservar::PintarDiasCalendario() {
	wxDateTime fechaActual = m_calendar1->GetDate();
	int mes = fechaActual.GetMonth();
	int anio = fechaActual.GetYear();
	int diasEnMes = wxDateTime::GetNumberOfDays(fechaActual.GetMonth(), anio);
	
	for (int dia = 1; dia <= diasEnMes; ++dia) {
		wxDateTime fechaIteracion(dia, (wxDateTime::Month)mes, anio);
		
		if (fechaIteracion.GetWeekDay() == wxDateTime::Sat || fechaIteracion.GetWeekDay() == wxDateTime::Sun) {
			wxCalendarDateAttr* attr = new wxCalendarDateAttr(*wxLIGHT_GREY, *wxWHITE);
			m_calendar1->SetAttr(dia, attr);
		} 
		else if (EsFechaReservada(fechaIteracion)) {
			wxCalendarDateAttr* attr = new wxCalendarDateAttr(*wxWHITE, *wxRED);
			m_calendar1->SetAttr(dia, attr);
		} 
		// Pintar rango seleccionado por el usuario (Color Azul)
		else if (estadoSeleccion == 1 && fechaIteracion.IsSameDate(fechaInicio)) {
			wxCalendarDateAttr* attr = new wxCalendarDateAttr(*wxWHITE, *wxBLUE);
			m_calendar1->SetAttr(dia, attr);
		}
		// CORRECCIÓN: Usamos IsLaterThan/IsEarlierThan combinadas con IsSameDate
		else if (estadoSeleccion == 2 && 
				 (fechaIteracion.IsLaterThan(fechaInicio) || fechaIteracion.IsSameDate(fechaInicio)) && 
				 (fechaIteracion.IsEarlierThan(fechaFin) || fechaIteracion.IsSameDate(fechaFin))) {
			wxCalendarDateAttr* attr = new wxCalendarDateAttr(*wxWHITE, *wxBLUE);
			m_calendar1->SetAttr(dia, attr);
		} 
		else {
					 m_calendar1->ResetAttr(dia);
				 }
	}
	m_calendar1->Refresh();
}

bool DialogoReservar::EsFechaReservada(const wxDateTime& fecha) {
	System sistema;
	std::vector<Reservas> listaReservas = sistema.VerContenido<Reservas>(sistema.reservar(), true);
	
	for (size_t i = 0; i < listaReservas.size(); ++i) {
		if (listaReservas[i].Existencia() && 
			listaReservas[i].VerIDLibro() == libroAReservar.VerID() &&
			listaReservas[i].VerDia() == fecha.GetDay() &&
			listaReservas[i].VerMes() == (int)fecha.GetMonth() + 1 &&
			listaReservas[i].VerAnio() == fecha.GetYear()) {
			return true;
		}
	}
	return false;
}

// === EVENTOS DEL CALENDARIO ===
void DialogoReservar::OnCalendarCambioMes(wxCalendarEvent& event) {
	PintarDiasCalendario();
	event.Skip();
}


	void DialogoReservar::OnCalendarSeleccion(wxCalendarEvent& event) {
		// === NUEVA LÓGICA DE SANCIÓN ===
		if (alumnoReserva.VerEstadoDeSancion()) {
			wxMessageBox("No puedes elegir fechas porque te encuentras sancionado.", "Alumno Sancionado", wxOK | wxICON_ERROR, this);
			return;
		}
		// ===============================
		
		wxDateTime fechaSeleccionada = event.GetDate();
		
		// No permitir elegir fines de semana o días ocupados
		if (fechaSeleccionada.GetWeekDay() == wxDateTime::Sat || fechaSeleccionada.GetWeekDay() == wxDateTime::Sun) {
			wxMessageBox("No se pueden seleccionar los fines de semana.", "Aviso", wxOK | wxICON_WARNING, this);
			return;
		}
		// ... (el resto del código de la función se mantiene igual)
	if (EsFechaReservada(fechaSeleccionada)) {
		wxMessageBox("Este dia ya se encuentra reservado.", "Aviso", wxOK | wxICON_WARNING, this);
		return;
	}
	
	// Lógica de 2 clics
	if (estadoSeleccion == 0 || estadoSeleccion == 2) {
		// Primer clic: Define inicio
		fechaInicio = fechaSeleccionada;
		estadoSeleccion = 1; 
	} 
	else if (estadoSeleccion == 1) {
		// Segundo clic: Define el final
		fechaFin = fechaSeleccionada;
		
		// Si hizo clic al revés (fin antes que el inicio), los damos vuelta
		if (fechaFin.IsEarlierThan(fechaInicio)) {
			wxDateTime temp = fechaInicio;
			fechaInicio = fechaFin;
			fechaFin = temp;
		}
		
		// Validar que no haya un día reservado en medio del rango
		wxTimeSpan unDia = wxTimeSpan::Days(1);
		wxDateTime iterador = fechaInicio;
		bool rangoValido = true;
		
		// CORRECCIÓN: iterador <= fechaFin
		while (iterador.IsEarlierThan(fechaFin) || iterador.IsSameDate(fechaFin)) {
			if (EsFechaReservada(iterador)) {
				rangoValido = false;
				break;
			}
			iterador.Add(unDia);
		}
		
		if (!rangoValido) {
			wxMessageBox("El rango seleccionado contiene dias que ya estan reservados. Por favor, intente otro rango.", "Rango Invalido", wxOK | wxICON_ERROR, this);
			estadoSeleccion = 0; // Reiniciamos selección
		} else {
			estadoSeleccion = 2; // Rango válido
		}
	}
	
	PintarDiasCalendario();
	event.Skip();
}

// === BOTONES ===
void DialogoReservar::OnBotonConfirmarClick( wxCommandEvent& event ) {
	// === NUEVA LÓGICA DE SANCIÓN ===
	if (alumnoReserva.VerEstadoDeSancion()) {
		wxMessageBox("No puedes reservar libros porque te encuentras sancionado. Comunicate con un bibliotecario.", "Alumno Sancionado", wxOK | wxICON_ERROR, this);
		return;
	}
	// ===============================
	
	if (estadoSeleccion == 0) {
		wxMessageBox("Haga clic en una fecha de inicio y una fecha de fin en el calendario.", "Error", wxOK | wxICON_ERROR, this);
		return;
	}
	
	// Si solo hizo 1 clic y confirmó, asumimos que quiere reservar solo 1 día
	if (estadoSeleccion == 1) {
		fechaFin = fechaInicio;
	}
	
	System sistema;
	wxTimeSpan unDia = wxTimeSpan::Days(1);
	wxDateTime iterador = fechaInicio;
	
	// Bucle para guardar CADA DÍA del rango seleccionado en el archivo binario
	while (iterador.IsEarlierThan(fechaFin) || iterador.IsSameDate(fechaFin)) {
		// Por seguridad, evitamos guardar los fines de semana si quedaron en el medio
		if (iterador.GetWeekDay() != wxDateTime::Sat && iterador.GetWeekDay() != wxDateTime::Sun) {
			size_t ultimo = sistema.VerUltimo<Reservas>(sistema.reservar()); 
			size_t idLibro = libroAReservar.VerID();
			size_t idUsuario = alumnoReserva.VerID();
			
			Reservas aux(ultimo+1, idLibro, idUsuario, iterador.GetDay(), (int)iterador.GetMonth() + 1, iterador.GetYear());
			sistema.AlUltimo(sistema.reservar(), aux);
		}
		// Sumamos 1 día al iterador
		iterador.Add(unDia);
	}
	
	wxMessageBox("El rango de fechas ha sido reservado con exito.", "Reserva Confirmada", wxOK | wxICON_INFORMATION, this);
	EndModal(wxID_OK);
}
void DialogoReservar::OnBotonCancelarClick( wxCommandEvent& event ) {
	// Cierra el diálogo y devuelve un código de cancelación
	EndModal(wxID_CANCEL); 
}
