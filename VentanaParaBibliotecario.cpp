#include "VentanaParaBibliotecario.h"
#include "DialogoPrestamo.h"
#include "DialogoHistorial.h"
#include <wx/msgdlg.h>
#include "Dialogo_Eliminar.h"
#include "Funcionalidades/bibliotecario/bibliotecario.h"

using namespace std;

VentanaParaBibliotecario::VentanaParaBibliotecario(wxWindow *parent) : MyFrameInicioCorrectoBibliotecario(parent) {
	sistema = new System();
	
	/// ALUMNO
	m_list_Alumnos->InsertColumn(0, "ID", wxLIST_FORMAT_LEFT, 50);
	m_list_Alumnos->InsertColumn(1, "Nombre", wxLIST_FORMAT_LEFT, 100);
	m_list_Alumnos->InsertColumn(2, "DNI", wxLIST_FORMAT_LEFT, 100);
	m_list_Alumnos->InsertColumn(3, "Estado de Sancion", wxLIST_FORMAT_LEFT, 100);
	
	m_list_Alumnos->SetSingleStyle(wxLC_HRULES);
	m_list_Alumnos->SetSingleStyle(wxLC_VRULES);
	
	/// BIBLIOTECARIO
	m_list_Bibliotecarios->InsertColumn(0, "ID", wxLIST_FORMAT_LEFT, 50);
	m_list_Bibliotecarios->InsertColumn(1, "Nombre", wxLIST_FORMAT_LEFT, 200);
	m_list_Bibliotecarios->InsertColumn(2, "DNI", wxLIST_FORMAT_LEFT, 100);
	
	m_list_Bibliotecarios->SetSingleStyle(wxLC_HRULES);
	m_list_Bibliotecarios->SetSingleStyle(wxLC_VRULES);
	
	/// LIBROS
	m_list_libros->InsertColumn(0, "ID", wxLIST_FORMAT_LEFT, 50);
	m_list_libros->InsertColumn(1, "Nombre", wxLIST_FORMAT_LEFT, 200);
	m_list_libros->InsertColumn(2, "Estado", wxLIST_FORMAT_LEFT, 100);
	m_list_libros->InsertColumn(3, "Autor", wxLIST_FORMAT_LEFT, 100);
	
	m_list_libros->SetSingleStyle(wxLC_HRULES); 
	m_list_libros->SetSingleStyle(wxLC_VRULES); 
}

// Constructor recuperado del backup y adaptado a 4 columnas para alumnos
VentanaParaBibliotecario::VentanaParaBibliotecario(wxWindow *parent, Bibliotecario biblio) : MyFrameInicioCorrectoBibliotecario(parent) {
	sistema = new System();
	this->biblio = biblio;
	
	/// ALUMNO
	m_list_Alumnos->InsertColumn(0, "ID", wxLIST_FORMAT_LEFT, 50);
	m_list_Alumnos->InsertColumn(1, "Nombre", wxLIST_FORMAT_LEFT, 100);
	m_list_Alumnos->InsertColumn(2, "DNI", wxLIST_FORMAT_LEFT, 100);
	m_list_Alumnos->InsertColumn(3, "Estado de Sancion", wxLIST_FORMAT_LEFT, 100);
	
	m_list_Alumnos->SetSingleStyle(wxLC_HRULES);
	m_list_Alumnos->SetSingleStyle(wxLC_VRULES);
	
	/// BIBLIOTECARIO
	m_list_Bibliotecarios->InsertColumn(0, "ID", wxLIST_FORMAT_LEFT, 50);
	m_list_Bibliotecarios->InsertColumn(1, "Nombre", wxLIST_FORMAT_LEFT, 200);
	m_list_Bibliotecarios->InsertColumn(2, "DNI", wxLIST_FORMAT_LEFT, 100);
	
	m_list_Bibliotecarios->SetSingleStyle(wxLC_HRULES);
	m_list_Bibliotecarios->SetSingleStyle(wxLC_VRULES);
	
	/// LIBROS
	m_list_libros->InsertColumn(0, "ID", wxLIST_FORMAT_LEFT, 50);
	m_list_libros->InsertColumn(1, "Nombre", wxLIST_FORMAT_LEFT, 200);
	m_list_libros->InsertColumn(2, "Estado", wxLIST_FORMAT_LEFT, 100);
	m_list_libros->InsertColumn(3, "Autor", wxLIST_FORMAT_LEFT, 100);
	
	m_list_libros->SetSingleStyle(wxLC_HRULES); 
	m_list_libros->SetSingleStyle(wxLC_VRULES); 
}

