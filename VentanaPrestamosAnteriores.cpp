#include "VentanaPrestamosAnteriores.h"

VentanaPrestamosAnteriores::VentanaPrestamosAnteriores(wxWindow *parent) : MyFramePrestamosAnteriores(parent) {
	
}

void VentanaPrestamosAnteriores::OnRadioButton_MostrarPrestamosAnteriores( wxCommandEvent& event )  {
	bool mostrar = OnRadioButton_MostrarPrestamosAnteriores->GetValue();
	
	bSizerListaPrestamosAnteriores->Show(mostrar);
	
	this->Layout();  ///Actualizamos al frame actual

	
}

VentanaPrestamosAnteriores::~VentanaPrestamosAnteriores() {
	
}

