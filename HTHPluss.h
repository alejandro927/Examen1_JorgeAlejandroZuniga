#ifndef HTHPLUSS_H
#define HTHPLUSS_H
#include <iostream>
#include <random>
#include <ctime>
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
		void addVal(int);
		void addGen(string);
		void modificarPelicula(int,int);
		void eliminarPelicula(int);
		void enlistarPeliculas();
		void enlistarGen();
		void enlistarValoracion();
		
		
		
	private:
		vector <Pelicula*> pelis;
		vector <string> gen;
		vector <int> valoracion;
};

#endif