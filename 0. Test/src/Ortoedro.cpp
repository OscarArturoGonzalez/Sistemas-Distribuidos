#include "../lib/Ortoedro/Ortoedro.h"
#include "../lib/Rectangulo/Rectangulo.h"
#include "../lib/Coordenada/Coordenada.h"
#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;


Ortoedro::Ortoedro(Coordenada o, Coordenada d){ 
  a = Linea(Coordenada(o.obtenerX(), o.obtenerY(), o.obtenerZ()), Coordenada(d.obtenerX() - o.obtenerX(), o.obtenerY(), o.obtenerZ()))
  b = Linea(Coordenada(d.obtenerX() - o.obtenerX(), o.obtenerY(), o.obtenerZ()),   )
  c = Linea(Coordenada(o.obtenerX(), o.obtenerY(), o.obtenerZ()), Coordenada(d.obtenerX() - o.obtenerX(), o.obtenerY(), o.obtenerZ()))
}

void Ortoedro::obtieneVertices() {
  
}