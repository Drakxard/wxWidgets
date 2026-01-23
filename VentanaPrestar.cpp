#include "VentanaPrestar.h"
#include <string>
using namespace std;

VentanaPrestar::VentanaPrestar(wxWindow *parent) : MyFramePrestar(parent) {
	
	///PrestamosAnteriores
	m_list_PrestamosAnteriores->InsertColumn(0, "ID", wxLIST_FORMAT_LEFT, 50);
	m_list_PrestamosAnteriores->InsertColumn(1, "Libro", wxLIST_FORMAT_LEFT, 200);
	
	m_list_PrestamosAnteriores->SetSingleStyle(wxLC_HRULES); // Líneas horizontales
	m_list_PrestamosAnteriores->SetSingleStyle(wxLC_VRULES); // Líneas verticaless
	CargarLista(m_list_PrestamosAnteriores);
}

VentanaPrestar::~VentanaPrestar() {
	
}

void VentanaPrestar::CargarLista(wxListCtrl* lista){
	//Limpiamos la tabla
	lista->DeleteAllItems();
	
	//
	lista->Freeze();
	
	string test = "EjemploNombreAlumno";
	int dni = 3242352; 
	for(int i=0;i<100;i++) { 
		///Llenamos con ID
		long index = lista -> InsertItem(i, wxString::Format("%d",((i+1)*2)));
		
		///CargarNombreDelAlumno
		lista-> SetItem(index, 1, test );
	}
	///Mostrar todo de golpe
	lista->Thaw();
	
}
