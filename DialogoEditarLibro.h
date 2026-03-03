#ifndef DIALOGOEDITARLIBRO_H
#define DIALOGOEDITARLIBRO_H
<<<<<<< Updated upstream
//#include "ProyBaseEditarLibro.h" //Lo cambie por el de abajo ya que el include corresponde con el de abajo
#include "ProyBaseAgregarEditarLibro.h"
class DialogoEditarLibro : public MyDialogAgregarEditarLibro {
	
private:
	
protected:
	void OnclikButtonClickEdicion( wxCommandEvent& event )  override;
	void m_button_NuevoElemento_cancelar( wxCommandEvent& event )  ;
	void OnButtonClickCerrar( wxCommandEvent& event )  ;
=======

// 1. Incluir el archivo base correcto
#include "ProyBaseAgregarEditarLibro.h" 

// 2. Heredar de la clase correcta
class DialogoEditarLibro : public MyDialogAgregarEditarLibro { 
	
protected:
	// 3. Poner solo los eventos que existen en la clase base
	void OnclikButtonClickEdicion( wxCommandEvent& event ) override;
>>>>>>> Stashed changes
	
public:
	DialogoEditarLibro(wxWindow *parent=NULL);
	~DialogoEditarLibro();
};

#endif
