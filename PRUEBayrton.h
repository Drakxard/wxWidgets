#ifndef PRUEBAYRTON_H
#define PRUEBAYRTON_H
#include "wxfb_project.h"

class PRUEBayrton : public CreacionAyrton {
	
private:
	
protected:
	void OnclickButton_aceptar( wxCommandEvent& event )  override;
	void cancelar( wxCommandEvent& event )  override;
	
public:
	PRUEBayrton(wxWindow *parent=NULL);
	~PRUEBayrton();
};

#endif

