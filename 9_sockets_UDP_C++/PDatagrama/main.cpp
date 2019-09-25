#include "PaqueteDatagrama.h"
#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main()
{
   char data[5]="Hola";
   PaqueteDatagrama paquete(data, 5, "127.0.0.0", 7200);
  
   cout << paquete.obtieneDireccion() << endl;
   cout << paquete.obtieneLongitud() << endl;
   cout << paquete.obtienePuerto() << endl;
   cout << paquete.obtieneDatos() << endl;

   paquete.inicializaPuerto(5000);
   paquete.inicializaIP("192.168.0.1");
   paquete.inicializaDatos("aaaa");

   cout << paquete.obtieneDireccion() << endl;
   cout << paquete.obtieneLongitud() << endl;
   cout << paquete.obtienePuerto() << endl;
   cout << paquete.obtieneDatos() << endl;

   return 0;
}