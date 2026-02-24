///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 4.2.1-0-g80c4cb6)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "ProyBaseEditarElemento.h"

///////////////////////////////////////////////////////////////////////////

MyDialogEditarElemento::MyDialogEditarElemento( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
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
}

MyDialogEditarElemento::~MyDialogEditarElemento()
{
}
