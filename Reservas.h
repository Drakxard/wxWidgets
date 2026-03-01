#ifndef RESERVAS_H
#define RESERVAS_H
#include <iostream>
using namespace std;
class Reservas {
	size_t id,idLibro,idUsuario; ///Mejor editar struct prestamo, 
						///así un boolean que lo diferencie
	bool existe;
	public:
		Reservas();
		Reservas(size_t id,size_t idLibro,size_t idUsuario);
		size_t VerID() const;
		size_t VerIDLibro() const;
		size_t VerIDUsuario() const;
		
		void Existe(){existe = true;}
		void NoExiste(){existe = false;}
		bool Existencia(){return existe;}

};

#endif

