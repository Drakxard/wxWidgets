///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 4.2.1-0-g80c4cb6)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "ProyBaseMulta.h"

///////////////////////////////////////////////////////////////////////////

MyDialogMulta::MyDialogMulta( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer8;
	bSizer8 = new wxBoxSizer( wxVERTICAL );

	m_staticText10 = new wxStaticText( this, wxID_ANY, _("CUENTA SUSPENDIDA"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText10->Wrap( -1 );
	m_staticText10->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_MENU ) );
	m_staticText10->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_INACTIVECAPTIONTEXT ) );

	bSizer8->Add( m_staticText10, 1, wxALL|wxEXPAND, 5 );


	bSizer1->Add( bSizer8, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer7;
	bSizer7 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer131;
	bSizer131 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText121 = new wxStaticText( this, wxID_ANY, _("Alumno: "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText121->Wrap( -1 );
	bSizer131->Add( m_staticText121, 0, wxALL, 5 );

	m_staticTextMultadoNombre = new wxStaticText( this, wxID_ANY, _("NombreAlum"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextMultadoNombre->Wrap( -1 );
	bSizer131->Add( m_staticTextMultadoNombre, 0, wxALL, 5 );


	bSizer7->Add( bSizer131, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer13;
	bSizer13 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText12 = new wxStaticText( this, wxID_ANY, _("Dni: "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText12->Wrap( -1 );
	bSizer13->Add( m_staticText12, 0, wxALL, 5 );

	m_staticTextDni = new wxStaticText( this, wxID_ANY, _("DniUser"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextDni->Wrap( -1 );
	bSizer13->Add( m_staticTextDni, 0, wxALL, 5 );


	bSizer7->Add( bSizer13, 1, wxEXPAND, 5 );


	bSizer1->Add( bSizer7, 0, 0, 5 );

	wxBoxSizer* bSizer4;
	bSizer4 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer10;
	bSizer10 = new wxBoxSizer( wxVERTICAL );

	m_staticText11 = new wxStaticText( this, wxID_ANY, _("Facultad de Ciencias Hidricas"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText11->Wrap( -1 );
	bSizer10->Add( m_staticText11, 0, wxALL, 5 );


	bSizer4->Add( bSizer10, 0, 0, 5 );

	wxBoxSizer* bSizer11;
	bSizer11 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText2 = new wxStaticText( this, wxID_ANY, _("Horarios:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText2->Wrap( -1 );
	bSizer11->Add( m_staticText2, 0, wxALL, 5 );

	m_staticText3 = new wxStaticText( this, wxID_ANY, _("Lunes a Viernes de"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3->Wrap( -1 );
	bSizer11->Add( m_staticText3, 0, wxALL, 5 );

	m_staticText4 = new wxStaticText( this, wxID_ANY, _("08:00 a 20:00"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText4->Wrap( -1 );
	bSizer11->Add( m_staticText4, 0, wxALL, 5 );


	bSizer4->Add( bSizer11, 0, 0, 5 );


	bSizer1->Add( bSizer4, 0, 0, 5 );

	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer14;
	bSizer14 = new wxBoxSizer( wxVERTICAL );

	m_staticText1 = new wxStaticText( this, wxID_ANY, _("Libros implicados:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1->Wrap( -1 );
	bSizer14->Add( m_staticText1, 0, wxALL, 5 );


	bSizer2->Add( bSizer14, 0, 0, 5 );

	wxBoxSizer* bSizer3;
	bSizer3 = new wxBoxSizer( wxVERTICAL );

	m_listCtrlLibrosPrestados = new wxListCtrl( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLC_ICON );
	bSizer3->Add( m_listCtrlLibrosPrestados, 1, wxALL|wxEXPAND, 5 );


	bSizer2->Add( bSizer3, 1, wxEXPAND, 5 );


	bSizer1->Add( bSizer2, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer18;
	bSizer18 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer5;
	bSizer5 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText5 = new wxStaticText( this, wxID_ANY, _("Multa actual: $"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText5->Wrap( -1 );
	bSizer5->Add( m_staticText5, 0, wxALL, 5 );

	m_staticTextMultaActual = new wxStaticText( this, wxID_ANY, _("CantidadAdeudada"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextMultaActual->Wrap( -1 );
	bSizer5->Add( m_staticTextMultaActual, 0, wxALL, 5 );


	bSizer18->Add( bSizer5, 0, 0, 5 );

	wxBoxSizer* bSizer6;
	bSizer6 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText8 = new wxStaticText( this, wxID_ANY, _("Incremento por día de retraso: +$"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText8->Wrap( -1 );
	bSizer6->Add( m_staticText8, 0, wxALL, 5 );

	m_staticTextIncremento = new wxStaticText( this, wxID_ANY, _("IncrementoDiario"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextIncremento->Wrap( -1 );
	bSizer6->Add( m_staticTextIncremento, 0, wxALL, 5 );


	bSizer18->Add( bSizer6, 0, 0, 5 );


	bSizer1->Add( bSizer18, 0, 0, 5 );


	this->SetSizer( bSizer1 );
	this->Layout();
	bSizer1->Fit( this );

	this->Centre( wxBOTH );
}

MyDialogMulta::~MyDialogMulta()
{
}
