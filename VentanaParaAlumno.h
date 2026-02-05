#ifndef VENTANAPARAALUMNO_H
#define VENTANAPARAALUMNO_H
#include "wxfb_project.h"
#include "Funcionalidades/alumno/alumno.h"
#include "Funcionalidades/system/system.h"
#include "Funcionalidades/bibliotecario/bibliotecario.h"

class VentanaParaAlumno : public MyFrameInicioCorrectoAlumno {
	
private:
	System sistema;
	vector<Alumno> vAlumno; 
	vector<Bibliotecario> vBibliotecario;
	vector<Libro>vLibros;
protected:
	void Onclick_Boton_Buscar_Frase( wxCommandEvent& event )  override;
	void OnRadioButton_CambiaPestana( wxCommandEvent& event )  override;
	void OnButtonClickPrestarLibro( wxCommandEvent& event )  override;
	void OnButtonClickHistorialAlumno( wxCommandEvent& event )  override;
	
	
	void CargarListaInfoLibros(wxListCtrl* lista);
	void CargarListaEtiquetas(wxListCtrl* lista);
	void CargarListaAlumnos(wxListCtrl* lista);
	void CargarListaBibliotecario(wxListCtrl* lista);
	
public:
	VentanaParaAlumno(wxWindow *parent=NULL);
	~VentanaParaAlumno();
};

#endif

