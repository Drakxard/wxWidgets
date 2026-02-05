#ifndef DIALOGO_ELIMINAR_H
#define DIALOGO_ELIMINAR_H
#include "wxfb_project.h"
#include "Funcionalidades/system/system.h"

class Dialogo_Eliminar : public MyDialog_Eliminar {
	
private:
	System sistema;
protected:
	void onTextEnter_IDa_Eliminar( wxCommandEvent& event, size_t id )  ;
	void OnButtonClick_Cancela_Eliminar( wxCommandEvent& event )  override;
	void OnclikContinuar_Eliminar( wxCommandEvent& event, size_t id )  ;
	
	
public:
	Dialogo_Eliminar(wxWindow *parent=NULL);
	~Dialogo_Eliminar();
};

#endif

