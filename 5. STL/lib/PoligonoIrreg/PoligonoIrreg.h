#include "../Coordenada/Coordenada.h" 
#include <vector>

using namespace std;

#ifndef POLIGONOIRREG_H_
#define POLIGONOIRREG_H_

class PoligonoIrreg {
  private:
    vector<Coordenada> coords;
  public:
    PoligonoIrreg();
    PoligonoIrreg(vector<Coordenada> coordenadas);    
    void imprimeVertice();
    void anadeVertice();
    double obtenX(Coordenada c);
    double obtenY(Coordenada c);
    
};

#endif