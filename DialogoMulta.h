#ifndef DIALOGOMULTA_H
#define DIALOGOMULTA_H
#include "ProyBaseMulta.h"
#include "Funcionalidades/alumno/alumno.h"
#include "multa.h"

class DialogoMulta : public MyDialogMulta {
	
private:
	multa actual;
protected:
	
public:
	void CargarLibrosPrestados();
	DialogoMulta(wxWindow *parent, multa multado);
	~DialogoMulta();
};

#endif

