#include "../Coordenada/Coordenada.h"
#include "../Linea/Linea.h" 

#ifndef ORTOEDRO_H_
#define ORTOEDRO_H_

class Ortoedro {
  private:
    Linea a;
    Linea b;
    Linea c;
  public:
    Ortoedro(Coordenada origenOrtoedro, Coordenada destinoOrtoedro);
    void obtieneVertices();
};

#endif