#include "Reservas.h"
Reservas::Reservas() {
}
Reservas::Reservas(size_t id,size_t idLibro,size_t idUsuario) {
	Existe();
	this->id = id;
	this->idLibro = idLibro;
	this->idUsuario = idUsuario;
	
}

size_t Reservas::VerID() const  
{
	return id;
}
size_t Reservas::VerIDLibro() const  
{
	return idLibro;
}

size_t Reservas::VerIDUsuario() const  
{
	return idUsuario;
}
