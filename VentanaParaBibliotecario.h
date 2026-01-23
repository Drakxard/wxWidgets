#ifndef VENTANAPARABIBLIOTECARIO_H
#define VENTANAPARABIBLIOTECARIO_H
#include "wxfb_project.h"

class VentanaParaBibliotecario : public MyFrameInicioCorrectoBibliotecario {
	
private:
	
protected:
	void OnButtonClickPrestarLibro( wxCommandEvent& event )  override;
	void OnButtonClickHistorialAlumno( wxCommandEvent& event )  override;
	void OnRadioButton_CambiaPestana(wxCommandEvent& event);
	void CargarLista(wxListCtrl* lista);
	
public:
	VentanaParaBibliotecario(wxWindow *parent=NULL);
	~VentanaParaBibliotecario();
	
	
};

#endif

