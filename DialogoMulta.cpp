#include "DialogoMulta.h"
#include "Funcionalidades/system/system.h"
#include <algorithm>
using namespace std;

DialogoMulta::DialogoMulta(wxWindow *parent, multa multado) : MyDialogMulta(parent) {
	
	m_staticTextMultadoNombre->SetLabel(multado.VerNombre());
	m_staticTextDni->SetLabel(to_string(multado.VerDNI()));
	m_staticTextMultaActual->SetLabel(to_string(multado.VerMultaActual()));
	m_staticTextIncremento->SetLabel(to_string(multado.VerIncrementoActual()));
	CargarLibrosPrestados();
}
DialogoMulta::~DialogoMulta() {
	
}

void DialogoMulta::CargarLibrosPrestados(){
	
}
