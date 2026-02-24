///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 4.2.1-0-g80c4cb6)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/intl.h>
#include <wx/string.h>
#include <wx/stattext.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/textctrl.h>
#include <wx/sizer.h>
#include <wx/button.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/listctrl.h>
#include <wx/dialog.h>

///////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
/// Class MyDialogEditarLibro
///////////////////////////////////////////////////////////////////////////////
class MyDialogEditarLibro : public wxDialog
{
	private:

	protected:
		wxStaticText* m_staticTextEditarNombre;
		wxTextCtrl* m_textCtrlEditarNombreValor;
		wxStaticText* m_staticTextEditarDescripcion;
		wxTextCtrl* m_textCtrlEditarDescripcionValor;
		wxStaticText* m_staticTextEditarAutores;
		wxTextCtrl* m_textCtrlEditarAutoresValor;
		wxButton* m_button3;
		wxButton* m_button4;
		wxButton* m_button5;
		wxListCtrl* m_listCtrlTags;
		wxButton* m_button1;
		wxButton* m_button2;

		// Virtual event handlers, override them in your derived class
		virtual void m_button_NuevoElemento_cancelar( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnButtonClickCerrar( wxCommandEvent& event ) { event.Skip(); }


	public:

		MyDialogEditarLibro( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("EditarLibro"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE );

		~MyDialogEditarLibro();

};

