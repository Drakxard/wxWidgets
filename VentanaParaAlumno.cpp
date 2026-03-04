#include "VentanaParaAlumno.h"
#include "DialogoReservar.h"
#include "DialogoPrestamo.h"
#include "DialogoHistorial.h"
#include "DialogoAgregar.h"
#include "Dialogo_Eliminar.h"
#include "Funcionalidades/system/system.h"
#include "Funcionalidades/bibliotecario/bibliotecario.h"
#include "DialogoAgregarPersona.h"
#include "DialogoVerLibro.h"
#include <wx/dcmemory.h>
#include <wx/wrapsizer.h>
#include "DialogoAgregarEditar.h"
#include <wx/msgdlg.h>
#include <wx/event.h>

using namespace std;

VentanaParaAlumno::VentanaParaAlumno(wxWindow *parent, Alumno actualAlumno) : MyFrameInicioCorrectoAlumno(parent) {
	sistema = new System();
	this->Maximize(true);
	this->actualAlumno = actualAlumno;
	
	// Limpiamos las columnas del diseñador para forzar nuestras configuraciones sin crasheos
	
	m_list_Reservas->DeleteAllColumns();
	m_list_Reservas->InsertColumn(0, "ID", wxLIST_FORMAT_LEFT, 50);
	m_list_Reservas->InsertColumn(1, "Nombre LIBRO", wxLIST_FORMAT_LEFT, 200);
	m_list_Reservas->InsertColumn(2, "Nombre USUARIO", wxLIST_FORMAT_LEFT, 200);
	m_list_Reservas->InsertColumn(3, "Fecha", wxLIST_FORMAT_LEFT, 100);    // <--- NUEVA COLUMNA
	m_list_Reservas->InsertColumn(4, "Estado", wxLIST_FORMAT_LEFT, 100);
	m_list_Reservas->SetSingleStyle(wxLC_HRULES | wxLC_VRULES);
	
	
	m_panel_Bibliotecario_Libros->Bind(wxEVT_SIZE, [this](wxSizeEvent& evento) {
		evento.Skip();
		m_panel_Bibliotecario_Libros->Layout();
		if (m_panel_Bibliotecario_Libros->GetSizer()) {
			m_panel_Bibliotecario_Libros->SetVirtualSize(m_panel_Bibliotecario_Libros->GetSizer()->CalcMin());
		}
	});
	vLibros = sistema->VerContenido<Libro>(sistema->libros(), true);
	MostrarLibros(vLibros);
}

VentanaParaAlumno::~VentanaParaAlumno() {	
	if (sistema) {
		delete sistema;
		sistema = nullptr;
	}
}

void VentanaParaAlumno::MostrarLibros(vector<Libro>aMostrar){
	m_panel_Bibliotecario_Libros->DestroyChildren(); 
	
	wxWrapSizer* sizerGrilla = new wxWrapSizer(wxHORIZONTAL);
	
	for (size_t i = 0; i < aMostrar.size(); i++) {
		wxBoxSizer* sizerLibroIndividual = new wxBoxSizer(wxVERTICAL);
		
		wxString nombreStr = wxString::FromUTF8(aMostrar[i].VerNombre());
		wxString rutaStr = wxString::FromUTF8(aMostrar[i].VerPath());
		
		wxStaticText* textoTitulo = new wxStaticText(m_panel_Bibliotecario_Libros, wxID_ANY, nombreStr);
		wxFont fuenteTitulo = textoTitulo->GetFont();
		fuenteTitulo.SetWeight(wxFONTWEIGHT_BOLD);
		textoTitulo->SetFont(fuenteTitulo);
		
		wxBitmap bitmapPortada;
		wxImage image;
		
		if (!wxFileName::Exists(rutaStr)) {
			rutaStr = wxString::FromUTF8(sistema->noLibroImg().c_str());
		}
		
		if (image.LoadFile(rutaStr, wxBITMAP_TYPE_ANY)) {
			int anchoDeseado = 150;
			int altoCalculado = image.GetHeight() * anchoDeseado / image.GetWidth();
			image.Rescale(anchoDeseado, altoCalculado, wxIMAGE_QUALITY_HIGH);
			bitmapPortada = wxBitmap(image);
		} else {
			bitmapPortada.Create(150, 200);
			wxMemoryDC dc(bitmapPortada);
			dc.SetBackground(*wxWHITE_BRUSH);
			dc.Clear();
			dc.SetTextForeground(*wxRED);
			dc.DrawText("Sin Portada", 40, 90);
			dc.SelectObject(wxNullBitmap);
		}
		
		int idImagen = 2000 + i;
		wxStaticBitmap* imagenPortada = new wxStaticBitmap(m_panel_Bibliotecario_Libros, idImagen, bitmapPortada);
		
		imagenPortada->SetCursor(wxCursor(wxCURSOR_HAND));
		imagenPortada->Bind(wxEVT_LEFT_DOWN, &VentanaParaAlumno::OnLeftUpVerLibro, this);
		
		sizerLibroIndividual->Add(textoTitulo, 0, wxALL | wxALIGN_CENTER_HORIZONTAL, 5);
		sizerLibroIndividual->Add(imagenPortada, 0, wxALL | wxALIGN_CENTER_HORIZONTAL, 5);
		
		sizerGrilla->Add(sizerLibroIndividual, 0, wxALL, 15);
	}
	
	m_panel_Bibliotecario_Libros->SetSizer(sizerGrilla);
	m_panel_Bibliotecario_Libros->Layout();
	m_panel_Bibliotecario_Libros->SetScrollRate(0, 20);
	
	m_panel_Bibliotecario_Libros->SetVirtualSize(sizerGrilla->CalcMin());
}

