#include "./../lib/Rectangulo/Rectangulo.h"
#include "./../lib/Coordenada/Coordenada.h"
#include "./../lib/PoligonoIrreg/PoligonoIrreg.h"
#include <iostream>
#include <vector>
#include <stdlib.h>
#include <math.h>
#include <iterator>

using namespace std;


int main(){
	//PoligonoIrreg poligono1(2,3,5,1);
	PoligonoIrreg p1;

	p1.anadeVertice();

	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(3);
	
	cout << "Coordenadas de p1\n";

	p1.imprimeVer();
	p1.ordenaA();
	cout<<"Vector ordenado por magnitud\n";
	p1.imprimeVer();

	return 0;

}