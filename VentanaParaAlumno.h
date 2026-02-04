#ifndef VENTANAPARAALUMNO_H
#define VENTANAPARAALUMNO_H
#include "wxfb_project.h"

class VentanaParaAlumno : public MyFrameInicioCorrectoAlumno {
	
private:
	
protected:
	void OnRadioButton_CambiaPestana( wxCommandEvent& event )  override;
	void OnButtonClickPrestarLibro( wxCommandEvent& event )  override;
	void OnButtonClickHistorialAlumno( wxCommandEvent& event )  override;
	
public:
	VentanaParaAlumno(wxWindow *parent=NULL);
	~VentanaParaAlumno();
};

#endif

