#ifndef VENTANAALUMNO_H
#define VENTANAALUMNO_H
#include "wxfb_project.h"

class VentanaAlumno : public MyFrameInicioCorrectoAlumno {
	
private:
	
protected:
	void OnRadioButton_CambiaPesta( wxCommandEvent& event )  override;
	void OnRadioButton_CambiaPestana( wxCommandEvent& event )  override;
	
public:
	VentanaAlumno(wxWindow *parent=NULL);
	~VentanaAlumno();
};

#endif

