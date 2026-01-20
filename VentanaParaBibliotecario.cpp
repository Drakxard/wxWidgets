#include "VentanaParaBibliotecario.h"

VentanaParaBibliotecario::VentanaParaBibliotecario(wxWindow *parent) : MyFrameInicioCorrectoBibliotecario(parent) {
	
}

VentanaParaBibliotecario::~VentanaParaBibliotecario() {
	
}



void VentanaParaBibliotecario::OnRadioButton_CambiaPestana( wxCommandEvent& event )  {
	event.Skip();
}

