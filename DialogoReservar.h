#ifndef DIALOGORESERVAR_H
#define DIALOGORESERVAR_H
#include "ProyBaseReservar.h"
#include "Funcionalidades/libro/libro.h"
#include "Funcionalidades/alumno/alumno.h"

class DialogoReservar : public MyDialogReservar {
	
private:
	Libro libroAReservar;
	Alumno alumnoReserva;
	
protected:
	// Sobrescribimos los eventos que creaste en wxFormBuilder
	void OnBotonConfirmarClick( wxCommandEvent& event ) override;
	void OnBotonCancelarClick( wxCommandEvent& event ) override;
	
public:
	// Constructor que recibe el libro y el alumno
	DialogoReservar(wxWindow *parent, Libro& libro, Alumno& alumno);
	~DialogoReservar();
};

#endif
