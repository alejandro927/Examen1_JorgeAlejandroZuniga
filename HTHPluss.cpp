#include "HTHPluss.h"

HTHPluss::HTHPluss() {
}

HTHPluss::~HTHPluss() {
}


void HTHPluss::addPelicula(Pelicula* peli) {
	pelis.push_back(peli);
}

void HTHPluss::addGen(string genero) {

	if(gen.empty()) {
		gen.push_back(genero);
	} else {
		int cont=0;
		for(int i=0 ; i< gen.size() ; i++) {
			string aux="";
			aux = gen[i];
			cout<<aux;
			if(genero != aux ) {

			} else {
				cont++;
			}
		}
		if(cont == 0) {
			gen.push_back(genero);
		} else {
			cout<<"Ya existe ese genero:";
		}
	}
	
}

void HTHPluss::addVal(int valor) {

	if(valoracion.empty()) {
		valoracion.push_back(valor);
	} else {
		int cont=0;
		for(int i=0 ; i< valoracion.size() ; i++) {
			int aux=0;
			aux = valoracion[i];
			cout<<aux;
			if(valor != aux ) {

			} else {
				cont++;
			}
		}
		if(cont == 0) {
			valoracion.push_back(valor);
		} else {
			cout<<"Ya existe esa valoracion:";
		}
	}
	
}

void HTHPluss::modificarPelicula(int opcion,int posicion) {
	Pelicula* p;
	srand(time(NULL));
	switch(opcion) {
		case 1: {

			string tit="";
			cout<<"Ingrese el nuevo titulo de la pelicula:";
			getline(cin,tit);
			getline(cin,tit);
			for(int i=0; i<pelis.size(); i++) {
				if(i == posicion) {
					p = pelis[i];
					p->setTitulo(tit);
					pelis[i] = p;
				}
			}
			cout<<"Se modifico exitosamente!!!\n";
		}
		break;
		case 2: {
			string direc="";
			cout<<"Ingrese el nuevo Director de la pelicula:";
			getline(cin,direc);
			getline(cin,direc);
			for(int i=0; i<pelis.size(); i++) {
				if(i == posicion) {
					p = pelis[i];
					p->setDirector(direc);
					pelis[i] = p;
				}
			}
			cout<<"Se modifico exitosamente!!!\n";
		}
		break;
		case 3: {
			string gen="";
			cout<<"Ingrese el nuevo genero de la pelicula:";
			cin>>gen;
			for(int i=0; i<pelis.size(); i++) {
				if(i == posicion) {
					p = pelis[i];
					p->setGenero(gen);
					pelis[i] = p;
				}
			}
			cout<<"Se modifico exitosamente!!!\n";
		}
		break;
		case 4: {
			int val=0;
			val = 1+ rand()%5;
			for(int i=0; i<pelis.size(); i++) {
				if(i == posicion) {
					p = pelis[i];
					p->setValoracion(val);
					pelis[i] = p;
				}
			}
			cout<<"Se modifico exitosamente!!!\n";
		}
		break;
	}


}

void HTHPluss::eliminarPelicula(int posicion) {
	pelis.erase(begin(pelis) + posicion);
	cout<<"Se elimino Excitosamente!!!\n";
}

void HTHPluss::enlistarPeliculas() {
	Pelicula* p;
	cout<<"====Las Peliculas====\n";
	for(int i=0; i<pelis.size(); i++) {
		p = pelis[i];
		cout<< i <<") "<< p->getTitulo()<< ", "<< p->getDirector() << ", " << p->getGenero() << ", " <<p->getValoracion()<<"/5"<<endl;
	}

}

void HTHPluss::enlistarGen() {
	cout<<"\n====Los generos ====\n";
	for(int i=0; i<gen.size(); i++) {
		string aux="";
		aux = gen[i];
		cout << aux << endl;

	}

}

void HTHPluss::enlistarValoracion() {
	cout<<"\n====Las valoraciones ====\n";
	for(int i=0; i<valoracion.size(); i++) {
		int aux=0;
		aux = valoracion[i];
		cout << aux << endl;

	}

}

