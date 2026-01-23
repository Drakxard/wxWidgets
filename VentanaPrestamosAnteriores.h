#ifndef VENTANAPRESTAMOSANTERIORES_H
#define VENTANAPRESTAMOSANTERIORES_H
#include "wxfb_project.h"

class VentanaPrestamosAnteriores : public MyFramePrestamosAnteriores {
	
private:
	
protected:
	void OnRadioButton_MostrarPrestamosAnteriores( wxCommandEvent& event )  override;
	
public:
	VentanaPrestamosAnteriores(wxWindow *parent=NULL);
	~VentanaPrestamosAnteriores();
};

#endif

