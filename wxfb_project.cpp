///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 4.2.1-0-g80c4cb6)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "wxfb_project.h"

///////////////////////////////////////////////////////////////////////////

MyFrameInicioCorrectoBibliotecario::MyFrameInicioCorrectoBibliotecario( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer3;
	bSizer3 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizerBuscador;
	bSizerBuscador = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer9;
	bSizer9 = new wxBoxSizer( wxHORIZONTAL );

	m_textCtrl2 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer9->Add( m_textCtrl2, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_button1 = new wxButton( this, wxID_ANY, wxT("Buscar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer9->Add( m_button1, 0, wxALL, 5 );


	bSizerBuscador->Add( bSizer9, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer8;
	bSizer8 = new wxBoxSizer( wxHORIZONTAL );

	m_radioBtn1 = new wxRadioButton( this, wxID_ANY, wxT("Libros"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer8->Add( m_radioBtn1, 0, wxALL, 5 );

	m_radioBtn2 = new wxRadioButton( this, wxID_ANY, wxT("Alumnos"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer8->Add( m_radioBtn2, 0, wxALL, 5 );

	m_radioBtn3 = new wxRadioButton( this, wxID_ANY, wxT("Bibliotecarios"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer8->Add( m_radioBtn3, 0, wxALL, 5 );


	bSizerBuscador->Add( bSizer8, 0, 0, 5 );


	bSizer3->Add( bSizerBuscador, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizerContenedorLibros;
	bSizerContenedorLibros = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizerLibro;
	bSizerLibro = new wxBoxSizer( wxVERTICAL );

	m_staticText4 = new wxStaticText( this, wxID_ANY, wxT("Don Quijote de la Mancha"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText4->Wrap( -1 );
	bSizerLibro->Add( m_staticText4, 0, wxALL, 5 );

	m_bitmap2 = new wxStaticBitmap( this, wxID_ANY, wxBitmap( wxT("Recursos/img/quijote_mancha.jpg"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, 0 );
	m_bitmap2->SetMaxSize( wxSize( 200,200 ) );

	bSizerLibro->Add( m_bitmap2, 0, wxALL, 5 );


	bSizerContenedorLibros->Add( bSizerLibro, 0, 0, 5 );


	bSizer3->Add( bSizerContenedorLibros, 1, 0, 5 );

	wxBoxSizer* bSizerPaginador;
	bSizerPaginador = new wxBoxSizer( wxHORIZONTAL );

	m_button19 = new wxButton( this, wxID_ANY, wxT("Anterior"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerPaginador->Add( m_button19, 0, wxALL, 5 );

	m_staticText18 = new wxStaticText( this, wxID_ANY, wxT("1 de 5"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText18->Wrap( -1 );
	bSizerPaginador->Add( m_staticText18, 0, wxALIGN_CENTER_VERTICAL, 5 );

	m_button20 = new wxButton( this, wxID_ANY, wxT("Siguiente"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerPaginador->Add( m_button20, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer3->Add( bSizerPaginador, 0, wxALIGN_CENTER_HORIZONTAL, 5 );


	this->SetSizer( bSizer3 );
	this->Layout();

	this->Centre( wxBOTH );
}

MyFrameInicioCorrectoBibliotecario::~MyFrameInicioCorrectoBibliotecario()
{
}

MyFrameInicioCorrectoAlumno::MyFrameInicioCorrectoAlumno( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer3;
	bSizer3 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizerBuscador;
	bSizerBuscador = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer9;
	bSizer9 = new wxBoxSizer( wxHORIZONTAL );

	m_textCtrl2 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer9->Add( m_textCtrl2, 1, wxALL, 5 );

	m_button1 = new wxButton( this, wxID_ANY, wxT("Buscar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer9->Add( m_button1, 0, wxALL, 5 );


	bSizerBuscador->Add( bSizer9, 0, wxALIGN_RIGHT|wxEXPAND, 5 );

	wxBoxSizer* bSizer8;
	bSizer8 = new wxBoxSizer( wxHORIZONTAL );

	m_radioBtn1 = new wxRadioButton( this, wxID_ANY, wxT("Libros"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer8->Add( m_radioBtn1, 0, wxALL, 5 );

	m_radioBtn2 = new wxRadioButton( this, wxID_ANY, wxT("Prestamos Activos"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer8->Add( m_radioBtn2, 0, wxALL, 5 );

	m_radioBtn3 = new wxRadioButton( this, wxID_ANY, wxT("Historial"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer8->Add( m_radioBtn3, 0, wxALL, 5 );


	bSizerBuscador->Add( bSizer8, 1, wxEXPAND|wxALIGN_BOTTOM, 5 );


	bSizer3->Add( bSizerBuscador, 0, wxALIGN_CENTER_HORIZONTAL|wxEXPAND, 5 );

	wxBoxSizer* bSizerContenedorLibros;
	bSizerContenedorLibros = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizerLibro;
	bSizerLibro = new wxBoxSizer( wxVERTICAL );

	m_staticText4 = new wxStaticText( this, wxID_ANY, wxT("Don Quijote de la Mancha"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText4->Wrap( -1 );
	bSizerLibro->Add( m_staticText4, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );

	m_bitmap2 = new wxStaticBitmap( this, wxID_ANY, wxBitmap( wxT("Recursos/img/quijote_mancha.jpg"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, 0 );
	m_bitmap2->SetMaxSize( wxSize( 200,200 ) );

	bSizerLibro->Add( m_bitmap2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );


	bSizerContenedorLibros->Add( bSizerLibro, 0, 0, 5 );


	bSizer3->Add( bSizerContenedorLibros, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizerPaginador;
	bSizerPaginador = new wxBoxSizer( wxHORIZONTAL );

	m_button19 = new wxButton( this, wxID_ANY, wxT("Anterior"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerPaginador->Add( m_button19, 0, wxALL, 5 );

	m_staticText18 = new wxStaticText( this, wxID_ANY, wxT("n0 de nZ"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText18->Wrap( -1 );
	bSizerPaginador->Add( m_staticText18, 0, wxALL, 5 );

	m_button20 = new wxButton( this, wxID_ANY, wxT("Siguiente"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerPaginador->Add( m_button20, 0, wxALL, 5 );


	bSizer3->Add( bSizerPaginador, 0, wxALIGN_CENTER_HORIZONTAL, 5 );


	this->SetSizer( bSizer3 );
	this->Layout();

	this->Centre( wxBOTH );
}

MyFrameInicioCorrectoAlumno::~MyFrameInicioCorrectoAlumno()
{
}

MyFrameLogin::MyFrameLogin( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer30;
	bSizer30 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer32;
	bSizer32 = new wxBoxSizer( wxVERTICAL );

	m_staticText16 = new wxStaticText( this, wxID_ANY, wxT("Bienvenido"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText16->Wrap( -1 );
	bSizer32->Add( m_staticText16, 0, wxALL, 5 );

	wxBoxSizer* bSizer33;
	bSizer33 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer34;
	bSizer34 = new wxBoxSizer( wxVERTICAL );

	m_staticText17 = new wxStaticText( this, wxID_ANY, wxT("Ingresar dni"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText17->Wrap( -1 );
	bSizer34->Add( m_staticText17, 0, wxALL, 5 );

	m_textCtrl7 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer34->Add( m_textCtrl7, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );


	bSizer33->Add( bSizer34, 1, wxEXPAND, 5 );


	bSizer32->Add( bSizer33, 0, wxALIGN_CENTER_VERTICAL|wxALIGN_CENTER_HORIZONTAL, 5 );


	bSizer30->Add( bSizer32, 0, wxALIGN_CENTER_HORIZONTAL|wxEXPAND, 5 );

	wxBoxSizer* bSizer31;
	bSizer31 = new wxBoxSizer( wxHORIZONTAL );

	m_button15 = new wxButton( this, wxID_ANY, wxT("Crear Cuenta"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer31->Add( m_button15, 0, wxALL, 5 );

	m_button16 = new wxButton( this, wxID_ANY, wxT("Continuar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer31->Add( m_button16, 0, wxALL, 5 );


	bSizer30->Add( bSizer31, 0, wxALIGN_CENTER_HORIZONTAL, 5 );


	this->SetSizer( bSizer30 );
	this->Layout();
	bSizer30->Fit( this );

	this->Centre( wxBOTH );
}

MyFrameLogin::~MyFrameLogin()
{
}
