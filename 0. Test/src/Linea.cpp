#include "../lib/Linea/Linea.h"
#include "../lib/Coordenada/Coordenada.h"
#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;

Linea::Linea(Coordenada o, Coordenada d) : origen(o), destino(d){ 

}

Coordenada Linea::obtieneOrigen() {
  return origen;
}

Coordenada Linea::obtieneDestino() {
  return destino;
}