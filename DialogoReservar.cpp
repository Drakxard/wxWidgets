#include "DialogoReservar.h"
#include "Funcionalidades/system/system.h"
#include "Reservas.h"
#include <wx/msgdlg.h> // Para mostrar el cartelito de éxito

// Constructor
DialogoReservar::DialogoReservar(wxWindow *parent, Libro& libro, Alumno& alumno) 
	: MyDialogReservar(parent), libroAReservar(libro), alumnoReserva(alumno) {
	
	// Escribimos el nombre del libro en el texto de la ventana
	m_staticNombreLibroReservarValor->SetLabel(libroAReservar.VerNombre());
}

DialogoReservar::~DialogoReservar() {
	
}

// Evento del botón Confirmar
void DialogoReservar::OnBotonConfirmarClick( wxCommandEvent& event ) {
	System sistema;
	
	// Calculamos el ID y preparamos la reserva
	size_t ultimo = sistema.VerUltimo<Reservas>(sistema.reservar()); 
	size_t idLibro = libroAReservar.VerID();
	size_t idUsuario = alumnoReserva.VerID();
	
	Reservas aux(ultimo+1, idLibro, idUsuario);
	
	// Guardamos la reserva en el sistema binario
	sistema.AlUltimo(sistema.reservar(), aux);
	
	// Mostramos un mensaje al usuario
	wxMessageBox("El libro ha sido reservado con exito.", "Reserva Confirmada", wxOK | wxICON_INFORMATION, this);
	
	// Cerramos la ventana
	EndModal(wxID_OK);
}

// Evento del botón Cancelar
void DialogoReservar::OnBotonCancelarClick( wxCommandEvent& event ) {
	// Simplemente cerramos la ventana sin guardar nada
	EndModal(wxID_CANCEL);
}
