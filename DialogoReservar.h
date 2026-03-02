#include "ProyBaseReservar.h"
#include "Funcionalidades/libro/libro.h"
#include "Funcionalidades/alumno/alumno.h"
#include <wx/calctrl.h>
#include <wx/datetime.h> // Necesario para las fechas de inicio y fin

class DialogoReservar : public MyDialogReservar {
	
private:
	Libro libroAReservar;
	Alumno alumnoReserva;
	
	// Variables para manejar el rango de fechas
	wxDateTime fechaInicio;
	wxDateTime fechaFin;
	int estadoSeleccion; // 0 = sin seleccion, 1 = un clic (inicio), 2 = dos clics (rango)
	
	void PintarDiasCalendario();
	bool EsFechaReservada(const wxDateTime& fecha);
	
protected:
	// Sobrescribimos los eventos que creaste en wxFormBuilder
	void OnCalendarSeleccion(wxCalendarEvent& event) override;
	void OnCalendarCambioMes(wxCalendarEvent& event) override;
	
	void OnBotonConfirmarClick( wxCommandEvent& event ) override;
	void OnBotonCancelarClick( wxCommandEvent& event ) override;
	
public:
	// Constructor que recibe el libro y el alumno
	DialogoReservar(wxWindow *parent, Libro& libro, Alumno& alumno);
	~DialogoReservar();
};
