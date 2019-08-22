#include "./../lib/Rectangulo/Rectangulo.h"
#include "./../lib/Coordenada/Coordenada.h"
#include <iostream>
#include <cstdio>
#include <string>
using namespace std;


int main( ) {
  Rectangulo rectangulo1(Coordenada(3.61, 0.98), Coordenada(5.1, 0.20));
  double ancho, alto;

  cout << "Calculando el área de un rectángulo dadas sus coordenadas en un plano cartesiano:\n";
  rectangulo1.imprimeEsq();
  double area = rectangulo1.obtieneArea();
  cout << "El área del rectángulo es = " << area << endl;
  return 0;
} 