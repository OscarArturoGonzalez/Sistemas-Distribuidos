#include "./../lib/PoligonoIrreg/PoligonoIrreg.h"
#include "./../lib/Coordenada/Coordenada.h"
#include <iostream>
#include <cstdio>
#include <string>
using namespace std;


int main( ) {
  vector<Coordenada> vec;
  vec.push_back(Coordenada(0,0));
  vec.push_back(Coordenada(2,0));
  vec.push_back(Coordenada(4,0));
  PoligonoIrreg p(vec);

  
  p.imprimeVertice();
  
  
  return 0;
}  