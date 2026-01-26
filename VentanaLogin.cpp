#include "VentanaLogin.h"
#include <wx/msgdlg.h>
#include <string>
#include "VentanaPrincipal.h"
#include "VentanaCrearCuenta.h"
using namespace std;

VentanaLogin::VentanaLogin(wxWindow *parent) : MyFrameLogin(parent) {
	
}

VentanaLogin::~VentanaLogin() {
	
}

void VentanaLogin::OnclikBienvenido_Iniciar( wxCommandEvent& event )  {
	long dni; 
	if(!m_text_Bienvenido_Valor->GetValue().ToLong(&dni)){
		wxMessageBox("Eso no es un dni","Error",wxOK|wxICON_ERROR);
		return;
	}
	
	//Bibliotecario o no, clase me lo dice
	bool tipoDeUsuario = true;

	if(tipoDeUsuario) {
		VentanaPrincipal *ventana = new VentanaPrincipal(NULL);
		ventana->Show();
		this->Close();
	}else{
		OnButtonClickCrearCuenta(event);
	}
}
void VentanaLogin::onTextEnter_Bienvenido_Confirmar( wxCommandEvent& event )  {
	OnclikBienvenido_Iniciar( event );
}
void VentanaLogin::OnButtonClickCrearCuenta( wxCommandEvent& event )  {
	VentanaCrearCuenta *ventanaCrear = new VentanaCrearCuenta(NULL);
	ventanaCrear->Show();
	this->Close();
}
