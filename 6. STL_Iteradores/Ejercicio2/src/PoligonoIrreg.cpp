#include "../lib/PoligonoIrreg/PoligonoIrreg.h"
#include "../lib/Coordenada/Coordenada.h"
#include <iostream>
#include <vector>
#include <stdlib.h>
#include <math.h>
#include <iterator>
#include <algorithm>

using namespace std;

PoligonoIrreg::PoligonoIrreg(){ 
	vector<Coordenada> v;
	xy = v;
}

PoligonoIrreg::PoligonoIrreg(vector<Coordenada> coordenadas){ 
	xy = coordenadas;
}

void PoligonoIrreg::imprimeVer()
{	
	PoligonoIrreg p;
	double magnitud;
	int tamanio = xy.size();
	vector<Coordenada>::iterator i;
	

	if(tamanio == 0){
		cout << "No hay coordenadas";
	}else{
		for(i = xy.begin(); i != xy.end(); i++){
			cout << "La coordenada " << " es: " << (*i).obtenerX() << ", " << (*i).obtenerY() << " Magnitud: " << p.obtenerMagnitud((*i)) << endl;
		}
	}
	return;
}

void PoligonoIrreg::anadeVertice(){
	double x = 0, y = 0, d = 0;
	for (int i = 0; i < 10; i++)
	{
		//cout << "Ingrese la coordenada del poligono: ";
		x = -100 + static_cast <float> (rand()) /( static_cast <float> (RAND_MAX/(100+100)));
		y = -100 + static_cast <float> (rand()) /( static_cast <float> (RAND_MAX/(100+100)));
		// x = -100 + rand() % (101+100);
		// y = -100 + rand() % (101+100);
	  	xy.push_back(Coordenada(x,y));
	}
		
	
}

double PoligonoIrreg::obtenerMagnitud(Coordenada v){
	return sqrt(pow(v.obtenerX()-0,2)+pow(v.obtenerY()-0,2));
}

bool PoligonoIrreg::myfunction( Coordenada coordenadaA, Coordenada coordenadaB){
	return obtenerMagnitud(coordenadaA) < obtenerMagnitud(coordenadaB);
}

void PoligonoIrreg::ordenaA(){
	sort(xy.begin(), xy.end(), myfunction);

}