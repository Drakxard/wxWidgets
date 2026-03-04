///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 4.2.1-0-g80c4cb6)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "ProyBaseAlumno.h"

///////////////////////////////////////////////////////////////////////////

MyFrameInicioCorrectoAlumno::MyFrameInicioCorrectoAlumno( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer3;
	bSizer3 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizerBuscador;
	bSizerBuscador = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer9;
	bSizer9 = new wxBoxSizer( wxHORIZONTAL );

	mtext_Buscador_frase = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer9->Add( mtext_Buscador_frase, 1, wxALL|wxALIGN_CENTER_VERTICAL|wxEXPAND, 5 );

	Boton_Buscar_Frase = new wxButton( this, wxID_ANY, wxT("Buscar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer9->Add( Boton_Buscar_Frase, 0, wxALL|wxALIGN_RIGHT, 5 );


	bSizerBuscador->Add( bSizer9, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer8;
	bSizer8 = new wxBoxSizer( wxHORIZONTAL );

	m_radio_Libros = new wxRadioButton( this, wxID_ANY, wxT("Libros"), wxDefaultPosition, wxDefaultSize, 0 );
	m_radio_Libros->SetValue( true );
	bSizer8->Add( m_radio_Libros, 0, wxALL, 5 );

	m_radio_Reservar = new wxRadioButton( this, wxID_ANY, wxT("Reservas"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer8->Add( m_radio_Reservar, 0, wxALL, 5 );


	bSizerBuscador->Add( bSizer8, 0, 0, 5 );

	wxBoxSizer* bSizer29;
	bSizer29 = new wxBoxSizer( wxVERTICAL );

	m_panel_botones_internos = new wxSimplebook( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	m_panel7 = new wxPanel( m_panel_botones_internos, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	m_panel_botones_internos->AddPage( m_panel7, wxT("a page"), false );
	m_panel_Reservas = new wxPanel( m_panel_botones_internos, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer811;
	bSizer811 = new wxBoxSizer( wxHORIZONTAL );

	m_radio_nombreLibros_Reservas = new wxRadioButton( m_panel_Reservas, wxID_ANY, wxT("Nombre Libro"), wxDefaultPosition, wxDefaultSize, 0 );
	m_radio_nombreLibros_Reservas->SetValue( true );
	bSizer811->Add( m_radio_nombreLibros_Reservas, 0, wxALL, 5 );

	m_radio_Nombre_Usuario_Reservas = new wxRadioButton( m_panel_Reservas, wxID_ANY, wxT("Nombre Usuario"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer811->Add( m_radio_Nombre_Usuario_Reservas, 0, wxALL, 5 );

	m_radio_Estadode_Reserva = new wxRadioButton( m_panel_Reservas, wxID_ANY, wxT("Estado"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer811->Add( m_radio_Estadode_Reserva, 0, wxALL, 5 );


	m_panel_Reservas->SetSizer( bSizer811 );
	m_panel_Reservas->Layout();
	bSizer811->Fit( m_panel_Reservas );
	m_panel_botones_internos->AddPage( m_panel_Reservas, wxT("a page"), false );

	bSizer29->Add( m_panel_botones_internos, 1, wxEXPAND | wxALL, 5 );


	bSizerBuscador->Add( bSizer29, 1, wxEXPAND, 5 );


	bSizer3->Add( bSizerBuscador, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizerContenedorLibros;
	bSizerContenedorLibros = new wxBoxSizer( wxVERTICAL );

	m_Bibliotecario_frameActual = new wxSimplebook( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	m_panel_Bibliotecario_Libros = new wxScrolledWindow( m_Bibliotecario_frameActual, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxHSCROLL|wxVSCROLL );
	m_panel_Bibliotecario_Libros->SetScrollRate( 5, 5 );
	bSizerLibro = new wxBoxSizer( wxVERTICAL );


	m_panel_Bibliotecario_Libros->SetSizer( bSizerLibro );
	m_panel_Bibliotecario_Libros->Layout();
	bSizerLibro->Fit( m_panel_Bibliotecario_Libros );
	m_Bibliotecario_frameActual->AddPage( m_panel_Bibliotecario_Libros, wxT("a page"), false );
	m_panel_Reservar = new wxPanel( m_Bibliotecario_frameActual, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizerContenedorAlumnos111;
	bSizerContenedorAlumnos111 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer301;
	bSizer301 = new wxBoxSizer( wxVERTICAL );

	m_calendar1 = new wxCalendarCtrl( m_panel_Reservar, wxID_ANY, wxDefaultDateTime, wxDefaultPosition, wxDefaultSize, wxCAL_SHOW_HOLIDAYS );
	bSizer301->Add( m_calendar1, 0, wxALL, 5 );


	bSizerContenedorAlumnos111->Add( bSizer301, 0, wxALIGN_CENTER_HORIZONTAL, 5 );

	wxBoxSizer* bSizer31;
	bSizer31 = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* bSizerTodosLosAlumnos111;
	bSizerTodosLosAlumnos111 = new wxBoxSizer( wxVERTICAL );

	m_list_Reservas = new wxListCtrl( m_panel_Reservar, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLC_REPORT );
	bSizerTodosLosAlumnos111->Add( m_list_Reservas, 1, wxALL|wxEXPAND, 5 );


	bSizer31->Add( bSizerTodosLosAlumnos111, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer45111;
	bSizer45111 = new wxBoxSizer( wxVERTICAL );

	m_button14111 = new wxButton( m_panel_Reservar, wxID_ANY, wxT("Eliminar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer45111->Add( m_button14111, 0, wxALL, 5 );


	bSizer31->Add( bSizer45111, 0, wxEXPAND, 5 );


	bSizerContenedorAlumnos111->Add( bSizer31, 1, wxEXPAND, 5 );


	m_panel_Reservar->SetSizer( bSizerContenedorAlumnos111 );
	m_panel_Reservar->Layout();
	bSizerContenedorAlumnos111->Fit( m_panel_Reservar );
	m_Bibliotecario_frameActual->AddPage( m_panel_Reservar, wxT("a page"), false );

	bSizerContenedorLibros->Add( m_Bibliotecario_frameActual, 1, wxEXPAND | wxALL, 5 );


	bSizer3->Add( bSizerContenedorLibros, 1, wxEXPAND, 5 );


	this->SetSizer( bSizer3 );
	this->Layout();
	bSizer3->Fit( this );

	this->Centre( wxBOTH );

	// Connect Events
	Boton_Buscar_Frase->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrameInicioCorrectoAlumno::Onclick_Boton_Buscar_Frase ), NULL, this );
	m_radio_Libros->Connect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( MyFrameInicioCorrectoAlumno::OnRadioButton_CambiaPestana ), NULL, this );
	m_radio_Reservar->Connect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( MyFrameInicioCorrectoAlumno::OnRadioButton_CambiaPestana ), NULL, this );
	m_radio_nombreLibros_Reservas->Connect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( MyFrameInicioCorrectoAlumno::OnRadioButton_CambiaPestana ), NULL, this );
	m_radio_Nombre_Usuario_Reservas->Connect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( MyFrameInicioCorrectoAlumno::OnRadioButton_CambiaPestana ), NULL, this );
	m_radio_Estadode_Reserva->Connect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( MyFrameInicioCorrectoAlumno::OnRadioButton_CambiaPestana ), NULL, this );
	m_button14111->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrameInicioCorrectoAlumno::OnButtonClickEliminar ), NULL, this );
}

MyFrameInicioCorrectoAlumno::~MyFrameInicioCorrectoAlumno()
{
	// Disconnect Events
	Boton_Buscar_Frase->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrameInicioCorrectoAlumno::Onclick_Boton_Buscar_Frase ), NULL, this );
	m_radio_Libros->Disconnect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( MyFrameInicioCorrectoAlumno::OnRadioButton_CambiaPestana ), NULL, this );
	m_radio_Reservar->Disconnect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( MyFrameInicioCorrectoAlumno::OnRadioButton_CambiaPestana ), NULL, this );
	m_radio_nombreLibros_Reservas->Disconnect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( MyFrameInicioCorrectoAlumno::OnRadioButton_CambiaPestana ), NULL, this );
	m_radio_Nombre_Usuario_Reservas->Disconnect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( MyFrameInicioCorrectoAlumno::OnRadioButton_CambiaPestana ), NULL, this );
	m_radio_Estadode_Reserva->Disconnect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( MyFrameInicioCorrectoAlumno::OnRadioButton_CambiaPestana ), NULL, this );
	m_button14111->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrameInicioCorrectoAlumno::OnButtonClickEliminar ), NULL, this );

}
