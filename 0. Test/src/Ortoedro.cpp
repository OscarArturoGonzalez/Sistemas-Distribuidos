#include "../lib/Ortoedro/Ortoedro.h"
#include "../lib/Rectangulo/Rectangulo.h"
#include "../lib/Coordenada/Coordenada.h"
#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;


Ortoedro::Ortoedro(Coordenada o, Coordenada d){ 
  a = Rectangulo(o, Coordenada(d.obtenerX(), o.obtenerY(), d.obtenerZ()));
  b = Rectangulo(Coordenada(d.obtenerX(), o.obtenerY(), o.obtenerZ()), d);
  c = Rectangulo(Coordenada(o.obtenerX(), d.obtenerY(), o.obtenerZ()) ,d);
  aa = Rectangulo(o, Coordenada(o.obtenerX(), d.obtenerY(), d.obtenerZ()));
  bb = Rectangulo(Coordenada(o.obtenerX(), o.obtenerY(), d.obtenerZ()), d);
  cc = Rectangulo(o, Coordenada(d.obtenerX(), d.obtenerY(), o.obtenerZ()));
  origen = o;
  destino = d;
}

void Ortoedro::obtieneVertices(){
  cout << "Para el rectangulo a.\n";
  cout << "Para la esquina superior izquierda.\n";
  cout << "x = " << a.obtieneSupIzq().obtenerX() << " y = " << a.obtieneSupIzq().obtenerY() << " z = " << a.obtieneSupIzq().obtenerZ() << endl;
  cout << "Para la esquina inferior derecha.\n";
  cout << "x = " << a.obtieneInfDer().obtenerX() << " y = " << a.obtieneInfDer().obtenerY() << " z = " << a.obtieneInfDer().obtenerZ() << endl;

  cout << "Para el rectangulo b.\n";
  cout << "Para la esquina superior izquierda.\n";
  cout << "x = " << b.obtieneSupIzq().obtenerX() << " y = " << b.obtieneSupIzq().obtenerY() << " z = " << b.obtieneSupIzq().obtenerZ() << endl;
  cout << "Para la esquina inferior derecha.\n";
  cout << "x = " << b.obtieneInfDer().obtenerX() << " y = " << b.obtieneInfDer().obtenerY() << " z = " << b.obtieneInfDer().obtenerZ() << endl;

   
  cout << "Para el rectangulo c.\n";
  cout << "Para la esquina superior izquierda.\n";
  cout << "x = " << c.obtieneSupIzq().obtenerX() << " y = " << c.obtieneSupIzq().obtenerY() << " z = " << c.obtieneSupIzq().obtenerZ() << endl;
  cout << "Para la esquina inferior derecha.\n";
  cout << "x = " << c.obtieneInfDer().obtenerX() << " y = " << c.obtieneInfDer().obtenerY() << " z = " << c.obtieneInfDer().obtenerZ() << endl;

  cout << "Para el rectangulo aa.\n";
  cout << "Para la esquina superior izquierda.\n";
  cout << "x = " << aa.obtieneSupIzq().obtenerX() << " y = " << aa.obtieneSupIzq().obtenerY() << " z = " << aa.obtieneSupIzq().obtenerZ() << endl;
  cout << "Para la esquina inferior derecha.\n";
  cout << "x = " << aa.obtieneInfDer().obtenerX() << " y = " << aa.obtieneInfDer().obtenerY() << " z = " << aa.obtieneInfDer().obtenerZ() << endl;

  cout << "Para el rectangulo bb.\n";
  cout << "Para la esquina superior izquierda.\n";
  cout << "x = " << bb.obtieneSupIzq().obtenerX() << " y = " << bb.obtieneSupIzq().obtenerY() << " z = " << bb.obtieneSupIzq().obtenerZ() << endl;
  cout << "Para la esquina inferior derecha.\n";
  cout << "x = " << bb.obtieneInfDer().obtenerX() << " y = " << bb.obtieneInfDer().obtenerY() << " z = " << bb.obtieneInfDer().obtenerZ() << endl;

  cout << "Para el rectangulo cc.\n";
  cout << "Para la esquina superior izquierda.\n";
  cout << "x = " << cc.obtieneSupIzq().obtenerX() << " y = " << cc.obtieneSupIzq().obtenerY() << " z = " << cc.obtieneSupIzq().obtenerZ() << endl;
  cout << "Para la esquina inferior derecha.\n";
  cout << "x = " << cc.obtieneInfDer().obtenerX() << " y = " << cc.obtieneInfDer().obtenerY() << " z = " << cc.obtieneInfDer().obtenerZ() << endl;
}

void Ortoedro::getArea(){
  int a = destino.obtenerX() - origen.obtenerX();
  int b = destino.obtenerY() - origen.obtenerY();
  int c = destino.obtenerZ() - origen.obtenerZ();

  cout << "Área: " << 2 * ((a * b) + (a * c) + (b * c)) << endl;
}

void Ortoedro::getVolumen(){
  int a = destino.obtenerX() - origen.obtenerX();
  int b = destino.obtenerY() - origen.obtenerY();
  int c = destino.obtenerZ() - origen.obtenerZ();

  cout << "Volumen: " << a * b * c << endl;
}