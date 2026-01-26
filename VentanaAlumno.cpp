#include "VentanaAlumno.h"

VentanaAlumno::VentanaAlumno(wxWindow *parent) : MyFrameInicioCorrectoAlumno(parent) {
	
}

VentanaAlumno::~VentanaAlumno() {
	
}

void VentanaAlumno::OnRadioButton_CambiaPestana( wxCommandEvent& event )  {
	event.Skip();
}


void VentanaAlumno::OnButtonClickPrestarLibro( wxCommandEvent& event )  {
	event.Skip();
}

void VentanaAlumno::OnButtonClickHistorialAlumno( wxCommandEvent& event )  {
	event.Skip();
}

