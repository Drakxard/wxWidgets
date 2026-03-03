#include "DialogoMulta.h"
#include "Funcionalidades/system/system.h"
#include <algorithm>
using namespace std;

DialogoMulta::DialogoMulta(wxWindow *parent, size_t Dnimultado) : MyDialogMulta(parent) {
	EncontrarMulta(Dnimultado);
	cout<<endl<<"Nombre: "<<actual.VerNombre()<<endl;
	m_staticTextMultadoNombre->SetLabel(actual.VerNombre());
	m_staticTextDni->SetLabel(to_string(actual.VerDNI()));
	m_staticTextMultaActual->SetLabel(to_string(actual.VerMultaActual()));
	m_staticTextIncremento->SetLabel(to_string(actual.VerIncrementoActual()));
	CargarLibrosPrestados();
}
DialogoMulta::~DialogoMulta() {
	
}

void DialogoMulta::EncontrarMulta(size_t Dnimultado){
	System sistema;
	vector<multa>vMultas = sistema.VerContenido<multa>(sistema.multas(),true);	
	vector<multa>::iterator it = find_if(vMultas.begin(),vMultas.end(),[Dnimultado](const multa & a){
		return a.VerDNI() == Dnimultado;		
	});
	if(it!= vMultas.end()){
		actual = *(it);
	}
	
}
void DialogoMulta::CargarLibrosPrestados(){
	
}
