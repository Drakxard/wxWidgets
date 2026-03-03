#include "DialogoMulta.h"
#include "Funcionalidades/system/system.h"

DialogoMulta::DialogoMulta(wxWindow *parent, size_t multado) : MyDialogMulta(parent) {
	System sistema;
	this->multado = multado;
	vector<multa>vMultas = sistema.VerContenido(sistema.multas(),true);
	EncontrarMulta(multado);
}
DialogoMulta::~DialogoMulta() {
	
}
