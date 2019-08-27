#include "../lib/PoligonoIrreg/PoligonoIrreg.h"
#include "../lib/Coordenada/Coordenada.h"
#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;


PoligonoIrreg::PoligonoIrreg(){
	vector<Coordenada> v;
	coords = v;	
}

PoligonoIrreg::PoligonoIrreg(vector<Coordenada> coordenadas){
	coords = coordenadas;
}


void PoligonoIrreg::imprimeVertice(){
	int tam = coords.size();
	if(tam == 0){
		cout << "Vacio! " << endl;
	}else{
		for(int i = 0; i < tam; i++){
			cout << "La coordenada "<< i << " es: " << obtenX(coords[i]) << ", " << obtenY(coords[i]) << endl;
		}
	}
}

double PoligonoIrreg::obtenX(Coordenada c){	
	return c.obtenerX();
}
double PoligonoIrreg::obtenY(Coordenada c){	
	return c.obtenerY();
}

