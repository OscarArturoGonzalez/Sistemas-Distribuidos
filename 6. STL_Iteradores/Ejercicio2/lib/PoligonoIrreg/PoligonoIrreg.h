#include "../Coordenada/Coordenada.h" 
#include <iostream>
#include <vector>
#include <stdlib.h>
#include <math.h>
#include <algorithm>
#include <iterator>
using namespace std;

#ifndef POLIGONOI_H_
#define POLIGONOI_H_

class PoligonoIrreg{
	private:
		vector <Coordenada> xy;
	public:
		PoligonoIrreg();
		PoligonoIrreg(vector<Coordenada> coord);
		void imprimeVer();
		void anadeVertice();
		Coordenada obtieneSupIzq();
		Coordenada obtieneInfDer();
		static double obtenerMagnitud(Coordenada v);
		void ordenaA();
		static bool myfunction (Coordenada coordenadaA, Coordenada coordenadaB);
};

#endif