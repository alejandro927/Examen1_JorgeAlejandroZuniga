#include <iostream>
#include <random>
#include <ctime>
#include "HTHPluss.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int menu() {
	int opcion=0;
	cout<<"\nLas opciones son:\n";
	cout<<"1)Agregar Pelicula\n";
	cout<<"2)Modificar Pelicula\n";
	cout<<"3)Eliminar pelicula\n";
	cout<<"4)Imprimir pelicula por genero\n";
	cout<<"5)Buscar Pelicula\n";
	cout<<"6)Imprimir pelicula por valoracion\n";
	cout<<"7)salida\n";
	cout<<"Elija su opcion:\n";
	cin>>opcion;
	cout<<endl;
	return opcion;
}

void agregarPelicula(HTHPluss* plus){
	string titulo="",director="",genero="";
	int valoracion=0;
	cout<<"Ingrese el titulo de la pelicula:";
	cin>>titulo;
	cout<<"\nIngrese el nombre del director de la pelicula:";
	cin>>director;
	cout<<"\nIngrese el genero de la pelicula:";
	cin>>genero;
	valoracion = 1 + rand() % 5;
	cout<<"\nLa valoracion es:"<<valoracion;
	plus->addPelicula(new Pelicula(titulo,director,genero,valoracion));
}


int main(int argc, char** argv) {
	srand(time(NULL));
	HTHPluss* plus = new HTHPluss();
	
	int opcion=0;
	bool respuesta;
	respuesta=true;
	while(respuesta==true) {
		opcion = menu();
		switch(opcion) {
			case 1: {
				agregarPelicula(plus);
			}
			break;
			case 2: {
				
				
				
			}
			break;
			case 3: {
				
				
				
			}
			break;
			
			case 4: {
				
				
				
			}
			break;
			
			case 5: {
				
				
				
			}
			break;
			
			case 6: {
				
				
				
			}
			break;
			 
			case 7: {
				respuesta = false;
				break;
			}
		}
	}
	
	
	return 0;
}