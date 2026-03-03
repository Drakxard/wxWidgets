#ifndef DIALOGOMULTA_H
#define DIALOGOMULTA_H
#include "ProyBaseMulta.h"
#include "Funcionalidades/alumno/alumno.h"

class DialogoMulta : public MyDialogMulta {
	
private:
	size_t multado;
protected:
	
public:
	DialogoMulta(wxWindow *parent, size_t& multado);
	~DialogoMulta();
};

#endif

