#ifndef DIALOGOEDITARLIBRO_H
#define DIALOGOEDITARLIBRO_H
//#include "ProyBaseEditarLibro.h" //Lo cambie por el de abajo ya que el include corresponde con el de abajo
#include "ProyBaseAgregarEditarLibro.h"
class DialogoEditarLibro : public MyDialogAgregarEditarLibro {
	
private:
	
protected:
	void OnclikButtonClickEdicion( wxCommandEvent& event )  override;
	void m_button_NuevoElemento_cancelar( wxCommandEvent& event )  ;
	void OnButtonClickCerrar( wxCommandEvent& event )  ;
	
public:
	DialogoEditarLibro(wxWindow *parent=NULL);
	~DialogoEditarLibro();
};

#endif

