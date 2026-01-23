#ifndef VENTANAHISTORIAL_H
#define VENTANAHISTORIAL_H
#include "wxfb_project.h"

class VentanaHistorial : public MyFrameHistorial {
	
private:
	
protected:
	
public:
	VentanaHistorial(wxWindow *parent=NULL);
	void CargarLista(wxListCtrl* lista);
	~VentanaHistorial();
};

#endif

