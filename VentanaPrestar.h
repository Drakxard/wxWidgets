#ifndef VENTANAPRESTAR_H
#define VENTANAPRESTAR_H
#include "wxfb_project.h"

class VentanaPrestar : public MyFramePrestar {
	
private:
	
protected:
	
public:
	VentanaPrestar(wxWindow *parent=NULL);
	void CargarLista(wxListCtrl* lista);
	~VentanaPrestar();
};

#endif

