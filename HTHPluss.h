#ifndef HTHPLUSS_H
#define HTHPLUSS_H
#include <iostream>
#include <string>
#include <cstring>
#include <random>
#include <ctime>
#include <algorithm>
using namespace std;
#include "Pelicula.h"
#include <vector>
class HTHPluss
{
	public:
		HTHPluss();
		~HTHPluss();
		void addPelicula(Pelicula*);
		
		void modificarPelicula(int,int);
		
		void eliminarPelicula(int);
		
		void enlistarPeliculas();
		void listarPorGenero();
		void listarPorValoracion();
		void buscarpelis(string);
		
		
	private:
		vector <Pelicula*> pelis;
		
};

#endif