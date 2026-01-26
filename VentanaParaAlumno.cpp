#include "VentanaParaAlumno.h"

VentanaParaAlumno::VentanaParaAlumno(wxWindow *parent) : MyFrameInicioCorrectoAlumno(parent) {
	
}

VentanaParaAlumno::~VentanaParaAlumno() {
	
}

void VentanaParaAlumno::OnRadioButton_CambiaPestana( wxCommandEvent& event )  {
	event.Skip();
}

void VentanaParaAlumno::OnButtonClickPrestarLibro( wxCommandEvent& event )  {
	event.Skip();
}

void VentanaParaAlumno::OnButtonClickHistorialAlumno( wxCommandEvent& event )  {
	event.Skip();
}

