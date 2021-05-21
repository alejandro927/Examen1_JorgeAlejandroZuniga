#include <iostream>
#include <random>
#include <ctime>
#include "HTHPluss.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int miniMenu() {
	int opcion=0;
	cout<<"\nLas opciones son:\n";
	cout<<"1)Cambiar Titulo\n";
	cout<<"2)Cambiar Director\n";
	cout<<"3)Cambiar Genero\n";
	cout<<"4)Cambiar Caloracion\n";
	cout<<"Elija su opcion:\n";
	cin>>opcion;
	cout<<endl;
	while(opcion<1 || opcion >4){
		cout<<"Numero ingresado no es valido ingrese nuevamente:";
		cin>>opcion;
		
	}
	return opcion;
}

int menu() {
	int opcion=0;
	cout<<"\nLas opciones son:\n";
	cout<<"1)Agregar Pelicula\n";
	cout<<"2)Modificar Pelicula\n";
	cout<<"3)Eliminar pelicula\n";
	cout<<"4)Listar\n";
	cout<<"5)Imprimir pelicula por genero\n";
	cout<<"6)Buscar Pelicula\n";
	cout<<"7)Imprimir pelicula por valoracion\n";
	cout<<"8)salida\n";
	cout<<"Elija su opcion:\n";
	cin>>opcion;
	cout<<endl;
	while(opcion<1 || opcion >8){
		cout<<"Numero ingresado no es valido ingrese nuevamente:";
		cin>>opcion;
		
	}
	return opcion;
}

void agregarPelicula(HTHPluss* plus) {
	string titulo="",director="",genero="";
	int valoracion=0;
	cout<<"Ingrese el titulo de la pelicula:";
	getline(cin,titulo);
	getline(cin,titulo);
	cout<<"\nIngrese el nombre del director de la pelicula:";
	getline(cin,director);
	cout<<"\nIngrese el genero de la pelicula:";
	getline(cin,genero);
	valoracion = 1 + rand() % 5;
	cout<<"\nLa valoracion es:"<<valoracion;
	plus->addGen(genero);
	plus->addVal(valoracion);
	plus->addPelicula(new Pelicula(titulo,director,genero,valoracion));
}

void modificarPelicula(HTHPluss* plus) {
	plus->enlistarPeliculas();
	int opcion;
	int posicion;
	cout<<"Ingrese la pelicula que desee modificar:";
	cin>>posicion;
	while(posicion < 0 )
	{
		cout<<"No se aceptan numeros negativos ingrese nuevamente:";
		cin>>posicion;
	}
	opcion = miniMenu();
	plus->modificarPelicula(opcion,posicion);
	
}


void eliminarPelicula(HTHPluss* plus)
{
	plus->enlistarPeliculas();
	int opcion;
	cout<<"Ingrese la pelicula que desee eliminar:";
	cin>>opcion;
	plus->eliminarPelicula(opcion);
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
				modificarPelicula(plus);
			}
			break;
			case 3: {
				eliminarPelicula(plus);
			}
			break;

			case 4: {
				plus->enlistarPeliculas();
				cout<<endl;
				plus->enlistarGen();
				cout<<endl;
				plus->enlistarValoracion();
			}
			break;

			case 5: {



			}
			break;

			case 6: {



			}
			break;

			case 7: {



			}
			break;

			case 8: {
				respuesta = false;
				break;
			}
		}
	}


	return 0;
}