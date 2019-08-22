#ifndef COORDENADA_H_
#define COORDENADA_H_

class Coordenada{
  private:
    double r;
    double angulo;
  public:
    Coordenada(double = 0, double = 0);
    double obtenerX();
    double obtenerY();
};

#endif