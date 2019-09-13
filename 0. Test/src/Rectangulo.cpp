#include "../lib/Rectangulo/Rectangulo.h"
#include "../lib/Coordenada/Coordenada.h"
#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;

Rectangulo::Rectangulo() : superiorIzq(0, 0, 0), inferiorDer(0, 0, 0){ 

}

Rectangulo::Rectangulo(Coordenada supIzq, Coordenada infDer){ 
  superiorIzq = supIzq;
  inferiorDer = infDer;
}

Coordenada Rectangulo::obtieneSupIzq() {
  return superiorIzq;
}

Coordenada Rectangulo::obtieneInfDer() {
  return inferiorDer;
}