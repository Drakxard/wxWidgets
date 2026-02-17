///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 4.2.1-0-g80c4cb6)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "MyProjectBase.h"

///////////////////////////////////////////////////////////////////////////

MyDialogParte2::MyDialogParte2( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxStaticBoxSizer* sbSizer1;
	sbSizer1 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("label") ), wxVERTICAL );

	m_button35 = new wxButton( sbSizer1->GetStaticBox(), wxID_ANY, _("Aceptar"), wxDefaultPosition, wxDefaultSize, 0 );
	sbSizer1->Add( m_button35, 0, wxALL, 5 );


	this->SetSizer( sbSizer1 );
	this->Layout();
	sbSizer1->Fit( this );

	this->Centre( wxBOTH );

	// Connect Events
	m_button35->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyDialogParte2::oaoa ), NULL, this );
}

MyDialogParte2::~MyDialogParte2()
{
}
