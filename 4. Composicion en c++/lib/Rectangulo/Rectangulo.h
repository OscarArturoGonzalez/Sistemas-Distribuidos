#include "../Coordenada/Coordenada.h" 

#ifndef RECTANGULO_H_
#define RECTANGULO_H_

class Rectangulo {
  private:
    Coordenada superiorIzq;
    Coordenada inferiorDer;
  public:
    Rectangulo();
    Rectangulo(Coordenada supIzq, Coordenada infDer);
    void imprimeEsq();
    Coordenada obtieneSupIzq();
    Coordenada obtieneInfDer();
};

#endif