#ifndef VENTANAPARAALUMNO_H
#define VENTANAPARAALUMNO_H
#include "wxfb_project.h"
#include "Funcionalidades/alumno/alumno.h"
#include "Reservas.h"
#include "Funcionalidades/Bloques/Bloques.h"
#include "ProyBaseAlumno.h"
#include "DialogoDevolucion.h"
#include "Funcionalidades/buscador/buscador.h"
class System;
class Bibliotecario;

class VentanaParaAlumno : public MyFrameInicioCorrectoAlumno {
	
private:
	int dni;
	System *sistema; Buscador navega;
	Bibliotecario *admin;
	Alumno actualAlumno;
	Bloques allTags;
	vector<Tags> tagsActuales;
	vector<size_t> idTags;
	vector<Alumno> vAlumno; vector<Alumno>vResultadoAlumno;
	vector<Bibliotecario> vBibliotecario;vector<Bibliotecario>vResultadoBibliotecario;
	vector<Libro>vLibros;  vector<Libro>vResultadoLibro;
	vector<Reservas>vReservas;
	
protected:
	void MostrarLibros(vector<Libro>vLibros);
	void OnLeftUpVerLibro( wxMouseEvent& event ) ;
	void Onclick_Boton_Buscar_Frase( wxCommandEvent& event )  ;
	void OnRadioButton_CambiaPestana( wxCommandEvent& event )  override;

	void CargarListaReservar(wxListCtrl* lista);
	
	void MuestraListaResultadoAlumno(wxListCtrl* lista);
	
public:
	VentanaParaAlumno(wxWindow *parent,Alumno actualAlumno);
	~VentanaParaAlumno();
};

#endif

