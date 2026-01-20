#ifndef VENTANAPARABIBLIOTECARIO_H
#define VENTANAPARABIBLIOTECARIO_H
#include "wxfb_project.h"

class VentanaParaBibliotecario : public MyFrameInicioCorrectoBibliotecario {
	
private:
	
protected:
	void OnRadioButton_CambiaPestana( wxCommandEvent& event )  override;
		
public:
	VentanaParaBibliotecario(wxWindow *parent=NULL);
	~VentanaParaBibliotecario();
	
	
};

#endif

