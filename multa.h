#ifndef MULTA_H
#define MULTA_H
#include <iostream>
using namespace std;
class multa {
	size_t id;
	size_t dni;
	char nombre[50];
	size_t ValorMulta;
	size_t IncrementoDiario;
public:
	multa();
	multa(size_t id,size_t dni,const char *nombre, size_t ValorMulta,size_t IncrementoDiario );
	
	size_t VerID() const;
	size_t VerDNI() const;
	size_t VerMultaActual() const;
	size_t VerIncrementoActual() const;
	const char *VerNombre() const;
};

#endif

