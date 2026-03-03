#include "DialogoEditarLibro.h"

<<<<<<< Updated upstream


=======
// 1. ¡AQUÍ ESTÁ EL CAMBIO IMPORTANTE! 
// Cambiar : MyDialogEditarLibro(parent) por : MyDialogAgregarEditarLibro(parent)
>>>>>>> Stashed changes
DialogoEditarLibro::DialogoEditarLibro(wxWindow *parent) : MyDialogAgregarEditarLibro(parent) {
	
}

// 2. Implementar el evento que sí existe
void DialogoEditarLibro::OnclikButtonClickEdicion( wxCommandEvent& event ) {
	event.Skip();
}

DialogoEditarLibro::~DialogoEditarLibro() {
	
}
<<<<<<< Updated upstream

void DialogoEditarLibro::OnclikButtonClickEdicion( wxCommandEvent& event )  {
	event.Skip();
}

=======
>>>>>>> Stashed changes
