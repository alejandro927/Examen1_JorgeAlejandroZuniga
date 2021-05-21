#include "HTHPluss.h"

HTHPluss::HTHPluss() {
}

HTHPluss::~HTHPluss() {
	pelis.clear();
}


void HTHPluss::addPelicula(Pelicula* peli) {
	pelis.push_back(peli);
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
		cout<< i <<") "<< p->getTitulo()<< " - "<< p->getDirector() << " - " << p->getGenero() << " - " << p->getValoracion() << "/5" <<endl;
	}

}

void HTHPluss::listarPorGenero() {
	Pelicula* p;
	vector <string> gen;

	for(int j=0; j<pelis.size(); j++) {
		p = pelis[j];
		string genero="";
		genero = p->getGenero();
		
		if(gen.empty()) {
			gen.push_back(genero);
		} else {
			int cont=0;
			for(int i=0 ; i< gen.size() ; i++) {
				string aux="";
				aux = gen[i];

				if(genero != aux ) {

				} else {
					cont++;
				}
			}
			if(cont == 0) {
				gen.push_back(genero);
			}
		}
		
	}

	for(int i=0 ; i< gen.size() ; i++) {
		string aux = "";
		aux = gen[i];
		cout<< aux<<": "<<endl;
		for(int j=0 ; j < pelis.size() ; j++) {
			p=pelis[j];
			if(aux == p->getGenero()) {
				cout<< p->getTitulo()<< " - "<< p->getDirector() << " - " <<p->getValoracion()<<"/5"<<endl;
			}
		}
	}
}

void HTHPluss::listarPorValoracion() {
	vector <int> valoracion;
	Pelicula* p;

	for(int j=0; j<pelis.size(); j++) {
		p = pelis[j];
		int valor=0;
		valor = p->getValoracion();
		if(valoracion.empty()) {
			valoracion.push_back(valor);
		} else {
			int cont=0;
			for(int i=0 ; i< valoracion.size() ; i++) {
				int aux=0;
				aux = valoracion[i];

				if(valor != aux ) {

				} else {
					cont++;
				}
			}
			if(cont == 0) {
				valoracion.push_back(valor);
			} else {

			}
		}
	}


	for(int i=0 ; i< valoracion.size() ; i++) {
		int aux = 0;
		aux = valoracion[i];
		for(int j=0 ; j < pelis.size() ; j++) {
			p=pelis[j];
			if(aux == p->getValoracion()) {
				cout<< p->getTitulo()<< " - "<< p->getDirector() << " - " << p->getGenero() << " - " <<p->getValoracion()<<"/5"<<endl;
			}
		}
	}

}

void HTHPluss::buscarpelis(string cadena) {
	Pelicula* p;
	for(int i=0 ; i < pelis.size() ; i++) {
		p = pelis[i];
		string aux ="";
		aux = p->getTitulo();
		if(aux.find(cadena) != string::npos){
			cout<< p->getTitulo()<< " - "<< p->getDirector() << " - " << p->getGenero() << " - " <<p->getValoracion()<<"/5"<<endl;
		}
	}
}
