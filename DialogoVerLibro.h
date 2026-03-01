#ifndef DIALOGOVERLIBRO_H
#define DIALOGOVERLIBRO_H
#include "ProyBaseVerLibro.h"
#include "Funcionalidades/libro/libro.h"
#include "Funcionalidades/alumno/alumno.h"

class DialogoVerLibro : public MyDialogVerLibro {
	
private:
	Libro actual;
	Alumno actualAlumno;
protected:
	void OnButtonClickReservar( wxCommandEvent& event )  override;
	void OnclikButtonClickEdicion( wxCommandEvent& event )  override;
	
public:
	void OnTagClick(wxCommandEvent& event);	
	DialogoVerLibro(wxWindow *parent,Libro& actual,Alumno & actualAlumno);
	~DialogoVerLibro();
};

#endif

