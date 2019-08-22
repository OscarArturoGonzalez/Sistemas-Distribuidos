#include "../lib/Coordenada/Coordenada.h"
#include <iostream>
#include <stdlib.h>
#include <math.h>

Coordenada::Coordenada(double rr, double aa) : r(rr), angulo(aa) { 

}

double Coordenada::obtenerX() {
  return r* cos(angulo);
}

double Coordenada::obtenerY() {
  return r* sin(angulo);
}