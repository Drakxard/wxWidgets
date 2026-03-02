#include "Reservas.h"

Reservas::Reservas() {
	existe = false;
}
Reservas::Reservas(size_t id, size_t idLibro, size_t idUsuario, int dia, int mes, int anio) {
	Existe();
	this->id = id;
	this->idLibro = idLibro;
	this->idUsuario = idUsuario;
	this->dia = dia;
	this->mes = mes;
	this->anio = anio;
}
size_t Reservas::VerID() const { return id; }
size_t Reservas::VerIDLibro() const { return idLibro; }
size_t Reservas::VerIDUsuario() const { return idUsuario; }
int Reservas::VerDia() const { return dia; }
int Reservas::VerMes() const { return mes; }
int Reservas::VerAnio() const { return anio; }
