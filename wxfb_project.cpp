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

	m_radio_Libros = new wxRadioButton( this, wxID_ANY, wxT("Libros"), wxDefaultPosition, wxDefaultSize, 0 );
	m_radio_Libros->SetValue( true );
	bSizer8->Add( m_radio_Libros, 0, wxALL, 5 );

	m_radio_Alumnos = new wxRadioButton( this, wxID_ANY, wxT("Alumnos"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer8->Add( m_radio_Alumnos, 0, wxALL, 5 );

	m_radio_Bibliotecarios = new wxRadioButton( this, wxID_ANY, wxT("Bibliotecarios"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer8->Add( m_radio_Bibliotecarios, 0, wxALL, 5 );


	bSizerBuscador->Add( bSizer8, 0, 0, 5 );


	bSizer3->Add( bSizerBuscador, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizerContenedorLibros;
	bSizerContenedorLibros = new wxBoxSizer( wxVERTICAL );

	m_Bibliotecario_frameActual = new wxSimplebook( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	m_panel_Bibliotecario_Libros = new wxPanel( m_Bibliotecario_frameActual, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizerLibro;
	bSizerLibro = new wxBoxSizer( wxVERTICAL );

	m_staticText4 = new wxStaticText( m_panel_Bibliotecario_Libros, wxID_ANY, wxT("Don Quijote de la Mancha"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText4->Wrap( -1 );
	bSizerLibro->Add( m_staticText4, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );

	m_bitmap2 = new wxStaticBitmap( m_panel_Bibliotecario_Libros, wxID_ANY, wxBitmap( wxT("Recursos/img/quijote_mancha.jpg"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, 0 );
	m_bitmap2->SetMaxSize( wxSize( 200,200 ) );

	bSizerLibro->Add( m_bitmap2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );


	m_panel_Bibliotecario_Libros->SetSizer( bSizerLibro );
	m_panel_Bibliotecario_Libros->Layout();
	bSizerLibro->Fit( m_panel_Bibliotecario_Libros );
	m_Bibliotecario_frameActual->AddPage( m_panel_Bibliotecario_Libros, wxT("a page"), false );
	m_panel_Alumnos = new wxPanel( m_Bibliotecario_frameActual, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer33;
	bSizer33 = new wxBoxSizer( wxVERTICAL );

	m_grid_Alumnos = new wxGrid( m_panel_Alumnos, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );

	// Grid
	m_grid_Alumnos->CreateGrid( 0, 0 );
	m_grid_Alumnos->EnableEditing( true );
	m_grid_Alumnos->EnableGridLines( true );
	m_grid_Alumnos->EnableDragGridSize( false );
	m_grid_Alumnos->SetMargins( 0, 0 );

	// Columns
	m_grid_Alumnos->EnableDragColMove( false );
	m_grid_Alumnos->EnableDragColSize( true );
	m_grid_Alumnos->SetColLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Rows
	m_grid_Alumnos->EnableDragRowSize( true );
	m_grid_Alumnos->SetRowLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Label Appearance

	// Cell Defaults
	m_grid_Alumnos->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_TOP );
	bSizer33->Add( m_grid_Alumnos, 0, wxALL, 5 );


	m_panel_Alumnos->SetSizer( bSizer33 );
	m_panel_Alumnos->Layout();
	bSizer33->Fit( m_panel_Alumnos );
	m_Bibliotecario_frameActual->AddPage( m_panel_Alumnos, wxT("a page"), false );
	m_panel_Bibliotecarios = new wxPanel( m_Bibliotecario_frameActual, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer34;
	bSizer34 = new wxBoxSizer( wxVERTICAL );

	m_grid3 = new wxGrid( m_panel_Bibliotecarios, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );

	// Grid
	m_grid3->CreateGrid( 5, 5 );
	m_grid3->EnableEditing( true );
	m_grid3->EnableGridLines( true );
	m_grid3->EnableDragGridSize( false );
	m_grid3->SetMargins( 0, 0 );

	// Columns
	m_grid3->EnableDragColMove( false );
	m_grid3->EnableDragColSize( true );
	m_grid3->SetColLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Rows
	m_grid3->EnableDragRowSize( true );
	m_grid3->SetRowLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Label Appearance

	// Cell Defaults
	m_grid3->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_TOP );
	bSizer34->Add( m_grid3, 0, wxALL, 5 );


	m_panel_Bibliotecarios->SetSizer( bSizer34 );
	m_panel_Bibliotecarios->Layout();
	bSizer34->Fit( m_panel_Bibliotecarios );
	m_Bibliotecario_frameActual->AddPage( m_panel_Bibliotecarios, wxT("a page"), false );

	bSizerContenedorLibros->Add( m_Bibliotecario_frameActual, 1, wxEXPAND | wxALL, 5 );


	bSizer3->Add( bSizerContenedorLibros, 1, wxEXPAND, 5 );

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

	// Connect Events
	m_radio_Libros->Connect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( MyFrameInicioCorrectoBibliotecario::OnRadioButton_CambiaPestana ), NULL, this );
	m_radio_Alumnos->Connect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( MyFrameInicioCorrectoBibliotecario::OnRadioButton_CambiaPestana ), NULL, this );
	m_radio_Bibliotecarios->Connect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( MyFrameInicioCorrectoBibliotecario::OnRadioButton_CambiaPestana ), NULL, this );
}

MyFrameInicioCorrectoBibliotecario::~MyFrameInicioCorrectoBibliotecario()
{
	// Disconnect Events
	m_radio_Libros->Disconnect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( MyFrameInicioCorrectoBibliotecario::OnRadioButton_CambiaPestana ), NULL, this );
	m_radio_Alumnos->Disconnect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( MyFrameInicioCorrectoBibliotecario::OnRadioButton_CambiaPestana ), NULL, this );
	m_radio_Bibliotecarios->Disconnect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( MyFrameInicioCorrectoBibliotecario::OnRadioButton_CambiaPestana ), NULL, this );

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

	m_radio_Libros = new wxRadioButton( this, wxID_ANY, wxT("Libros"), wxDefaultPosition, wxDefaultSize, 0 );
	m_radio_Libros->SetValue( true );
	bSizer8->Add( m_radio_Libros, 0, wxALL, 5 );

	m_radio_Alumnos = new wxRadioButton( this, wxID_ANY, wxT("Alumnos"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer8->Add( m_radio_Alumnos, 0, wxALL, 5 );

	m_radio_Bibliotecarios = new wxRadioButton( this, wxID_ANY, wxT("Bibliotecarios"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer8->Add( m_radio_Bibliotecarios, 0, wxALL, 5 );


	bSizerBuscador->Add( bSizer8, 1, wxEXPAND|wxALIGN_BOTTOM, 5 );


	bSizer3->Add( bSizerBuscador, 0, wxALIGN_CENTER_HORIZONTAL|wxEXPAND, 5 );

	wxBoxSizer* bSizerContenedorLibros;
	bSizerContenedorLibros = new wxBoxSizer( wxVERTICAL );

	m_Bibliotecario_frameActual = new wxSimplebook( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	m_panel_Bibliotecario_Libros = new wxPanel( m_Bibliotecario_frameActual, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizerLibro;
	bSizerLibro = new wxBoxSizer( wxVERTICAL );

	m_staticText4 = new wxStaticText( m_panel_Bibliotecario_Libros, wxID_ANY, wxT("Don Quijote de la Mancha"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText4->Wrap( -1 );
	bSizerLibro->Add( m_staticText4, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );

	m_bitmap2 = new wxStaticBitmap( m_panel_Bibliotecario_Libros, wxID_ANY, wxBitmap( wxT("Recursos/img/quijote_mancha.jpg"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, 0 );
	m_bitmap2->SetMaxSize( wxSize( 200,200 ) );

	bSizerLibro->Add( m_bitmap2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );


	m_panel_Bibliotecario_Libros->SetSizer( bSizerLibro );
	m_panel_Bibliotecario_Libros->Layout();
	bSizerLibro->Fit( m_panel_Bibliotecario_Libros );
	m_Bibliotecario_frameActual->AddPage( m_panel_Bibliotecario_Libros, wxT("a page"), false );
	m_panel_Alumnos = new wxPanel( m_Bibliotecario_frameActual, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer33;
	bSizer33 = new wxBoxSizer( wxVERTICAL );

	m_grid1 = new wxGrid( m_panel_Alumnos, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );

	// Grid
	m_grid1->CreateGrid( 5, 5 );
	m_grid1->EnableEditing( true );
	m_grid1->EnableGridLines( true );
	m_grid1->EnableDragGridSize( false );
	m_grid1->SetMargins( 0, 0 );

	// Columns
	m_grid1->EnableDragColMove( false );
	m_grid1->EnableDragColSize( true );
	m_grid1->SetColLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Rows
	m_grid1->EnableDragRowSize( true );
	m_grid1->SetRowLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Label Appearance

	// Cell Defaults
	m_grid1->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_TOP );
	bSizer33->Add( m_grid1, 0, wxALL, 5 );


	m_panel_Alumnos->SetSizer( bSizer33 );
	m_panel_Alumnos->Layout();
	bSizer33->Fit( m_panel_Alumnos );
	m_Bibliotecario_frameActual->AddPage( m_panel_Alumnos, wxT("a page"), false );
	m_panel_Bibliotecarios = new wxPanel( m_Bibliotecario_frameActual, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer34;
	bSizer34 = new wxBoxSizer( wxVERTICAL );

	m_grid3 = new wxGrid( m_panel_Bibliotecarios, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );

	// Grid
	m_grid3->CreateGrid( 5, 5 );
	m_grid3->EnableEditing( true );
	m_grid3->EnableGridLines( true );
	m_grid3->EnableDragGridSize( false );
	m_grid3->SetMargins( 0, 0 );

	// Columns
	m_grid3->EnableDragColMove( false );
	m_grid3->EnableDragColSize( true );
	m_grid3->SetColLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Rows
	m_grid3->EnableDragRowSize( true );
	m_grid3->SetRowLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Label Appearance

	// Cell Defaults
	m_grid3->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_TOP );
	bSizer34->Add( m_grid3, 0, wxALL, 5 );


	m_panel_Bibliotecarios->SetSizer( bSizer34 );
	m_panel_Bibliotecarios->Layout();
	bSizer34->Fit( m_panel_Bibliotecarios );
	m_Bibliotecario_frameActual->AddPage( m_panel_Bibliotecarios, wxT("a page"), false );

	bSizerContenedorLibros->Add( m_Bibliotecario_frameActual, 1, wxEXPAND | wxALL, 5 );


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

	// Connect Events
	m_radio_Libros->Connect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( MyFrameInicioCorrectoAlumno::OnRadioButton_CambiaPesta ), NULL, this );
	m_radio_Alumnos->Connect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( MyFrameInicioCorrectoAlumno::OnRadioButton_CambiaPestana ), NULL, this );
	m_radio_Bibliotecarios->Connect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( MyFrameInicioCorrectoAlumno::OnRadioButton_CambiaPestana ), NULL, this );
}

MyFrameInicioCorrectoAlumno::~MyFrameInicioCorrectoAlumno()
{
	// Disconnect Events
	m_radio_Libros->Disconnect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( MyFrameInicioCorrectoAlumno::OnRadioButton_CambiaPesta ), NULL, this );
	m_radio_Alumnos->Disconnect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( MyFrameInicioCorrectoAlumno::OnRadioButton_CambiaPestana ), NULL, this );
	m_radio_Bibliotecarios->Disconnect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( MyFrameInicioCorrectoAlumno::OnRadioButton_CambiaPestana ), NULL, this );

}

MyFrameLogin::MyFrameLogin( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer30;
	bSizer30 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer32;
	bSizer32 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer33;
	bSizer33 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer34;
	bSizer34 = new wxBoxSizer( wxVERTICAL );

	m_staticText17 = new wxStaticText( this, wxID_ANY, wxT("Ingresar dni"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText17->Wrap( -1 );
	bSizer34->Add( m_staticText17, 0, wxALL, 5 );

	m_text_Bienvenido_Valor = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER );
	bSizer34->Add( m_text_Bienvenido_Valor, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );


	bSizer33->Add( bSizer34, 0, 0, 5 );


	bSizer32->Add( bSizer33, 0, wxALIGN_CENTER_VERTICAL|wxALIGN_CENTER_HORIZONTAL, 5 );


	bSizer30->Add( bSizer32, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer31;
	bSizer31 = new wxBoxSizer( wxHORIZONTAL );

	m_button_Bienvenido_CrearCuenta = new wxButton( this, wxID_ANY, wxT("Crear Cuenta"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer31->Add( m_button_Bienvenido_CrearCuenta, 0, wxALL, 5 );

	m_button_Bienvenido_Continuar = new wxButton( this, wxID_ANY, wxT("Continuar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer31->Add( m_button_Bienvenido_Continuar, 0, wxALL, 5 );


	bSizer30->Add( bSizer31, 0, wxALIGN_CENTER_HORIZONTAL, 5 );


	this->SetSizer( bSizer30 );
	this->Layout();
	bSizer30->Fit( this );

	this->Centre( wxBOTH );

	// Connect Events
	m_text_Bienvenido_Valor->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( MyFrameLogin::onTextEnter_Bienvenido_Confirmar ), NULL, this );
	m_button_Bienvenido_Continuar->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrameLogin::OnclikBienvenido_Iniciar ), NULL, this );
}

MyFrameLogin::~MyFrameLogin()
{
	// Disconnect Events
	m_text_Bienvenido_Valor->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( MyFrameLogin::onTextEnter_Bienvenido_Confirmar ), NULL, this );
	m_button_Bienvenido_Continuar->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrameLogin::OnclikBienvenido_Iniciar ), NULL, this );

}

MyFrameCrearCuenta::MyFrameCrearCuenta( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizerNuevaCuenta;
	bSizerNuevaCuenta = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizerNuevaCuenta_informacion;
	bSizerNuevaCuenta_informacion = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* bSizerNombreLogin;
	bSizerNombreLogin = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* bSizerNuevaCuenta_referencia;
	bSizerNuevaCuenta_referencia = new wxBoxSizer( wxVERTICAL );

	m_staticText_CrearCuenta_ref1 = new wxStaticText( this, wxID_ANY, wxT("Nombre: "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_CrearCuenta_ref1->Wrap( -1 );
	bSizerNuevaCuenta_referencia->Add( m_staticText_CrearCuenta_ref1, 0, wxALL, 5 );

	m_text_CrearCuenta_campo1 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizerNuevaCuenta_referencia->Add( m_text_CrearCuenta_campo1, 0, wxALL, 5 );


	bSizerNombreLogin->Add( bSizerNuevaCuenta_referencia, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizerNuevaCuenta_Campos;
	bSizerNuevaCuenta_Campos = new wxBoxSizer( wxVERTICAL );

	m_staticText_CrearCuenta_ref2 = new wxStaticText( this, wxID_ANY, wxT("Dni: "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_CrearCuenta_ref2->Wrap( -1 );
	bSizerNuevaCuenta_Campos->Add( m_staticText_CrearCuenta_ref2, 0, wxALL, 5 );

	m_text_CrearCuenta_campo2 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizerNuevaCuenta_Campos->Add( m_text_CrearCuenta_campo2, 0, wxALL, 5 );


	bSizerNombreLogin->Add( bSizerNuevaCuenta_Campos, 0, 0, 5 );


	bSizerNuevaCuenta_informacion->Add( bSizerNombreLogin, 0, 0, 5 );


	bSizerNuevaCuenta->Add( bSizerNuevaCuenta_informacion, 0, 0, 5 );

	wxBoxSizer* bSizerNuevaCuenta_Botones;
	bSizerNuevaCuenta_Botones = new wxBoxSizer( wxHORIZONTAL );

	m_button10 = new wxButton( this, wxID_ANY, wxT("Cancelar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerNuevaCuenta_Botones->Add( m_button10, 0, wxALL, 5 );

	m_button11 = new wxButton( this, wxID_ANY, wxT("Confirmar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerNuevaCuenta_Botones->Add( m_button11, 0, wxALL, 5 );


	bSizerNuevaCuenta->Add( bSizerNuevaCuenta_Botones, 0, wxALIGN_CENTER_HORIZONTAL, 5 );


	this->SetSizer( bSizerNuevaCuenta );
	this->Layout();
	bSizerNuevaCuenta->Fit( this );

	this->Centre( wxBOTH );
}

MyFrameCrearCuenta::~MyFrameCrearCuenta()
{
}

CreacionAyrton::CreacionAyrton( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_INACTIVECAPTIONTEXT ) );

	wxBoxSizer* bSizer47;
	bSizer47 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer51;
	bSizer51 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText11 = new wxStaticText( this, wxID_ANY, wxT("Logear"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText11->Wrap( -1 );
	m_staticText11->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_INACTIVECAPTION ) );

	bSizer51->Add( m_staticText11, 0, wxALL, 5 );


	bSizer47->Add( bSizer51, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer52;
	bSizer52 = new wxBoxSizer( wxVERTICAL );

	m_staticText12 = new wxStaticText( this, wxID_ANY, wxT("Ingresa DNI gato"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText12->Wrap( -1 );
	m_staticText12->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_ACTIVECAPTION ) );

	bSizer52->Add( m_staticText12, 0, wxALL, 5 );

	m_textCtrl12 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer52->Add( m_textCtrl12, 0, wxALL, 5 );


	bSizer47->Add( bSizer52, 0, 0, 5 );

	wxBoxSizer* bSizer53;
	bSizer53 = new wxBoxSizer( wxHORIZONTAL );

	m_button19 = new wxButton( this, wxID_ANY, wxT("Cancelas? sos p*to"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer53->Add( m_button19, 0, wxALL, 5 );

	m_button20 = new wxButton( this, wxID_ANY, wxT("Acepta o so maricon"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer53->Add( m_button20, 0, wxALL, 5 );


	bSizer47->Add( bSizer53, 0, 0, 5 );


	this->SetSizer( bSizer47 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	m_button19->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( CreacionAyrton::cancelar ), NULL, this );
	m_button20->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( CreacionAyrton::OnclickButton_aceptar ), NULL, this );
}

CreacionAyrton::~CreacionAyrton()
{
	// Disconnect Events
	m_button19->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( CreacionAyrton::cancelar ), NULL, this );
	m_button20->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( CreacionAyrton::OnclickButton_aceptar ), NULL, this );

}
