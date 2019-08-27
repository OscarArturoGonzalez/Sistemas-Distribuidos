#include "./../lib/Rectangulo/Rectangulo.h"
#include "./../lib/Coordenada/Coordenada.h"
#include <iostream>
#include <cstdio>
#include <string>
using namespace std;


int main( ) {
  Rectangulo rectangulo1(Coordenada(2, 3), Coordenada(5, 1));
  double ancho, alto;

  cout << "Calculando el área de un rectángulo dadas sus coordenadas en un plano cartesiano:\n";
  rectangulo1.imprimeEsq();
  int area = rectangulo1.obtieneArea();
  cout << "El área del rectángulo es = " << area << endl;
  return 0;
} 