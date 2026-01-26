#ifndef CREARCUENTA_H
#define CREARCUENTA_H
#include "wxfb_project.h"

class CrearCuenta : public MyFrameCrearCuenta {
	
private:
	
protected:
	void OnButtonClickCerrar( wxCommandEvent& event )  override;
	void OnclikBienvenido_Iniciar( wxCommandEvent& event )  override;
	
public:
	CrearCuenta(wxWindow *parent=NULL);
	~CrearCuenta();
};

#endif

