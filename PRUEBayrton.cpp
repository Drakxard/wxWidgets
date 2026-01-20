#include "PRUEBayrton.h"
#include <wx/msgdlg.h>

PRUEBayrton::PRUEBayrton(wxWindow *parent) : CreacionAyrton(parent) {
	
}

PRUEBayrton::~PRUEBayrton() {
	
}

void PRUEBayrton::OnclickButton_aceptar( wxCommandEvent& event )  {
//	event.Skip();
	wxMessageBox("Aceptado","Verificación",wxOK|wxICON_EXCLAMATION);
	return;
}


void PRUEBayrton::cancelar( wxCommandEvent& event )  {
	//	event.Skip();
	wxMessageBox("Aceptado","Verificación",wxOK|wxICON_ERROR);
	return;
}