VentanaParaBibliotecario::~VentanaParaBibliotecario() {	
	if (sistema) {
		delete sistema;
		sistema = nullptr;
	}
}

void VentanaParaBibliotecario::CargarListaAlumnos(wxListCtrl* lista){
	lista->DeleteAllItems();
	lista->Freeze();
	vAlumno = sistema->VerContenido<Alumno>(sistema->alumnos(),true);
	
	for(int i=0;i<vAlumno.size();i++) { 
		long index = lista->InsertItem(i, wxString::Format("%d",vAlumno[i].VerID()));
		lista->SetItem(index, 1, vAlumno[i].VerNombre() );
		lista->SetItem(index, 2, wxString::Format("%d", vAlumno[i].VerDNI()) );		
		
		if(vAlumno[i].VerEstadoDeSancion()==true){
			lista->SetItem(index, 3,"Sancionado" );
		}else{
			lista->SetItem(index, 3,"No Sancionado" );
		}
	}
	lista->Thaw();	
}

void VentanaParaBibliotecario::CargarListaLibros(wxListCtrl* lista){
	lista->DeleteAllItems();
	lista->Freeze();
	vLibro = sistema->VerContenido<Libro>(sistema->libros(),true);
	
	for(int i=0;i<vLibro.size();i++) { 
		long index = lista->InsertItem(i, wxString::Format("%d",vLibro[i].VerID()));
		lista->SetItem(index, 1, vLibro[i].VerNombre() );
		
		if(vLibro[i].EstadoDisponibilidad()==true){
			lista->SetItem(index, 2,"Disponible" );
		}else{
			lista->SetItem(index, 2,"No Disponible" );
		}
		
		lista->SetItem(index, 3, vLibro[i].VerAutores() );		
	}
	lista->Thaw();	
}

void VentanaParaBibliotecario::CargarListaBibliotecario(wxListCtrl* lista){
	lista->DeleteAllItems();
	lista->Freeze();
	vBibliotecario = sistema->VerContenido<Bibliotecario>(sistema->bibliotecarios(),true);
	
	for(int i=0;i<vBibliotecario.size();i++) { 
		long index = lista->InsertItem(i, wxString::Format("%d",vBibliotecario[i].VerID()));
		lista->SetItem(index, 1, vBibliotecario[i].VerNombre() );
		lista->SetItem(index, 2, wxString::Format("%d", vBibliotecario[i].VerDNI()) );		
	}
	lista->Thaw();
}

void VentanaParaBibliotecario::OnRadioButton_CambiaPestana(wxCommandEvent& event){
	if(m_radio_Libros->GetValue()){
		m_Bibliotecario_frameActual->SetSelection(0);
	}
	else if(m_radio_InfoLibros->GetValue()){
		m_Bibliotecario_frameActual->SetSelection(1);
		CargarListaLibros(m_list_libros);
	}
	else if(m_radio_Etiquetas->GetValue()){
		m_Bibliotecario_frameActual->SetSelection(2);
	}
	else if(m_radio_Alumnos->GetValue()){
		m_Bibliotecario_frameActual->SetSelection(3);
		CargarListaAlumnos(m_list_Alumnos);
	}				
	else if(m_radio_Bibliotecarios->GetValue()){
		m_Bibliotecario_frameActual->SetSelection(4);
		CargarListaBibliotecario(m_list_Bibliotecarios);
	}
	this->Layout();
}

