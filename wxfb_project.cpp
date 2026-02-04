///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 4.2.1-0-g80c4cb6)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "wxfb_project.h"

///////////////////////////////////////////////////////////////////////////

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
	m_button_Bienvenido_CrearCuenta->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrameLogin::OnButtonClickCrearCuenta ), NULL, this );
	m_button_Bienvenido_Continuar->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrameLogin::OnclikBienvenido_Iniciar ), NULL, this );
}

MyFrameLogin::~MyFrameLogin()
{
	// Disconnect Events
	m_text_Bienvenido_Valor->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( MyFrameLogin::onTextEnter_Bienvenido_Confirmar ), NULL, this );
	m_button_Bienvenido_CrearCuenta->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrameLogin::OnButtonClickCrearCuenta ), NULL, this );
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

	// Connect Events
	m_button10->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrameCrearCuenta::OnButtonClickCerrar ), NULL, this );
	m_button11->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrameCrearCuenta::OnclikBienvenido_Iniciar ), NULL, this );
}

MyFrameCrearCuenta::~MyFrameCrearCuenta()
{
	// Disconnect Events
	m_button10->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrameCrearCuenta::OnButtonClickCerrar ), NULL, this );
	m_button11->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrameCrearCuenta::OnclikBienvenido_Iniciar ), NULL, this );

}

