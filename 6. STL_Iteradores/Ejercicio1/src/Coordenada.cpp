#include "../lib/Coordenada/Coordenada.h"
#include <iostream>
#include <vector>
#include <stdlib.h>
#include <math.h>
#include <iterator>

using namespace std;

Coordenada::Coordenada(double xx, double yy) : x(xx), y(yy)
{ }

double Coordenada::obtenerX()
{
	return x;
}

double Coordenada::obtenerY()
{
	return y;
}