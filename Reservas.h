#ifndef RESERVAS_H
#define RESERVAS_H
#include <iostream>
using namespace std;
class Reservas {
	size_t id, idLibro, idUsuario; 
	int dia, mes, anio; // <--- Agregamos la fecha
	bool existe;
public:
	Reservas();
	// Actualizamos el constructor
	Reservas(size_t id, size_t idLibro, size_t idUsuario, int dia, int mes, int anio);
	
	size_t VerID() const;
	size_t VerIDLibro() const;
	size_t VerIDUsuario() const;
	
	// Nuevos métodos para leer la fecha
	int VerDia() const;
	int VerMes() const;
	int VerAnio() const;
	
	void Existe(){existe = true;}
	void NoExiste(){existe = false;}
	bool Existencia(){return existe;}

};

#endif

