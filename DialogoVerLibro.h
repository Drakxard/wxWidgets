#ifndef DIALOGOVERLIBRO_H
#define DIALOGOVERLIBRO_H
#include "ProyBaseVerLibro.h"
#include "Funcionalidades/libro/libro.h"
#include "Funcionalidades/alumno/alumno.h"
#include "Funcionalidades/bibliotecario/bibliotecario.h"

class DialogoVerLibro : public MyDialogVerLibro {
	
private:
	Libro actual;
	Alumno actualAlumno;
	Bibliotecario actualBibliotecario;
protected:
	void OnButtonClickReservar( wxCommandEvent& event )  override;
	void OnclikButtonClickEdicion( wxCommandEvent& event )  override;
	
public:
	void OnTagClick(wxCommandEvent& event);	
	DialogoVerLibro(wxWindow *parent,Libro& actual,Alumno & actualAlumno);
	DialogoVerLibro(wxWindow *parent,Libro& actual,Bibliotecario& actualBibliotecario);
	
	~DialogoVerLibro();
};

#endif

