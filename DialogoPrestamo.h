#ifndef DIALOGOPRESTAMO_H
#define DIALOGOPRESTAMO_H
#include "wxfb_project.h"
#include "Funcionalidades/alumno/alumno.h"


class DialogoPrestamo : public MyDialogPrestamo {
	
private:
	
protected:
	Alumno alumnoSeleccionado;
public:
	
	DialogoPrestamo(wxWindow *parent, Alumno alumnoSeleccionado);
	~DialogoPrestamo();
	void CargarLista(wxListCtrl* lista);
};

#endif

