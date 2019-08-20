#include "Fecha.h"
#include <iostream>
#include <math.h>
using namespace std;

Fecha::Fecha(int dd, int mm, int aaaa)
{
	mes = mm;
	dia = dd;
	anio = aaaa;
}

void Fecha::inicializaFecha(int dd, int mm, int aaaa)
{
	anio = aaaa;
	mes = mm;
	dia = dd;
	return;
}

void Fecha::muestraFecha()
{
	cout << "La fecha es(dia-mes-anio): "<< dia << "-" << mes << "-" << anio << endl;
	return;
}

int Fecha::convierte(int dd, int mm, int aaaa)
{
	anio = aaaa;
	mes = mm;
	dia = dd;
	return anio*10000+mes*100+dia;
}

/* true if res 4 = 0 and 100!= 0, else false*/
bool Fecha::leapyr() {
  if((remainder (anio, 400) == 0) || (remainder (anio, 4) == 0 && remainder(anio, 100) != false )){
    return true;
  } else {
    return false;
  }
}