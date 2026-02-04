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
#include <wx/frame.h>
#include <wx/radiobut.h>
#include <wx/statbmp.h>
#include <wx/panel.h>
#include <wx/listctrl.h>
#include <wx/simplebook.h>
#include <wx/bmpcbox.h>
#include <wx/dialog.h>

///////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
/// Class MyFrameLogin
///////////////////////////////////////////////////////////////////////////////
class MyFrameLogin : public wxFrame
{
	private:

	protected:
		wxStaticText* m_staticText17;
		wxTextCtrl* m_text_Bienvenido_Valor;
		wxButton* m_button_Bienvenido_CrearCuenta;
		wxButton* m_button_Bienvenido_Continuar;

		// Virtual event handlers, override them in your derived class
		virtual void onTextEnter_Bienvenido_Confirmar( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnButtonClickCrearCuenta( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnclikBienvenido_Iniciar( wxCommandEvent& event ) { event.Skip(); }


	public:

		MyFrameLogin( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Bienvenido"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( -1,-1 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~MyFrameLogin();

};

///////////////////////////////////////////////////////////////////////////////
/// Class MyFrameCrearCuenta
///////////////////////////////////////////////////////////////////////////////
class MyFrameCrearCuenta : public wxFrame
{
	private:

	protected:
		wxStaticText* m_staticText_CrearCuenta_ref1;
		wxTextCtrl* m_text_CrearCuenta_campo1;
		wxStaticText* m_staticText_CrearCuenta_ref2;
		wxTextCtrl* m_text_CrearCuenta_campo2;
		wxButton* m_button10;
		wxButton* m_button11;

		// Virtual event handlers, override them in your derived class
		virtual void OnButtonClickCerrar( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnclikBienvenido_Iniciar( wxCommandEvent& event ) { event.Skip(); }


	public:

		MyFrameCrearCuenta( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Crear Nueva Cuenta"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( -1,-1 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~MyFrameCrearCuenta();

};

///////////////////////////////////////////////////////////////////////////////
/// Class MyFrameInicioCorrectoBibliotecario
///////////////////////////////////////////////////////////////////////////////
class MyFrameInicioCorrectoBibliotecario : public wxFrame
{
	private:

	protected:
		wxTextCtrl* m_textCtrl2;
		wxButton* m_button1;
		wxRadioButton* m_radio_Libros;
		wxRadioButton* m_radioBtn8;
		wxRadioButton* m_radioBtn9;
		wxRadioButton* m_radio_Alumnos;
		wxRadioButton* m_radio_Bibliotecarios;
		wxSimplebook* m_Bibliotecario_frameActual;
		wxPanel* m_panel_Bibliotecario_Libros;
		wxStaticText* m_staticText4;
		wxStaticBitmap* m_bitmap2;
		wxButton* m_button19;
		wxStaticText* m_staticText18;
		wxButton* m_button20;
		wxPanel* m_panel_DetallesLibros;
		wxListCtrl* m_list_Alumnos1;
		wxButton* m_button131;
		wxButton* m_button21;
		wxButton* m_button201;
		wxButton* m_button141;
		wxPanel* m_panel_DetallesEtiquetas;
		wxListCtrl* m_list_Alumnos11;
		wxButton* m_button1311;
		wxButton* m_button22;
		wxButton* m_button1411;
		wxPanel* m_panel_Alumnos;
		wxListCtrl* m_list_Alumnos;
		wxButton* m_button13;
		wxButton* m_button14;
		wxPanel* m_panel_Bibliotecarios;
		wxListCtrl* m_list_Bibliotecarios;

		// Virtual event handlers, override them in your derived class
		virtual void OnRadioButton_CambiaPestana( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnButtonClickPrestarLibro( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnButtonClickHistorialAlumno( wxCommandEvent& event ) { event.Skip(); }


	public:

		MyFrameInicioCorrectoBibliotecario( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 514,420 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~MyFrameInicioCorrectoBibliotecario();

};

///////////////////////////////////////////////////////////////////////////////
/// Class MyFrameInicioCorrectoAlumno
///////////////////////////////////////////////////////////////////////////////
class MyFrameInicioCorrectoAlumno : public wxFrame
{
	private:

	protected:
		wxTextCtrl* m_textCtrl2;
		wxButton* m_button1;
		wxRadioButton* m_radio_Libros;
		wxRadioButton* m_radio_Alumnos;
		wxRadioButton* m_radio_Bibliotecarios;
		wxSimplebook* m_Bibliotecario_frameActual;
		wxPanel* m_panel_Bibliotecario_Libros;
		wxStaticText* m_staticText4;
		wxStaticBitmap* m_bitmap2;
		wxButton* m_button19;
		wxStaticText* m_staticText18;
		wxButton* m_button20;
		wxPanel* m_panel_Alumnos;
		wxListCtrl* m_list_Alumnos;
		wxButton* m_button13;
		wxButton* m_button14;
		wxPanel* m_panel_Bibliotecarios;
		wxListCtrl* m_list_Bibliotecarios;

		// Virtual event handlers, override them in your derived class
		virtual void OnRadioButton_CambiaPestana( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnButtonClickPrestarLibro( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnButtonClickHistorialAlumno( wxCommandEvent& event ) { event.Skip(); }


	public:

		MyFrameInicioCorrectoAlumno( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 580,420 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~MyFrameInicioCorrectoAlumno();

};

///////////////////////////////////////////////////////////////////////////////
/// Class MyFrameHistorial
///////////////////////////////////////////////////////////////////////////////
class MyFrameHistorial : public wxFrame
{
	private:

	protected:
		wxStaticText* m_staticText21;
		wxStaticText* m_staticText22;
		wxPanel* m_panel7;
		wxListCtrl* m_list_PrestamosAnteriores;

	public:

		MyFrameHistorial( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Historial"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 565,388 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~MyFrameHistorial();

};

///////////////////////////////////////////////////////////////////////////////
/// Class MyDialogPrestar
///////////////////////////////////////////////////////////////////////////////
class MyDialogPrestar : public wxDialog
{
	private:

	protected:
		wxRadioButton* m_radioBtn7;
		wxStaticText* m_staticText10;
		wxStaticText* m_staticText11;
		wxStaticText* m_staticPrestar_NombreAlumno;
		wxStaticText* m_staticPrestar_NombreAlumno_Valor;
		wxStaticText* m_staticPrestar_DniAlumno;
		wxStaticText* m_staticPrestar_DniAlumno_Valor;
		wxStaticText* m_staticText9;
		wxBitmapComboBox* m_bcomboBox1;
		wxButton* m_button15;
		wxStaticText* m_staticText23;
		wxPanel* m_panel7;
		wxListCtrl* m_list_PrestamosAnteriores;

	public:

		MyDialogPrestar( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 469,386 ), long style = wxDEFAULT_DIALOG_STYLE );

		~MyDialogPrestar();

};

///////////////////////////////////////////////////////////////////////////////
/// Class MyDialogHistorial
///////////////////////////////////////////////////////////////////////////////
class MyDialogHistorial : public wxDialog
{
	private:

	protected:
		wxStaticText* m_staticPrestar_NombreAlumno;
		wxStaticText* m_staticPrestar_NombreAlumno_Valor;
		wxStaticText* m_staticPrestar_DniAlumno;
		wxStaticText* m_staticPrestar_DniAlumno_Valor;
		wxStaticText* m_staticText23;
		wxPanel* m_panel7;
		wxListCtrl* m_list_PrestamosAnteriores;

	public:

		MyDialogHistorial( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 554,424 ), long style = wxDEFAULT_DIALOG_STYLE );

		~MyDialogHistorial();

};

