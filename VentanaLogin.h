#ifndef VENTANALOGIN_H
#define VENTANALOGIN_H
#include "wxfb_project.h"

class VentanaLogin : public MyFrameLogin {
	
private:
	
protected:
	void onTextEnter_Bienvenido_Confirmar( wxCommandEvent& event )  override;
	void OnclikBienvenido_Iniciar( wxCommandEvent& event )  override;
	
public:
	VentanaLogin(wxWindow *parent=NULL);
	~VentanaLogin();
};

#endif

