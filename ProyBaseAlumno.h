///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 4.2.1-0-g80c4cb6)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/string.h>
#include <wx/textctrl.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/button.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/sizer.h>
#include <wx/radiobut.h>
#include <wx/panel.h>
#include <wx/simplebook.h>
#include <wx/scrolwin.h>
#include <wx/calctrl.h>
#include <wx/listctrl.h>
#include <wx/frame.h>

///////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
/// Class MyFrameInicioCorrectoAlumno
///////////////////////////////////////////////////////////////////////////////
class MyFrameInicioCorrectoAlumno : public wxFrame
{
	private:

	protected:
		wxTextCtrl* mtext_Buscador_frase;
		wxButton* Boton_Buscar_Frase;
		wxRadioButton* m_radio_Libros;
		wxRadioButton* m_radio_Reservar;
		wxSimplebook* m_panel_botones_internos;
		wxPanel* m_panel7;
		wxPanel* m_panel_Reservas;
		wxRadioButton* m_radio_nombreLibros_Reservas;
		wxRadioButton* m_radio_Nombre_Usuario_Reservas;
		wxRadioButton* m_radio_Estadode_Reserva;
		wxSimplebook* m_Bibliotecario_frameActual;
		wxScrolledWindow* m_panel_Bibliotecario_Libros;
		wxBoxSizer* bSizerLibro;
		wxPanel* m_panel_Reservar;
		wxCalendarCtrl* m_calendar1;
		wxListCtrl* m_list_Reservas;
		wxButton* m_button14111;

		// Virtual event handlers, override them in your derived class
		virtual void Onclick_Boton_Buscar_Frase( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnRadioButton_CambiaPestana( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnButtonClickEliminar( wxCommandEvent& event ) { event.Skip(); }


	public:

		MyFrameInicioCorrectoAlumno( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("ALUMNO"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( -1,-1 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~MyFrameInicioCorrectoAlumno();

};