void VentanaParaBibliotecario::OnButtonClickPrestarLibro( wxCommandEvent& event )  {
	long id = m_list_Alumnos->GetNextItem(-1,wxLIST_NEXT_ALL, wxLIST_STATE_SELECTED);
	if(id != -1){
		if(id >= 0 and id <= vAlumno.size()){
			DialogoPrestamo *nueva= new DialogoPrestamo(this,vAlumno[id]);
			nueva->ShowModal();
			nueva->Destroy();
		}
	}
}

void VentanaParaBibliotecario::OnButtonClickHistorialLibro( wxCommandEvent& event )  {
	long id = m_list_libros->GetNextItem(-1,wxLIST_NEXT_ALL, wxLIST_STATE_SELECTED);
	if(id != -1){
		if(id >= 0 and id <= vLibro.size()){
			DialogoHistorial *nueva= new DialogoHistorial(this,vLibro[id]);
			nueva->ShowModal();
			nueva->Destroy();
		}
	}
}

void VentanaParaBibliotecario::OnButtonClickHistorialAlumno( wxCommandEvent& event )  {
	long id = m_list_Alumnos->GetNextItem(-1,wxLIST_NEXT_ALL, wxLIST_STATE_SELECTED);
	if(id != -1){
		if(id >= 0 and id <= vAlumno.size()){
			DialogoHistorial *nueva= new DialogoHistorial(this,vAlumno[id]);
			nueva->ShowModal();
			nueva->Destroy();
		}
	}
}

void VentanaParaBibliotecario::MuestraListaResultadoBibliotecario(wxListCtrl* lista){
	if(vResultadoBibliotecario.size()==0){
		wxMessageBox("No hay nadie con ese nombre","Sin coincidencias",wxOK|wxICON_INFORMATION);
		return;
	}
	lista->Freeze();
	lista->DeleteAllItems();
	for(int i=0;i<vResultadoBibliotecario.size();i++) { 
		long index = lista->InsertItem(i,wxString::Format("%d",vResultadoBibliotecario[i].VerID()));
		lista->SetItem(index, 1,vResultadoBibliotecario[i].VerNombre());
		lista->SetItem(index, 2,wxString::Format("%d", vResultadoBibliotecario[i].VerDNI()));
	}
	lista->Thaw();
}

void VentanaParaBibliotecario::MuestraListaResultadoAlumno(wxListCtrl* lista){
	if(vResultadoAlumno.size()==0){
		wxMessageBox("No hay nadie con ese nombre","Sin coincidencias",wxOK|wxICON_INFORMATION);
		return;
	}
	lista->Freeze();
	lista->DeleteAllItems();
	for(int i=0;i<vResultadoAlumno.size();i++) { 
		long index = lista->InsertItem(i, wxString::Format("%d",vResultadoAlumno[i].VerID()));
		lista->SetItem(index, 1, vResultadoAlumno[i].VerNombre() );
		lista->SetItem(index, 2, wxString::Format("%d", vResultadoAlumno[i].VerDNI()) );		
	}
	lista->Thaw();
}

void VentanaParaBibliotecario::MuestraListaResultadoLibro(wxListCtrl* lista){
	if(vResultadoLibro.size()==0){
		wxMessageBox("No hay ningun libro con ese nombre","Sin coincidencias",wxOK|wxICON_INFORMATION);
		return;
	}
	lista->Freeze();
	lista->DeleteAllItems();
	for(int i=0;i<vResultadoLibro.size();i++) { 
		long index = lista->InsertItem(i, wxString::Format("%d",vResultadoLibro[i].VerID()));
		lista->SetItem(index, 1, vResultadoLibro[i].VerNombre() );
		
		if(vResultadoLibro[i].EstadoDisponibilidad() == true){
			lista->SetItem(index, 2, "Disponible");
		} else {
			lista->SetItem(index, 2, "No Disponible");
		}
		
		lista->SetItem(index, 3, vResultadoLibro[i].VerAutores() );	
	}
	lista->Thaw();
}

