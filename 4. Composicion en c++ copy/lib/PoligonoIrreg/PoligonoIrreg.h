#include "../Coordenada/Coordenada.h" 
#include <vector>

#ifndef POLIGONOIRREG_H_
#define POLIGONOIRREG_H_

class PoligonoIrreg {
  private:
    Coordenada superiorIzq;
    Coordenada inferiorDer;
  public:
    PoligonoIrreg();
    PoligonoIrreg(Coordenada supIzq, Coordenada infDer);
    void imprimeEsq();
    Coordenada obtieneSupIzq();
    Coordenada obtieneInfDer();
    double obtieneArea();
};

#endif