#include "../lib/Rectangulo/Rectangulo.h"
#include "../lib/Coordenada/Coordenada.h"
#include <iostream>
#include <vector>
#include <stdlib.h>
#include <math.h>
#include <iterator>

using namespace std;

Rectangulo::Rectangulo() : superiorIzq(0,0), inferiorDer(0,0)
{ }

Rectangulo::Rectangulo(double xSupIzq, double ySupIzq, double xInfDer, double yInfDer):superiorIzq(xSupIzq, ySupIzq), inferiorDer(xInfDer,yInfDer)
{ }

void Rectangulo::imprimeEsq()
{
	cout << "Para la esquina superior izquierda.\n";
	cout << "x = " << superiorIzq.obtenerX() << " y = " << superiorIzq.obtenerY() << endl;
	cout << "Para la esquina inferior derecha.\n";
	cout << "x = " << inferiorDer.obtenerX() << " y = " << inferiorDer.obtenerY() << endl;
}

Coordenada Rectangulo::obtieneSupIzq()
{
	return superiorIzq;
}

Coordenada Rectangulo::obtieneInfDer()
{
	return inferiorDer;
}

