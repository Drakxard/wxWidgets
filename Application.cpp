#include <wx/image.h>
#include "Application.h"
#include "VentanaLogin.h"
#include "wxfb_project.h"
IMPLEMENT_APP(Application)

bool Application::OnInit() {
	wxInitAllImageHandlers();
	VentanaLogin *win = new VentanaLogin(NULL);
	win->Show();
	
	 
	
	return true;
}