void VentanaParaAlumno::OnLeftUpVerLibro(wxMouseEvent& event) {
	int indiceVector = event.GetId() - 2000; 
	if (indiceVector >= 0 && indiceVector < vLibros.size()) {
		DialogoVerLibro *nueva = new DialogoVerLibro(this, vLibros[indiceVector], actualAlumno);
		if (nueva->ShowModal() == wxID_OK){
			vLibros = sistema->VerContenido<Libro>(sistema->libros(), true);
			MostrarLibros(vLibros);
		}
		nueva->Destroy();
	}
}

void VentanaParaAlumno::CargarListaReservar(wxListCtrl* lista){
	lista->DeleteAllItems();
	lista->Freeze();
	
	vReservas = sistema->VerContenido<Reservas>(sistema->reservar(),true);
	vector<size_t> RAlumno;
	vector<size_t> RLibros;
	
	for(Reservas& x : vReservas){
		RAlumno.push_back(x.VerIDUsuario());
		RLibros.push_back(x.VerIDLibro());
	}
	
	vector<Alumno> ReservasAlumno = sistema->LeerDelBin<Alumno>(RAlumno, sistema->alumnos());
	vector<Libro> ReservasLibro = sistema->LeerDelBin<Libro>(RLibros, sistema->libros());
	
	for(int i=0;i<vReservas.size();i++) { 
		// CORRECCIÓN AQUÍ: Se cambió (size_t) por (int) para que coincida con el %d
		long index = lista->InsertItem(i, wxString::Format("%d", (int)vReservas[i].VerID()));
		lista->SetItem(index, 1, ReservasLibro[i].VerNombre());
		lista->SetItem(index, 2, ReservasAlumno[i].VerNombre());
		
		// Formateamos la fecha recuperada del archivo binario
		wxString fechaStr = wxString::Format("%02d/%02d/%04d", vReservas[i].VerDia(), vReservas[i].VerMes(), vReservas[i].VerAnio());
		lista->SetItem(index, 3, fechaStr);
		
		// Mostramos el estado en la columna 4
		wxString estado = vReservas[i].Existencia() ? "Activa" : "Inactiva/Borrada";
		lista->SetItem(index, 4, estado);				
	}
	lista->Thaw();
}

void VentanaParaAlumno::OnRadioButton_CambiaPestana(wxCommandEvent& event){
	if(m_radio_Libros->GetValue()){
		vLibros = sistema->VerContenido<Libro>(sistema->libros(), true);
		MostrarLibros(vLibros);
		m_Bibliotecario_frameActual->SetSelection(0);
	}

	else if(m_radio_Reservar->GetValue()){
		m_Bibliotecario_frameActual->SetSelection(2);
		CargarListaReservar(m_list_Reservas);
		m_panel_botones_internos->SetSelection(2);
	}

	this->Layout();
}

void VentanaParaAlumno::Onclick_Boton_Buscar_Frase( wxCommandEvent& event )  {
	string palabra;
	
	if(m_radio_Libros->GetValue()){
		palabra=mtext_Buscador_frase->GetValue().ToStdString();
		Buscador navega;
		vector<size_t> resultadoBusqueda = navega.BusquedaAmpliada(palabra);
		vLibros = sistema->LeerDelBin<Libro>(resultadoBusqueda,sistema->libros());
		MostrarLibros(vLibros);
		
	}else if(m_radio_Reservar->GetValue()){
		m_Bibliotecario_frameActual->SetSelection(2);
		CargarListaReservar(m_list_Reservas);
		if(m_radio_nombreLibros_Reservas->GetValue()){
			vResultadoLibro.clear();
			vResultadoLibro = navega.Busqueda_Libro(2,palabra,vLibros );
			//MuestraListaResultadoLibro(m_list_Reservas);
		}else if(m_radio_Nombre_Usuario_Reservas->GetValue()){
			vResultadoAlumno.clear();
			vResultadoAlumno = navega.Busqueda_Alumno(2,palabra,vAlumno );
			//MuestraListaResultadoAlumno(m_panel_Reservar);
		}else if(m_radio_Estadode_Reserva){
			vResultadoLibro.clear();
			vResultadoLibro = navega.Busqueda_Libro(3,palabra,vLibros );
			//MuestraListaResultadoLibro(m_list_Reservas);
		}
	}

	this->Layout();
}


void VentanaParaAlumno::MuestraListaResultadoAlumno(wxListCtrl* lista){
	if(vResultadoAlumno.size()==0){
		wxMessageBox("No hay nadie con ese nombre","Sin coincidencias",wxOK|wxICON_INFORMATION);
		return;
	}
	lista->DeleteAllItems();
	lista->Freeze();
	for(int i=0;i<vResultadoAlumno.size();i++) { 
		long index = lista->InsertItem(i, wxString::Format("%d",vResultadoAlumno[i].VerID()));
		lista->SetItem(index, 1,vResultadoAlumno[i].VerNombre() );
		lista->SetItem(index, 2, wxString::Format("%d", vResultadoAlumno[i].VerDNI()) );
		if(vResultadoAlumno[i].Existencia()){
			if(vResultadoAlumno[i].VerEstadoDeSancion()){
				lista->SetItem(index, 3, "Sancionado" );
			}else{
				lista->SetItem(index, 3, "No Sancionado" );
			}
		}else{
			lista->SetItem(index, 3, "Borrado" );
		}
	}
	lista->Thaw();	
}
