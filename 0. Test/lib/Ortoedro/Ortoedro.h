#include "../Coordenada/Coordenada.h"
#include "../Rectangulo/Rectangulo.h" 

#ifndef ORTOEDRO_H_
#define ORTOEDRO_H_

class Ortoedro {
  private:
    Rectangulo a;
    Rectangulo b;
    Rectangulo c;
    Rectangulo aa;
    Rectangulo bb;
    Rectangulo cc;
    Coordenada origen;
    Coordenada destino;

  public:
    Ortoedro(Coordenada origenOrtoedro, Coordenada destinoOrtoedro);
    void obtieneVertices();
    void getArea();
    void getVolumen();
};

#endif