#include "buscador.h"
#include "../libro/libro.h"
#include "../system/system.h"
#include <algorithm>
#include "../Bloques/Bloques.h"
#include "../bibliotecario/bibliotecario.h"
#include <cctype>
using namespace std;
///FALTA VISUALIZAR Y TESTEAR QUE ANDE ESTO
void Buscador::GenerarDiccionarioGlobal(Libro actual){
	sistema = new System();
	Bloques allTags;
	string path = sistema->etiquetas();
	vector<string>PalabrasParciales;
	vector<Tags>diccionarioActual = sistema->VerContenido<Tags>(sistema->etiquetas(),true);
	Tags aux;
	bool Esta=false;
		PalabrasParciales = ExtraerPalabras(actual.VerNombre());
		
		for(string& palabra: PalabrasParciales){
			for(Tags& x: diccionarioActual){
				if(palabra == x.NombreTag){
					Esta = true;
					allTags.AgregarNuevoElemento(x.VerID(),actual.VerID());
				}
			}
			if(!Esta){
				aux = allTags.AgregarNuevoTag(palabra,actual.VerID());
				sistema->AlUltimo<Tags>(path,aux);
			}
		}	
		
		//PalabrasParciales = ExtraerPalabras(DicLibros[i].VerAutores(),true);
		//PalabrasExtraidas.insert(PalabrasExtraidas.end(), PalabrasParciales.begin(), PalabrasParciales.end());
	
}

Buscador::~Buscador(){
	delete sistema;
}


vector<size_t> Buscador::BusquedaSimple(string nombreBuscado)
{
	string nombreArchivo = diccionario.VerPathEtiquetas();

	vector<Tags> contenedor;
	contenedor = sistema->VerContenido<Tags>(nombreArchivo,true);
	vector<Tags>::iterator buscado = find_if(contenedor.begin(),contenedor.end(),[nombreBuscado](const Tags& a){
		string r= a.NombreTag;
		for(char &letra : r){
			letra =tolower(letra);
		}
		
		return r == nombreBuscado;
	});
	///Para la comparaciï¿½n, si no es la palabra exacta falla
	///estaria bueno hacer por prefijo, truncar diccionario
	///Y palabra ingresada
	vector<size_t>resultado;
	size_t DireccionBloque;
	if(buscado != contenedor.end()){
		DireccionBloque = buscado->IdTag;
		resultado = diccionario.LeerTodosLosElementos(DireccionBloque);
	}
	return resultado;
}
vector<size_t> Buscador::BusquedaAmpliada(string nombreBuscado){
	///Truncar frase a vector de palabras
	vector<string> palabras = ExtraerPalabras(nombreBuscado);
	vector<size_t> resultadoParcial;
	vector<size_t>resultado;
	for(size_t i = 0; i<palabras.size();++i){

		resultadoParcial = BusquedaSimple(palabras[i]);
		resultado.insert(resultado.end(), resultadoParcial.begin(), resultadoParcial.end());
	}
	
	resultado = ResultadoBusqueda(resultado);
	
	return resultado;
}

vector<string> Buscador::ExtraerPalabras(string nombreBuscado, bool coma){
	vector<string> resultado;
	string palabra;
	char condicional;
	if(coma){
		condicional = ',';
	}else{
		condicional = ' ';
	}
	cout<<endl<<nombreBuscado.length()<<endl;
	for(size_t i= 0; i< nombreBuscado.length(); ++i){
		if(nombreBuscado[i]!=condicional){
			palabra += nombreBuscado[i];
		}else{
			for(char &letra : palabra){
				letra =tolower(letra);
			}
			resultado.push_back(palabra);
			
			palabra="";
		}
	}
	for(char &letra : palabra){
		letra =tolower(letra);
	}
	resultado.push_back(palabra);
	return resultado;
}
vector<size_t> Buscador::OrdenarAscendente(vector<size_t>v){
	sort(v.begin(),v.end());
	return v;
	
}	
vector<Libro>Buscador:: Busqueda_Autor(string autorBuscado, vector<Libro>&v){
	vector<Libro> aux;
	auto encontrado = v.begin();
	size_t pos=0;
	while(encontrado!=v.end()){
		
		encontrado = find_if(v.begin()+pos,v.end(),[autorBuscado](const Libro& a){
			return a.VerAutores() == autorBuscado;
		});
		if(encontrado== v.end()){break;}
		
		aux.push_back(*encontrado);
		pos=(encontrado-v.begin())+1;
	}
	return aux;
}	

	vector<size_t> Buscador:: ResultadoBusqueda(vector<size_t>&All_IDs){
		vector<size_t> resultado;
		if(All_IDs.size()==0) return resultado;
		Ranking aux;
		
		OrdenarAscendente(All_IDs);
		
		///Contar IDs Distintos
		vector<Ranking>resultadosParciales;
		bool primero = true;
		for(size_t i = 0; i < All_IDs.size();++i){
			if(primero){
				primero = false;
				aux.cuenta = count(All_IDs.begin(),All_IDs.end(),All_IDs[i]);
				aux.valor= All_IDs[i];
				resultadosParciales.push_back(aux);
			}else{
				if(All_IDs[i]!=All_IDs[i-1]){
					aux.cuenta = count(All_IDs.begin(),All_IDs.end(),All_IDs[i]);
					aux.valor= All_IDs[i];
					resultadosParciales.push_back(aux);
				}
			}
		}
		
		///Ordenar Descendente
		sort(resultadosParciales.begin(),
			 resultadosParciales.end(),
			 [](const Ranking& a, const Ranking& b){
				 return a.cuenta > b.cuenta;
			 });
		
		///Retornar solo mayor inferencia
		for(Ranking&x:resultadosParciales)
			resultado.push_back(x.valor);
		return resultado;
}	
	
