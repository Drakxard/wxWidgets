#ifndef VENTANAPARABIBLIOTECARIO_H
#define VENTANAPARABIBLIOTECARIO_H
#include "wxfb_project.h"
#include "Funcionalidades/alumno/alumno.h"
#include "Funcionalidades/system/system.h"
#include "Funcionalidades/bibliotecario/bibliotecario.h"


class VentanaParaBibliotecario : public MyFrameInicioCorrectoBibliotecario {
	
private:
	System sistema;
	vector<Alumno> vAlumno; vector<Bibliotecario> vBibliotecario;
protected:
	void Onclick_Boton_Buscar_Frase( wxCommandEvent& event )  override;
	void Onclick_Boton_Buscar_Frase( wxCommandEvent& event )  override;
	void OnButtonClickPrestarLibro( wxCommandEvent& event )  override;
	void OnButtonClickHistorialAlumno( wxCommandEvent& event )  override;
	void OnRadioButton_CambiaPestana(wxCommandEvent& event);
	void CargarListaAlumnos(wxListCtrl* lista);
	void CargarListaBibliotecario(wxListCtrl* lista);
public:
	VentanaParaBibliotecario(wxWindow *parent=NULL);
	~VentanaParaBibliotecario();
	
	
};

#endif