void VentanaParaBibliotecario::Onclick_Boton_Buscar_Frase( wxCommandEvent& event )  {
	string palabra;
	if(m_radio_Libros->GetValue()){
		// ...
	}
	else if(m_radio_InfoLibros->GetValue()){
		palabra=mtext_Buscador_frase->GetValue().ToStdString();
		vResultadoLibro = navega.Relacionados<Libro>(palabra,vLibro );
		MuestraListaResultadoLibro(m_list_libros);
	}
	else if(m_radio_Etiquetas->GetValue()){
		m_Bibliotecario_frameActual->SetSelection(2);
	}
	else if(m_radio_Alumnos->GetValue()){
		palabra=mtext_Buscador_frase->GetValue().ToStdString();
		vResultadoAlumno = navega.Relacionados<Alumno>(palabra,vAlumno );
		MuestraListaResultadoAlumno(m_list_Alumnos);
	}				
	else if(m_radio_Bibliotecarios->GetValue()){
		palabra=mtext_Buscador_frase->GetValue().ToStdString();
		vResultadoBibliotecario = navega.Relacionados<Bibliotecario>(palabra,vBibliotecario );
		MuestraListaResultadoBibliotecario(m_list_Bibliotecarios);
	}
	this->Layout();
}

void VentanaParaBibliotecario::onclickbutton_eliminar( wxCommandEvent& event )  {
	if(m_radio_Alumnos->GetValue()){
		long id = m_list_Alumnos->GetNextItem(-1,wxLIST_NEXT_ALL, wxLIST_STATE_SELECTED);
		if(id != -1){
			if(id >= 0 and id <= vAlumno.size()){
				Dialogo_Eliminar *nueva= new Dialogo_Eliminar(this,id,sistema,sistema->alumnos(),2,vAlumno[id].VerNombre());
				if (nueva->ShowModal() == wxID_OK){
					CargarListaAlumnos(m_list_Alumnos); 
				}
				nueva->Destroy();
			}
		}
	}				
	else if(m_radio_Bibliotecarios->GetValue()){
		m_Bibliotecario_frameActual->SetSelection(4);
		CargarListaBibliotecario(m_list_Bibliotecarios);
	}
	this->Layout();
}

void VentanaParaBibliotecario::OnButtonclick_Sancionar( wxCommandEvent& event )  {
	long fila = m_list_Alumnos->GetNextItem(-1, wxLIST_NEXT_ALL, wxLIST_STATE_SELECTED);
	
	if(fila != -1){
		wxString idStr = m_list_Alumnos->GetItemText(fila, 0);
		long idReal;
		idStr.ToLong(&idReal);
		
		Bibliotecario admin(sistema);
		admin.Sancionar(idReal, true);
		wxMessageBox("Sancionado", "Ejecucion Realizada", wxOK|wxICON_INFORMATION);
	}
	CargarListaAlumnos(m_list_Alumnos);
}

void VentanaParaBibliotecario::OnButtonclick_Sacar_Sancion( wxCommandEvent& event )  {
	long fila = m_list_Alumnos->GetNextItem(-1, wxLIST_NEXT_ALL, wxLIST_STATE_SELECTED);
	
	if(fila != -1){
		wxString idStr = m_list_Alumnos->GetItemText(fila, 0);
		long idReal;
		idStr.ToLong(&idReal);
		
		Bibliotecario admin(sistema);
		admin.Sancionar(idReal, false);
		wxMessageBox("Sancion Eliminada", "Ejecucion Realizada", wxOK|wxICON_INFORMATION);
	}
	CargarListaAlumnos(m_list_Alumnos);
}