vector<Bibliotecario>Buscador:: Busqueda_Bibliotecario(int columna, string Buscar, vector<Bibliotecario>&v){
	vector<Bibliotecario> aux;
	auto encontrado = v.begin();
	size_t pos=0;
	while(encontrado!=v.end()){
		switch(columna){
			
		case 1:	{//buscar por DNI de los bibliotecarios
			size_t numero_dni = static_cast<size_t>(std::stoul(Buscar));
			encontrado = find_if(v.begin()+pos,v.end(),[numero_dni](const Bibliotecario& a){
				return a.VerDNI() == numero_dni;
			});
			
			break;
		}
		case 2:{//buscar por nombre de los bibliotecarios
			encontrado = find_if(v.begin()+pos,v.end(),[Buscar](const Bibliotecario& a){
				return a.VerNombre() == Buscar;
			});
			break;
		}
			
		case 3:{ //buscar por ID
				size_t numero_ID = static_cast<size_t>(std::stoul(Buscar));
				encontrado = find_if(v.begin()+pos,v.end(),[numero_ID](const Bibliotecario& a){
					return a.VerID() == numero_ID;
				});
				break;
			}
		}
		if(encontrado== v.end())
			   break;
		aux.push_back(*encontrado);
		pos=(encontrado-v.begin())+1;
	}
	return aux;
}
vector<Alumno> Buscador::Busqueda_Alumno(int columna, string Buscar, vector<Alumno>& v) {
	vector<Alumno> aux;
	auto encontrado = v.begin();
	size_t pos = 0;
	while (encontrado != v.end()) {
		switch (columna) {
		case 1: { 
			size_t numero_dni = static_cast<size_t>(std::stoul(Buscar));
			encontrado = find_if(v.begin() + pos, v.end(), [numero_dni](const Alumno& a) {
				return a.VerDNI() == numero_dni;
			});
			break;
		} 
		
		case 2: {
			encontrado = find_if(v.begin() + pos, v.end(), [Buscar](const Alumno& a) {
				return a.VerNombre() == Buscar;
			});
			break;
		}
		
		case 3: {
			size_t numero_ID = static_cast<size_t>(std::stoul(Buscar));
			encontrado = find_if(v.begin() + pos, v.end(), [numero_ID](const Alumno& a) {
				return a.VerID() == numero_ID;
			});
			break;
		}
		
		case 4: {
			bool estado = (Buscar == "1" || Buscar == "true");
			encontrado = find_if(v.begin() + pos, v.end(), [estado](Alumno& a) {
				return a.VerEstadoDeSancion() == estado;
			});
			break;
		}
		}
		if (encontrado == v.end()) break;
		
		aux.push_back(*encontrado);
		pos = (encontrado - v.begin()) + 1;
	}
	return aux;
}
vector<Libro>Buscador:: Busqueda_Libro(int columna, string Buscar, vector<Libro>&v){
	vector<Libro> aux;
	auto encontrado = v.begin();
	size_t pos=0;
	while(encontrado!=v.end()){
		switch(columna){
			
		case 1:	{//buscar por autor
			encontrado = find_if(v.begin()+pos,v.end(),[Buscar](const Libro& a){
				return a.VerAutores() == Buscar;
			});
			break;
		}
		case 2:{//buscar por nombre
			encontrado = find_if(v.begin()+pos,v.end(),[Buscar](const Libro& a){
				return a.VerNombre() == Buscar;
			});
			break;
		}
			
		case 3: {//buscar por disponibilidad
			bool estado = (Buscar == "1" || Buscar == "true");
			encontrado = find_if(v.begin()+pos,v.end(),[estado](const Libro& a){
				return a.EstadoDisponibilidad() ==estado;
			});
			break;
			}
			
		case 4:{//buscar por id
			size_t numero = static_cast<size_t>(std::stoul(Buscar));
			encontrado = find_if(v.begin()+pos,v.end(),[numero](const Libro& a){
				return a.VerID() == numero;
			});
			break;
		}
		}
		if(encontrado== v.end())
			   break;
		aux.push_back(*encontrado);
		pos=(encontrado-v.begin())+1;
	}
	return aux;
}
		
	
	
