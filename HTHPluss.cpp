#include "HTHPluss.h"

HTHPluss::HTHPluss() {
}

HTHPluss::~HTHPluss() {
}


void HTHPluss::addPelicula(Pelicula* peli) {
	pelis.push_back(peli);
}

void HTHPluss::ModificarPelicula(int opcion,int posicion) {
	switch(opcion) {
		case 1: {
			string tit="";
			cout<<"Ingrese el nuevo titulo de la pelicula:";
			cin>>tit;
			for(int i=0;i<pelis.size();i++){
				if(i == posicion){
					
				}
			}
			
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
	}


}



