#ifndef DIALOGOEDITARLIBRO_H
#define DIALOGOEDITARLIBRO_H

// 1. Incluir el archivo base correcto
#include "ProyBaseAgregarEditarLibro.h" 

// 2. Heredar de la clase correcta
class DialogoEditarLibro : public MyDialogAgregarEditarLibro { 
	
protected:
	// 3. Poner solo los eventos que existen en la clase base
	void OnclikButtonClickEdicion( wxCommandEvent& event ) override;
	
public:
	DialogoEditarLibro(wxWindow *parent=NULL);
	~DialogoEditarLibro();
};

#endif
