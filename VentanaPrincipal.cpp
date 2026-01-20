#include "VentanaPrincipal.h"

VentanaPrincipal::VentanaPrincipal(wxWindow *parent) : VentanaParaBibliotecario(parent) {
	
}

VentanaPrincipal::~VentanaPrincipal() {
	
}

void CargarGridAlumnos(){
	
	
	
	
}


void VentanaPrincipal::OnRadioButton_CambiaPestana(wxCommandEvent& event){
	if(m_radio_Libros->GetValue()){
		m_Bibliotecario_frameActual->SetSelection(0);
		CargarGridAlumnos();
	}
	else if(m_radio_Alumnos->GetValue()){
			m_Bibliotecario_frameActual->SetSelection(1);}
	else if(m_radio_Bibliotecarios->GetValue()){
			m_Bibliotecario_frameActual->SetSelection(2);}
	this->Layout();  ///Actualizamos al frame actual
}
