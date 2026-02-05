#include "Dialogo_Eliminar.h"
#include <wx/msgdlg.h>
#include "Funcionalidades/alumno/alumno.h"
#include <vector>
using namespace std;

Dialogo_Eliminar::Dialogo_Eliminar(wxWindow *parent) : MyDialog_Eliminar(parent) {
	
}



Dialogo_Eliminar::~Dialogo_Eliminar() {
	
}

void Dialogo_Eliminar::onTextEnter_IDa_Eliminar( wxCommandEvent& event, size_t id )  {
	
	if(m_text_ID_Eliminar->GetValue() == ""){
		wxMessageBox("No hay nadie con ese ID","Sin coincidencias",wxOK|wxICON_INFORMATION);
		return;
	}
//	
	OnclikContinuar_Eliminar(event, id);
}

void Dialogo_Eliminar::OnButtonClick_Cancela_Eliminar( wxCommandEvent& event )  {
	event.Skip();
}

void Dialogo_Eliminar::OnclikContinuar_Eliminar( wxCommandEvent& event, size_t id )  {
	vector<Alumno> Valumnos=sistema.VerContenido<Alumno>(sistema.pathAlumnos(),true);
	sistema.Eliminar<Alumno>(id, Valumnos);
	sistema.Guardar<Alumno>(sistema.pathAlumnos(),Valumnos);
}

