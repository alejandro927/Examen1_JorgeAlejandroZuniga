#include "Pelicula.h"

Pelicula::Pelicula()
{
}

Pelicula::Pelicula(string tit,string direc,string gen,int val)
{
	this->titulo = tit; 
 	this->director = direc; 
 	this->genero = gen; 
 	this->valoracion = val; 
}
//sets
 void Pelicula::setTitulo(string tit)//1
 {
 	this->titulo = tit; 
 }; 
  
 void Pelicula::setDirector(string direc)//2
 {
 	this->director = direc; 
 };
 
 void Pelicula::setGenero(string gen)//3
 {
 	this->genero = gen; 
 };
 
 void Pelicula::setValoracion(int val)//4
 {
 	this->valoracion = val; 
 };
 //getss
 string Pelicula::getTitulo(){
 	return this->titulo; 
 };
 
 string Pelicula::getDirector(){
 	return this->director; 
 };
 
 string Pelicula::getGenero(){
 	return this->genero; 
 };
 
 int Pelicula::getValoracion(){
 	return this->valoracion; 
 };

Pelicula::~Pelicula()
{
}