MyFrameInicioCorrectoBibliotecario::MyFrameInicioCorrectoBibliotecario( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer3;
	bSizer3 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizerBuscador;
	bSizerBuscador = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer9;
	bSizer9 = new wxBoxSizer( wxHORIZONTAL );

	mtext_Buscador_frase = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer9->Add( mtext_Buscador_frase, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	Boton_Buscar_Frase = new wxButton( this, wxID_ANY, wxT("Buscar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer9->Add( Boton_Buscar_Frase, 0, wxALL, 5 );


	bSizerBuscador->Add( bSizer9, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer8;
	bSizer8 = new wxBoxSizer( wxHORIZONTAL );

	m_radio_Libros = new wxRadioButton( this, wxID_ANY, wxT("Libros"), wxDefaultPosition, wxDefaultSize, 0 );
	m_radio_Libros->SetValue( true );
	bSizer8->Add( m_radio_Libros, 0, wxALL, 5 );

	m_radio_InfoLibros = new wxRadioButton( this, wxID_ANY, wxT("Info Libros"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer8->Add( m_radio_InfoLibros, 0, wxALL, 5 );

	m_radio_Etiquetas = new wxRadioButton( this, wxID_ANY, wxT("Etiquetas"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer8->Add( m_radio_Etiquetas, 0, wxALL, 5 );

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

	wxBoxSizer* bSizer30;
	bSizer30 = new wxBoxSizer( wxVERTICAL );

	m_staticText4 = new wxStaticText( m_panel_Bibliotecario_Libros, wxID_ANY, wxT("Don Quijote de la Mancha"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText4->Wrap( -1 );
	bSizer30->Add( m_staticText4, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );

	m_bitmap2 = new wxStaticBitmap( m_panel_Bibliotecario_Libros, wxID_ANY, wxBitmap( wxT("Recursos/img/quijote_mancha.jpg"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, 0 );
	m_bitmap2->SetMaxSize( wxSize( 200,200 ) );

	bSizer30->Add( m_bitmap2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );


	bSizerLibro->Add( bSizer30, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizerPaginador;
	bSizerPaginador = new wxBoxSizer( wxHORIZONTAL );

	m_button19 = new wxButton( m_panel_Bibliotecario_Libros, wxID_ANY, wxT("Anterior"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerPaginador->Add( m_button19, 0, wxALL, 5 );

	m_staticText18 = new wxStaticText( m_panel_Bibliotecario_Libros, wxID_ANY, wxT("1 de 5"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText18->Wrap( -1 );
	bSizerPaginador->Add( m_staticText18, 0, wxALIGN_CENTER_VERTICAL, 5 );

	m_button20 = new wxButton( m_panel_Bibliotecario_Libros, wxID_ANY, wxT("Siguiente"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerPaginador->Add( m_button20, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizerLibro->Add( bSizerPaginador, 0, wxALIGN_CENTER_HORIZONTAL, 5 );


	m_panel_Bibliotecario_Libros->SetSizer( bSizerLibro );
	m_panel_Bibliotecario_Libros->Layout();
	bSizerLibro->Fit( m_panel_Bibliotecario_Libros );
	m_Bibliotecario_frameActual->AddPage( m_panel_Bibliotecario_Libros, wxT("a page"), false );
	m_panel_DetallesLibros = new wxPanel( m_Bibliotecario_frameActual, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizerContenedorAlumnos1;
	bSizerContenedorAlumnos1 = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* bSizerTodosLosAlumnos1;
	bSizerTodosLosAlumnos1 = new wxBoxSizer( wxVERTICAL );

	m_list_Alumnos1 = new wxListCtrl( m_panel_DetallesLibros, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLC_REPORT );
	bSizerTodosLosAlumnos1->Add( m_list_Alumnos1, 1, wxALL, 5 );


	bSizerContenedorAlumnos1->Add( bSizerTodosLosAlumnos1, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer451;
	bSizer451 = new wxBoxSizer( wxVERTICAL );

	m_button131 = new wxButton( m_panel_DetallesLibros, wxID_ANY, wxT("Agregar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer451->Add( m_button131, 0, wxALL, 5 );

	m_button21 = new wxButton( m_panel_DetallesLibros, wxID_ANY, wxT("Editar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer451->Add( m_button21, 0, wxALL, 5 );

	m_button201 = new wxButton( m_panel_DetallesLibros, wxID_ANY, wxT("Lectores"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer451->Add( m_button201, 0, wxALL, 5 );

	m_button141 = new wxButton( m_panel_DetallesLibros, wxID_ANY, wxT("Eliminar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer451->Add( m_button141, 0, wxALL, 5 );


	bSizerContenedorAlumnos1->Add( bSizer451, 0, wxEXPAND, 5 );


	m_panel_DetallesLibros->SetSizer( bSizerContenedorAlumnos1 );
	m_panel_DetallesLibros->Layout();
	bSizerContenedorAlumnos1->Fit( m_panel_DetallesLibros );
	m_Bibliotecario_frameActual->AddPage( m_panel_DetallesLibros, wxT("a page"), false );
	m_panel_DetallesEtiquetas = new wxPanel( m_Bibliotecario_frameActual, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizerContenedorAlumnos11;
	bSizerContenedorAlumnos11 = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* bSizerTodosLosAlumnos11;
	bSizerTodosLosAlumnos11 = new wxBoxSizer( wxVERTICAL );

	m_list_Alumnos11 = new wxListCtrl( m_panel_DetallesEtiquetas, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLC_REPORT );
	bSizerTodosLosAlumnos11->Add( m_list_Alumnos11, 1, wxALL, 5 );


	bSizerContenedorAlumnos11->Add( bSizerTodosLosAlumnos11, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer4511;
	bSizer4511 = new wxBoxSizer( wxVERTICAL );

	m_button1311 = new wxButton( m_panel_DetallesEtiquetas, wxID_ANY, wxT("Agregar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer4511->Add( m_button1311, 0, wxALL, 5 );

	m_button22 = new wxButton( m_panel_DetallesEtiquetas, wxID_ANY, wxT("Editar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer4511->Add( m_button22, 0, wxALL, 5 );

	m_button1411 = new wxButton( m_panel_DetallesEtiquetas, wxID_ANY, wxT("Eliminar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer4511->Add( m_button1411, 0, wxALL, 5 );


	bSizerContenedorAlumnos11->Add( bSizer4511, 0, wxEXPAND, 5 );


	m_panel_DetallesEtiquetas->SetSizer( bSizerContenedorAlumnos11 );
	m_panel_DetallesEtiquetas->Layout();
	bSizerContenedorAlumnos11->Fit( m_panel_DetallesEtiquetas );
	m_Bibliotecario_frameActual->AddPage( m_panel_DetallesEtiquetas, wxT("a page"), false );
	m_panel_Alumnos = new wxPanel( m_Bibliotecario_frameActual, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizerContenedorAlumnos;
	bSizerContenedorAlumnos = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* bSizerTodosLosAlumnos;
	bSizerTodosLosAlumnos = new wxBoxSizer( wxVERTICAL );

	m_list_Alumnos = new wxListCtrl( m_panel_Alumnos, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLC_REPORT );
	bSizerTodosLosAlumnos->Add( m_list_Alumnos, 1, wxALL, 5 );


	bSizerContenedorAlumnos->Add( bSizerTodosLosAlumnos, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer45;
	bSizer45 = new wxBoxSizer( wxVERTICAL );

	m_button13 = new wxButton( m_panel_Alumnos, wxID_ANY, wxT("Prestar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer45->Add( m_button13, 0, wxALL, 5 );

	m_button14 = new wxButton( m_panel_Alumnos, wxID_ANY, wxT("Historial"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer45->Add( m_button14, 0, wxALL, 5 );


	bSizerContenedorAlumnos->Add( bSizer45, 0, wxEXPAND, 5 );


	m_panel_Alumnos->SetSizer( bSizerContenedorAlumnos );
	m_panel_Alumnos->Layout();
	bSizerContenedorAlumnos->Fit( m_panel_Alumnos );
	m_Bibliotecario_frameActual->AddPage( m_panel_Alumnos, wxT("a page"), false );
	m_panel_Bibliotecarios = new wxPanel( m_Bibliotecario_frameActual, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer34;
	bSizer34 = new wxBoxSizer( wxVERTICAL );

	m_list_Bibliotecarios = new wxListCtrl( m_panel_Bibliotecarios, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLC_REPORT );
	bSizer34->Add( m_list_Bibliotecarios, 1, wxALL|wxEXPAND, 5 );


	m_panel_Bibliotecarios->SetSizer( bSizer34 );
	m_panel_Bibliotecarios->Layout();
	bSizer34->Fit( m_panel_Bibliotecarios );
	m_Bibliotecario_frameActual->AddPage( m_panel_Bibliotecarios, wxT("a page"), false );

	bSizerContenedorLibros->Add( m_Bibliotecario_frameActual, 1, wxEXPAND | wxALL, 5 );


	bSizer3->Add( bSizerContenedorLibros, 1, wxEXPAND, 5 );


	this->SetSizer( bSizer3 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	Boton_Buscar_Frase->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrameInicioCorrectoBibliotecario::Onclick_Boton_Buscar_Frase ), NULL, this );
	m_radio_Libros->Connect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( MyFrameInicioCorrectoBibliotecario::OnRadioButton_CambiaPestana ), NULL, this );
	m_radio_Alumnos->Connect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( MyFrameInicioCorrectoBibliotecario::OnRadioButton_CambiaPestana ), NULL, this );
	m_radio_Bibliotecarios->Connect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( MyFrameInicioCorrectoBibliotecario::OnRadioButton_CambiaPestana ), NULL, this );
	m_button131->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrameInicioCorrectoBibliotecario::OnButtonClickPrestarLibro ), NULL, this );
	m_button141->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrameInicioCorrectoBibliotecario::OnButtonClickHistorialAlumno ), NULL, this );
	m_button1311->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrameInicioCorrectoBibliotecario::OnButtonClickPrestarLibro ), NULL, this );
	m_button1411->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrameInicioCorrectoBibliotecario::OnButtonClickHistorialAlumno ), NULL, this );
	m_button13->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrameInicioCorrectoBibliotecario::OnButtonClickPrestarLibro ), NULL, this );
	m_button14->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrameInicioCorrectoBibliotecario::OnButtonClickHistorialAlumno ), NULL, this );
}

MyFrameInicioCorrectoBibliotecario::~MyFrameInicioCorrectoBibliotecario()
{
	// Disconnect Events
	Boton_Buscar_Frase->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrameInicioCorrectoBibliotecario::Onclick_Boton_Buscar_Frase ), NULL, this );
	m_radio_Libros->Disconnect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( MyFrameInicioCorrectoBibliotecario::OnRadioButton_CambiaPestana ), NULL, this );
	m_radio_Alumnos->Disconnect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( MyFrameInicioCorrectoBibliotecario::OnRadioButton_CambiaPestana ), NULL, this );
	m_radio_Bibliotecarios->Disconnect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( MyFrameInicioCorrectoBibliotecario::OnRadioButton_CambiaPestana ), NULL, this );
	m_button131->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrameInicioCorrectoBibliotecario::OnButtonClickPrestarLibro ), NULL, this );
	m_button141->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrameInicioCorrectoBibliotecario::OnButtonClickHistorialAlumno ), NULL, this );
	m_button1311->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrameInicioCorrectoBibliotecario::OnButtonClickPrestarLibro ), NULL, this );
	m_button1411->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrameInicioCorrectoBibliotecario::OnButtonClickHistorialAlumno ), NULL, this );
	m_button13->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrameInicioCorrectoBibliotecario::OnButtonClickPrestarLibro ), NULL, this );
	m_button14->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrameInicioCorrectoBibliotecario::OnButtonClickHistorialAlumno ), NULL, this );

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
	bSizer9->Add( m_textCtrl2, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_button1 = new wxButton( this, wxID_ANY, wxT("Buscar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer9->Add( m_button1, 0, wxALL, 5 );


	bSizerBuscador->Add( bSizer9, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer8;
	bSizer8 = new wxBoxSizer( wxHORIZONTAL );

	m_radio_Libros = new wxRadioButton( this, wxID_ANY, wxT("Libros"), wxDefaultPosition, wxDefaultSize, 0 );
	m_radio_Libros->SetValue( true );
	bSizer8->Add( m_radio_Libros, 0, wxALL, 5 );

	m_radio_Alumnos = new wxRadioButton( this, wxID_ANY, wxT("Prestamos Activos"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer8->Add( m_radio_Alumnos, 0, wxALL, 5 );

	m_radio_Bibliotecarios = new wxRadioButton( this, wxID_ANY, wxT("Historial"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer8->Add( m_radio_Bibliotecarios, 0, wxALL, 5 );


	bSizerBuscador->Add( bSizer8, 0, 0, 5 );


	bSizer3->Add( bSizerBuscador, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizerContenedorLibros;
	bSizerContenedorLibros = new wxBoxSizer( wxVERTICAL );

	m_Bibliotecario_frameActual = new wxSimplebook( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	m_panel_Bibliotecario_Libros = new wxPanel( m_Bibliotecario_frameActual, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizerLibro;
	bSizerLibro = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer30;
	bSizer30 = new wxBoxSizer( wxVERTICAL );

	m_staticText4 = new wxStaticText( m_panel_Bibliotecario_Libros, wxID_ANY, wxT("Don Quijote de la Mancha"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText4->Wrap( -1 );
	bSizer30->Add( m_staticText4, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );

	m_bitmap2 = new wxStaticBitmap( m_panel_Bibliotecario_Libros, wxID_ANY, wxBitmap( wxT("Recursos/img/quijote_mancha.jpg"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, 0 );
	m_bitmap2->SetMaxSize( wxSize( 200,200 ) );

	bSizer30->Add( m_bitmap2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );


	bSizerLibro->Add( bSizer30, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizerPaginador;
	bSizerPaginador = new wxBoxSizer( wxHORIZONTAL );

	m_button19 = new wxButton( m_panel_Bibliotecario_Libros, wxID_ANY, wxT("Anterior"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerPaginador->Add( m_button19, 0, wxALL, 5 );

	m_staticText18 = new wxStaticText( m_panel_Bibliotecario_Libros, wxID_ANY, wxT("1 de 5"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText18->Wrap( -1 );
	bSizerPaginador->Add( m_staticText18, 0, wxALIGN_CENTER_VERTICAL, 5 );

	m_button20 = new wxButton( m_panel_Bibliotecario_Libros, wxID_ANY, wxT("Siguiente"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerPaginador->Add( m_button20, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizerLibro->Add( bSizerPaginador, 0, wxALIGN_CENTER_HORIZONTAL, 5 );


	m_panel_Bibliotecario_Libros->SetSizer( bSizerLibro );
	m_panel_Bibliotecario_Libros->Layout();
	bSizerLibro->Fit( m_panel_Bibliotecario_Libros );
	m_Bibliotecario_frameActual->AddPage( m_panel_Bibliotecario_Libros, wxT("a page"), false );
	m_panel_Alumnos = new wxPanel( m_Bibliotecario_frameActual, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizerContenedorAlumnos;
	bSizerContenedorAlumnos = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* bSizerTodosLosAlumnos;
	bSizerTodosLosAlumnos = new wxBoxSizer( wxVERTICAL );

	m_list_Alumnos = new wxListCtrl( m_panel_Alumnos, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLC_REPORT );
	bSizerTodosLosAlumnos->Add( m_list_Alumnos, 1, wxALL, 5 );


	bSizerContenedorAlumnos->Add( bSizerTodosLosAlumnos, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer45;
	bSizer45 = new wxBoxSizer( wxVERTICAL );

	m_button13 = new wxButton( m_panel_Alumnos, wxID_ANY, wxT("Prestar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer45->Add( m_button13, 0, wxALL, 5 );

	m_button14 = new wxButton( m_panel_Alumnos, wxID_ANY, wxT("Historial"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer45->Add( m_button14, 0, wxALL, 5 );


	bSizerContenedorAlumnos->Add( bSizer45, 0, wxEXPAND, 5 );


	m_panel_Alumnos->SetSizer( bSizerContenedorAlumnos );
	m_panel_Alumnos->Layout();
	bSizerContenedorAlumnos->Fit( m_panel_Alumnos );
	m_Bibliotecario_frameActual->AddPage( m_panel_Alumnos, wxT("a page"), false );
	m_panel_Bibliotecarios = new wxPanel( m_Bibliotecario_frameActual, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer34;
	bSizer34 = new wxBoxSizer( wxVERTICAL );

	m_list_Bibliotecarios = new wxListCtrl( m_panel_Bibliotecarios, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLC_REPORT );
	bSizer34->Add( m_list_Bibliotecarios, 1, wxALL|wxEXPAND, 5 );


	m_panel_Bibliotecarios->SetSizer( bSizer34 );
	m_panel_Bibliotecarios->Layout();
	bSizer34->Fit( m_panel_Bibliotecarios );
	m_Bibliotecario_frameActual->AddPage( m_panel_Bibliotecarios, wxT("a page"), false );

	bSizerContenedorLibros->Add( m_Bibliotecario_frameActual, 1, wxEXPAND | wxALL, 5 );


	bSizer3->Add( bSizerContenedorLibros, 1, wxEXPAND, 5 );


	this->SetSizer( bSizer3 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	m_radio_Libros->Connect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( MyFrameInicioCorrectoAlumno::OnRadioButton_CambiaPestana ), NULL, this );
	m_radio_Alumnos->Connect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( MyFrameInicioCorrectoAlumno::OnRadioButton_CambiaPestana ), NULL, this );
	m_radio_Bibliotecarios->Connect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( MyFrameInicioCorrectoAlumno::OnRadioButton_CambiaPestana ), NULL, this );
	m_button13->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrameInicioCorrectoAlumno::OnButtonClickPrestarLibro ), NULL, this );
	m_button14->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrameInicioCorrectoAlumno::OnButtonClickHistorialAlumno ), NULL, this );
}

MyFrameInicioCorrectoAlumno::~MyFrameInicioCorrectoAlumno()
{
	// Disconnect Events
	m_radio_Libros->Disconnect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( MyFrameInicioCorrectoAlumno::OnRadioButton_CambiaPestana ), NULL, this );
	m_radio_Alumnos->Disconnect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( MyFrameInicioCorrectoAlumno::OnRadioButton_CambiaPestana ), NULL, this );
	m_radio_Bibliotecarios->Disconnect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( MyFrameInicioCorrectoAlumno::OnRadioButton_CambiaPestana ), NULL, this );
	m_button13->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrameInicioCorrectoAlumno::OnButtonClickPrestarLibro ), NULL, this );
	m_button14->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrameInicioCorrectoAlumno::OnButtonClickHistorialAlumno ), NULL, this );

}

MyFrameHistorial::MyFrameHistorial( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizerInformacionDetalladaAlumno;
	bSizerInformacionDetalladaAlumno = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizerPrestarAAlumno;
	bSizerPrestarAAlumno = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* bSizer58;
	bSizer58 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer59;
	bSizer59 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText21 = new wxStaticText( this, wxID_ANY, wxT("Nombre: NombreEjemplo"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText21->Wrap( -1 );
	bSizer59->Add( m_staticText21, 0, wxALL, 5 );

	m_staticText22 = new wxStaticText( this, wxID_ANY, wxT("Dni: DniDeEjemplo"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText22->Wrap( -1 );
	bSizer59->Add( m_staticText22, 0, wxALL, 5 );


	bSizer58->Add( bSizer59, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer60;
	bSizer60 = new wxBoxSizer( wxVERTICAL );


	bSizer58->Add( bSizer60, 1, wxEXPAND, 5 );


	bSizerPrestarAAlumno->Add( bSizer58, 1, wxEXPAND, 5 );


	bSizerInformacionDetalladaAlumno->Add( bSizerPrestarAAlumno, 0, 0, 5 );

	wxBoxSizer* bSizerListaPrestamosAnteriores;
	bSizerListaPrestamosAnteriores = new wxBoxSizer( wxVERTICAL );

	m_panel7 = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer40;
	bSizer40 = new wxBoxSizer( wxVERTICAL );

	m_list_PrestamosAnteriores = new wxListCtrl( m_panel7, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLC_REPORT );
	bSizer40->Add( m_list_PrestamosAnteriores, 1, wxALL|wxEXPAND, 5 );


	m_panel7->SetSizer( bSizer40 );
	m_panel7->Layout();
	bSizer40->Fit( m_panel7 );
	bSizerListaPrestamosAnteriores->Add( m_panel7, 1, wxALL|wxEXPAND, 5 );


	bSizerInformacionDetalladaAlumno->Add( bSizerListaPrestamosAnteriores, 1, wxEXPAND, 5 );


	this->SetSizer( bSizerInformacionDetalladaAlumno );
	this->Layout();

	this->Centre( wxBOTH );
}

MyFrameHistorial::~MyFrameHistorial()
{
}

MyDialogPrestar::MyDialogPrestar( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer46;
	bSizer46 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizerCabeceraPrestarLibro;
	bSizerCabeceraPrestarLibro = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* bSizer35;
	bSizer35 = new wxBoxSizer( wxHORIZONTAL );

	m_radioBtn7 = new wxRadioButton( this, wxID_ANY, wxT("Sancionado"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer35->Add( m_radioBtn7, 0, wxALL, 5 );


	bSizerCabeceraPrestarLibro->Add( bSizer35, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer36;
	bSizer36 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText10 = new wxStaticText( this, wxID_ANY, wxT("Dias Restantes: "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText10->Wrap( -1 );
	bSizer36->Add( m_staticText10, 0, wxALL, 5 );

	m_staticText11 = new wxStaticText( this, wxID_ANY, wxT("N/A"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText11->Wrap( -1 );
	bSizer36->Add( m_staticText11, 0, wxALL, 5 );


	bSizerCabeceraPrestarLibro->Add( bSizer36, 0, wxEXPAND, 5 );


	bSizer46->Add( bSizerCabeceraPrestarLibro, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizerPrestarAAlumno;
	bSizerPrestarAAlumno = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* bSizer59;
	bSizer59 = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* bSizer58;
	bSizer58 = new wxBoxSizer( wxHORIZONTAL );

	m_staticPrestar_NombreAlumno = new wxStaticText( this, wxID_ANY, wxT("Nombre: "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticPrestar_NombreAlumno->Wrap( -1 );
	bSizer58->Add( m_staticPrestar_NombreAlumno, 0, wxALL, 5 );

	m_staticPrestar_NombreAlumno_Valor = new wxStaticText( this, wxID_ANY, wxT("NombreEjemplo"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticPrestar_NombreAlumno_Valor->Wrap( -1 );
	bSizer58->Add( m_staticPrestar_NombreAlumno_Valor, 0, wxALL, 5 );


	bSizer59->Add( bSizer58, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer57;
	bSizer57 = new wxBoxSizer( wxHORIZONTAL );

	m_staticPrestar_DniAlumno = new wxStaticText( this, wxID_ANY, wxT("Dni: "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticPrestar_DniAlumno->Wrap( -1 );
	bSizer57->Add( m_staticPrestar_DniAlumno, 0, wxALL, 5 );

	m_staticPrestar_DniAlumno_Valor = new wxStaticText( this, wxID_ANY, wxT("DniDeEjemplo"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticPrestar_DniAlumno_Valor->Wrap( -1 );
	bSizer57->Add( m_staticPrestar_DniAlumno_Valor, 0, wxALL, 5 );


	bSizer59->Add( bSizer57, 1, wxEXPAND, 5 );


	bSizerPrestarAAlumno->Add( bSizer59, 0, 0, 5 );


	bSizer46->Add( bSizerPrestarAAlumno, 0, 0, 5 );

	wxBoxSizer* bSizerBuscarLibroAPrestar;
	bSizerBuscarLibroAPrestar = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* bSizer61;
	bSizer61 = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* bSizer63;
	bSizer63 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText9 = new wxStaticText( this, wxID_ANY, wxT("Prestar Libro:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText9->Wrap( -1 );
	bSizer63->Add( m_staticText9, 0, wxALL, 5 );


	bSizer61->Add( bSizer63, 0, wxEXPAND, 5 );

	m_bcomboBox1 = new wxBitmapComboBox( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 );
	bSizer61->Add( m_bcomboBox1, 1, wxALL, 5 );


	bSizerBuscarLibroAPrestar->Add( bSizer61, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer62;
	bSizer62 = new wxBoxSizer( wxHORIZONTAL );

	m_button15 = new wxButton( this, wxID_ANY, wxT("Confirmar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer62->Add( m_button15, 0, wxALL, 5 );


	bSizerBuscarLibroAPrestar->Add( bSizer62, 0, wxEXPAND, 5 );


	bSizer46->Add( bSizerBuscarLibroAPrestar, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer64;
	bSizer64 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer70;
	bSizer70 = new wxBoxSizer( wxVERTICAL );

	m_staticText23 = new wxStaticText( this, wxID_ANY, wxT("Libros Recientes"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText23->Wrap( -1 );
	bSizer70->Add( m_staticText23, 0, wxALL, 5 );


	bSizer64->Add( bSizer70, 0, 0, 5 );

	wxBoxSizer* bSizerListaPrestamosAnteriores;
	bSizerListaPrestamosAnteriores = new wxBoxSizer( wxVERTICAL );

	m_panel7 = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer40;
	bSizer40 = new wxBoxSizer( wxVERTICAL );

	m_list_PrestamosAnteriores = new wxListCtrl( m_panel7, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLC_REPORT );
	bSizer40->Add( m_list_PrestamosAnteriores, 1, wxALL|wxEXPAND, 5 );


	m_panel7->SetSizer( bSizer40 );
	m_panel7->Layout();
	bSizer40->Fit( m_panel7 );
	bSizerListaPrestamosAnteriores->Add( m_panel7, 1, wxALL|wxEXPAND, 5 );


	bSizer64->Add( bSizerListaPrestamosAnteriores, 1, wxEXPAND, 5 );


	bSizer46->Add( bSizer64, 1, wxEXPAND, 5 );


	this->SetSizer( bSizer46 );
	this->Layout();

	this->Centre( wxBOTH );
}

MyDialogPrestar::~MyDialogPrestar()
{
}

MyDialogHistorial::MyDialogHistorial( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer46;
	bSizer46 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizerPrestarAAlumno;
	bSizerPrestarAAlumno = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* bSizer59;
	bSizer59 = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* bSizer58;
	bSizer58 = new wxBoxSizer( wxHORIZONTAL );

	m_staticPrestar_NombreAlumno = new wxStaticText( this, wxID_ANY, wxT("Nombre: "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticPrestar_NombreAlumno->Wrap( -1 );
	bSizer58->Add( m_staticPrestar_NombreAlumno, 0, wxALL, 5 );

	m_staticPrestar_NombreAlumno_Valor = new wxStaticText( this, wxID_ANY, wxT("NombreEjemplo"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticPrestar_NombreAlumno_Valor->Wrap( -1 );
	bSizer58->Add( m_staticPrestar_NombreAlumno_Valor, 0, wxALL, 5 );


	bSizer59->Add( bSizer58, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer57;
	bSizer57 = new wxBoxSizer( wxHORIZONTAL );

	m_staticPrestar_DniAlumno = new wxStaticText( this, wxID_ANY, wxT("Dni: "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticPrestar_DniAlumno->Wrap( -1 );
	bSizer57->Add( m_staticPrestar_DniAlumno, 0, wxALL, 5 );

	m_staticPrestar_DniAlumno_Valor = new wxStaticText( this, wxID_ANY, wxT("DniDeEjemplo"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticPrestar_DniAlumno_Valor->Wrap( -1 );
	bSizer57->Add( m_staticPrestar_DniAlumno_Valor, 0, wxALL, 5 );


	bSizer59->Add( bSizer57, 1, wxEXPAND, 5 );


	bSizerPrestarAAlumno->Add( bSizer59, 0, 0, 5 );


	bSizer46->Add( bSizerPrestarAAlumno, 0, 0, 5 );

	wxBoxSizer* bSizer64;
	bSizer64 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer70;
	bSizer70 = new wxBoxSizer( wxVERTICAL );

	m_staticText23 = new wxStaticText( this, wxID_ANY, wxT("Libros Recientes"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText23->Wrap( -1 );
	bSizer70->Add( m_staticText23, 0, wxALL, 5 );


	bSizer64->Add( bSizer70, 0, 0, 5 );

	wxBoxSizer* bSizerListaPrestamosAnteriores;
	bSizerListaPrestamosAnteriores = new wxBoxSizer( wxVERTICAL );

	m_panel7 = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer40;
	bSizer40 = new wxBoxSizer( wxVERTICAL );

	m_list_PrestamosAnteriores = new wxListCtrl( m_panel7, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLC_REPORT );
	bSizer40->Add( m_list_PrestamosAnteriores, 1, wxALL|wxEXPAND, 5 );


	m_panel7->SetSizer( bSizer40 );
	m_panel7->Layout();
	bSizer40->Fit( m_panel7 );
	bSizerListaPrestamosAnteriores->Add( m_panel7, 1, wxALL|wxEXPAND, 5 );


	bSizer64->Add( bSizerListaPrestamosAnteriores, 1, wxEXPAND, 5 );


	bSizer46->Add( bSizer64, 1, wxEXPAND, 5 );


	this->SetSizer( bSizer46 );
	this->Layout();

	this->Centre( wxBOTH );
}

MyDialogHistorial::~MyDialogHistorial()
{
}
