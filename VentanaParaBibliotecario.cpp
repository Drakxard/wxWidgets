#include "VentanaParaBibliotecario.h"
#include "DialogoPrestamo.h"
#include "DialogoHistorial.h"


using namespace std;

VentanaParaBibliotecario::VentanaParaBibliotecario(wxWindow *parent) : MyFrameInicioCorrectoBibliotecario(parent) {
	///Para crear columnas a la Tabla, en diseñador no encontre opcion
	
	///AlUMNO
	m_list_Alumnos->InsertColumn(0, "ID", wxLIST_FORMAT_LEFT, 50);
	m_list_Alumnos->InsertColumn(1, "Nombre", wxLIST_FORMAT_LEFT, 200);
	m_list_Alumnos->InsertColumn(2, "DNI", wxLIST_FORMAT_LEFT, 100);
	
	m_list_Alumnos->SetSingleStyle(wxLC_HRULES); // Líneas horizontales
	m_list_Alumnos->SetSingleStyle(wxLC_VRULES); // Líneas verticaless
	///BIBLIOTECARIO
	m_list_Bibliotecarios->InsertColumn(0, "ID", wxLIST_FORMAT_LEFT, 50);
	m_list_Bibliotecarios->InsertColumn(1, "Nombre", wxLIST_FORMAT_LEFT, 200);
	m_list_Bibliotecarios->InsertColumn(2, "DNI", wxLIST_FORMAT_LEFT, 100);
	
	m_list_Bibliotecarios->SetSingleStyle(wxLC_HRULES); // Líneas horizontales
	m_list_Bibliotecarios->SetSingleStyle(wxLC_VRULES); // Líneas verticaless
		
}


VentanaParaBibliotecario::~VentanaParaBibliotecario() {	
}
void VentanaParaBibliotecario::CargarListaAlumnos(wxListCtrl* lista){
	//Limpiamos la tabla
	lista->DeleteAllItems();
	
	//
	lista->Freeze();
	vAlumno = sistema.VerContenido<Alumno>(sistema.pathAlumnos(),true);
	for(int i=0;i<vAlumno.size();i++) { 
		///Llenamos con ID
		long index = lista -> InsertItem(i, wxString::Format("%d",vAlumno[i].VerID()));
		
		///CargarNombreDelAlumno
	
		lista-> SetItem(index, 1, vAlumno[i].VerNombre() );
		
		///CargamosDni
		lista-> SetItem(index,2, wxString::Format("%d", vAlumno[i].VerDNI()) );		
	}
	///Mostrar todo de golpe
	lista->Thaw();	
}


void VentanaParaBibliotecario::CargarListaBibliotecario(wxListCtrl* lista){
	//Limpiamos la tabla
	lista->DeleteAllItems();
	
	//
	lista->Freeze();
	vBibliotecario = sistema.VerContenido<Bibliotecario>(sistema.pathBibliotecarios(),true);
	for(int i=0;i<vBibliotecario.size();i++) { 
		///Llenamos con ID
		long index = lista -> InsertItem(i, wxString::Format("%d",vBibliotecario[i].VerID()));
		
		///CargarNombreDelAlumno
		
		lista-> SetItem(index, 1, vBibliotecario[i].VerNombre() );
		
		///CargamosDni
		lista-> SetItem(index,2, wxString::Format("%d", vBibliotecario[i].VerDNI()) );		
	}
	///Mostrar todo de golpe
	lista->Thaw();
	
}


void VentanaParaBibliotecario::OnRadioButton_CambiaPestana(wxCommandEvent& event){
	if(m_radio_Libros->GetValue()){
		m_Bibliotecario_frameActual->SetSelection(0);
	}
	if(m_radio_InfoLibros->GetValue()){
		m_Bibliotecario_frameActual->SetSelection(1);
	}
	if(m_radio_Etiquetas->GetValue()){
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
	this->Layout();  ///Actualizamos al frame actual
}



void VentanaParaBibliotecario::OnButtonClickPrestarLibro( wxCommandEvent& event )  {
	long id = m_list_Alumnos->GetNextItem(-1,wxLIST_NEXT_ALL, wxLIST_STATE_SELECTED);
	if(id != -1){
	if(id >= 0 and id <= vAlumno.size()){
	
		DialogoPrestamo *nueva= new DialogoPrestamo(this,vAlumno[id]);
		nueva->ShowModal();
	}
	}
}

void VentanaParaBibliotecario::OnButtonClickHistorialAlumno( wxCommandEvent& event )  {
	long id = m_list_Alumnos->GetNextItem(-1,wxLIST_NEXT_ALL, wxLIST_STATE_SELECTED);
	if(id != -1){
		if(id >= 0 and id <= vAlumno.size()){
			
			DialogoHistorial *nueva= new DialogoHistorial(this,vAlumno[id]);
			nueva->ShowModal();
		}
	}
}



void VentanaParaBibliotecario::Onclick_Boton_Buscar_Frase( wxCommandEvent& event )  {
	
}

