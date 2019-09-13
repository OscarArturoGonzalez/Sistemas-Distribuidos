#include "../lib/Elemento/Elemento.h"
#include <iostream>
#include <stdlib.h>
#include <math.h>

Elemento::Elemento() : valor(0), isPrimo(false) { 

}

Elemento::Elemento(int xx, bool yy) : valor(xx), isPrimo(yy) { 

}

void Elemento::marcarComoPrimo(){
  isPrimo = true;
}

int Elemento::obtenerValor() {
  return valor;
}

bool Elemento::obtenerSiEsPrimo() {
  return isPrimo;
}
