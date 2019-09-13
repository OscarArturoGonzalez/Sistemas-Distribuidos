#ifndef COORDENADA_H_
#define COORDENADA_H_

class Coordenada{
  private:
    int x;
    int y;
    int z;
  public:
    Coordenada(int = 0, int = 0, int = 0);
    double obtenerX();
    double obtenerY();
    double obtenerZ();
};

#endif