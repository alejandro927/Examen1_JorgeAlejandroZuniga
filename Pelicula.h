#ifndef PELICULA_H
#define PELICULA_H
#include <string>
using namespace std;
class Pelicula {
	public:
		Pelicula();
		Pelicula(string,string,string,int);
		~Pelicula();
		void setTitulo(string);
		void setDirector(string);
		void setGenero(string);
		void setValoracion(int);
		string getTitulo();
		string getDirector();
		string getGenero();
		int getValoracion();

	private:
		string titulo;
		string director;
		string genero;
		int valoracion;
};

#endif