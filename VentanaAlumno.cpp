#include "VentanaAlumno.h"

VentanaAlumno::VentanaAlumno(wxWindow *parent) : MyFrameInicioCorrectoAlumno(parent) {
	
}

VentanaAlumno::~VentanaAlumno() {
	
}

void VentanaAlumno::OnRadioButton_CambiaPestana( wxCommandEvent& event )  {
	event.Skip();
}

void VentanaAlumno::OnRadioButton_CambiaPesta( wxCommandEvent& event )  {
	event.Skip();
}

