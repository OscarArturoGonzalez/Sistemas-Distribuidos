#include <iostream>
#include "../lib/Coordenada/Coordenada.h"
#include "../lib/Rectangulo/Rectangulo.h"
#include "../lib/Ortoedro/Ortoedro.h"
using namespace std;

int main(){ 
  Ortoedro o(Coordenada(0, 0, 0), Coordenada(1, 1, 1));

  o.obtieneVertices();
  o.getArea();
  o.getVolumen();
  
	return 0;
}