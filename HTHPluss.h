#ifndef HTHPLUSS_H
#define HTHPLUSS_H
#include <iostream>
#include <string>
using namespace std;
#include "Pelicula.h"
#include <vector>
class HTHPluss
{
	public:
		HTHPluss();
		~HTHPluss();
		void addPelicula(Pelicula*);
		void ModificarPelicula(int,int);
		void EliminarPelicula();
		void EnlistarPeliculas();
		
		
		
	private:
		vector <Pelicula*> pelis;
};

#endif