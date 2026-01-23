#include "VentanaParaBibliotecario.h"
#include "VentanaPrestar.h"
#include "VentanaHistorial.h"

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






void VentanaParaBibliotecario::CargarLista(wxListCtrl* lista){
	//Limpiamos la tabla
	lista->DeleteAllItems();
	
	//
	lista->Freeze();
	
	string test = "EjemploNombreAlumno";
	int dni = 3242352; 
	for(int i=0;i<100;i++) { 
		///Llenamos con ID
		long index = lista -> InsertItem(i, wxString::Format("%d",((i+1)*2)));
		
		///CargarNombreDelAlumno
		lista-> SetItem(index, 1, test );
		
		lista-> SetItem(index,2, wxString::Format("%d", dni) );		
	}
	///Mostrar todo de golpe
	lista->Thaw();
	
}




void VentanaParaBibliotecario::OnRadioButton_CambiaPestana(wxCommandEvent& event){
	if(m_radio_Libros->GetValue()){
		m_Bibliotecario_frameActual->SetSelection(0);
	}
	else if(m_radio_Alumnos->GetValue()){
		m_Bibliotecario_frameActual->SetSelection(1);
		CargarLista(m_list_Alumnos);
	}				
	else if(m_radio_Bibliotecarios->GetValue()){
		m_Bibliotecario_frameActual->SetSelection(2);
		CargarLista(m_list_Bibliotecarios);
	}
	this->Layout();  ///Actualizamos al frame actual
}



void VentanaParaBibliotecario::OnButtonClickPrestarLibro( wxCommandEvent& event )  {
	VentanaPrestar *nueva= new VentanaPrestar(NULL);
	nueva->Show();
}

void VentanaParaBibliotecario::OnButtonClickHistorialAlumno( wxCommandEvent& event )  {
	VentanaHistorial *nueva= new VentanaHistorial(NULL);
	nueva->Show();
}

