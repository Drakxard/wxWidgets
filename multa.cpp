#include "multa.h"
#include <cstring>
using namespace std;

multa::multa() {
	
}
multa::multa(size_t id,size_t dni,const char *nombre, size_t ValorMulta,size_t IncrementoDiario ) {
	this->id= id;
	this->dni = dni;
	strncpy(this->nombre, nombre, 49);
	this->nombre[49] = '\0';
	
	this->ValorMulta= ValorMulta;
	this->IncrementoDiario= IncrementoDiario;
}
size_t multa::VerID() const
{
	return id;
}
size_t multa::VerDNI() const
{
	return dni;
}
const char *multa::VerNombre() const
{
	return this->nombre;
}


size_t multa::VerMultaActual() const
{
	return ValorMulta;
}
size_t multa::VerIncrementoActual() const
{
	return IncrementoDiario;
}
