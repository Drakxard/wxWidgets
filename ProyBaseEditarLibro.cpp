///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 4.2.1-0-g80c4cb6)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "ProyBaseEditarLibro.h"

///////////////////////////////////////////////////////////////////////////

MyDialogEditarLibro::MyDialogEditarLibro( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizerContendorEditar;
	bSizerContendorEditar = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizerEditarNombre;
	bSizerEditarNombre = new wxBoxSizer( wxHORIZONTAL );

	m_staticTextEditarNombre = new wxStaticText( this, wxID_ANY, _("Nombre"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextEditarNombre->Wrap( -1 );
	bSizerEditarNombre->Add( m_staticTextEditarNombre, 0, wxALL, 5 );

	wxBoxSizer* bSizer14;
	bSizer14 = new wxBoxSizer( wxVERTICAL );

	m_textCtrlEditarNombreValor = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer14->Add( m_textCtrlEditarNombreValor, 0, wxALL|wxALIGN_RIGHT|wxEXPAND, 5 );


	bSizerEditarNombre->Add( bSizer14, 1, wxEXPAND, 5 );


	bSizerContendorEditar->Add( bSizerEditarNombre, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizerEditarDescripcion;
	bSizerEditarDescripcion = new wxBoxSizer( wxHORIZONTAL );

	m_staticTextEditarDescripcion = new wxStaticText( this, wxID_ANY, _("Descripcion"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextEditarDescripcion->Wrap( -1 );
	bSizerEditarDescripcion->Add( m_staticTextEditarDescripcion, 0, wxALL, 5 );

	m_textCtrlEditarDescripcionValor = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizerEditarDescripcion->Add( m_textCtrlEditarDescripcionValor, 1, wxALL, 5 );


	bSizerContendorEditar->Add( bSizerEditarDescripcion, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizerEditarAutores;
	bSizerEditarAutores = new wxBoxSizer( wxHORIZONTAL );

	m_staticTextEditarAutores = new wxStaticText( this, wxID_ANY, _("Autores"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextEditarAutores->Wrap( -1 );
	bSizerEditarAutores->Add( m_staticTextEditarAutores, 0, wxALL, 5 );

	m_textCtrlEditarAutoresValor = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizerEditarAutores->Add( m_textCtrlEditarAutoresValor, 1, wxALL, 5 );


	bSizerContendorEditar->Add( bSizerEditarAutores, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizerBotones;
	bSizerBotones = new wxBoxSizer( wxHORIZONTAL );

	m_button3 = new wxButton( this, wxID_ANY, _("Tag1"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerBotones->Add( m_button3, 0, wxALL, 5 );

	m_button4 = new wxButton( this, wxID_ANY, _("Tag2"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerBotones->Add( m_button4, 0, wxALL, 5 );

	m_button5 = new wxButton( this, wxID_ANY, _("Tag3"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerBotones->Add( m_button5, 0, wxALL, 5 );


	bSizerContendorEditar->Add( bSizerBotones, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer12;
	bSizer12 = new wxBoxSizer( wxVERTICAL );

	m_listCtrlTags = new wxListCtrl( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLC_ICON );
	bSizer12->Add( m_listCtrlTags, 0, wxALL|wxEXPAND, 5 );


	bSizerContendorEditar->Add( bSizer12, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer10;
	bSizer10 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer13;
	bSizer13 = new wxBoxSizer( wxHORIZONTAL );

	m_button1 = new wxButton( this, wxID_ANY, _("Cancelar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer13->Add( m_button1, 0, wxALL, 5 );

	m_button2 = new wxButton( this, wxID_ANY, _("Confirmar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer13->Add( m_button2, 0, wxALL, 5 );


	bSizer10->Add( bSizer13, 0, 0, 5 );


	bSizerContendorEditar->Add( bSizer10, 1, wxALIGN_CENTER_HORIZONTAL, 5 );


	this->SetSizer( bSizerContendorEditar );
	this->Layout();
	bSizerContendorEditar->Fit( this );

	this->Centre( wxBOTH );

	// Connect Events
	m_button1->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyDialogEditarLibro::m_button_NuevoElemento_cancelar ), NULL, this );
	m_button2->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyDialogEditarLibro::OnButtonClickCerrar ), NULL, this );
}

MyDialogEditarLibro::~MyDialogEditarLibro()
{
}
