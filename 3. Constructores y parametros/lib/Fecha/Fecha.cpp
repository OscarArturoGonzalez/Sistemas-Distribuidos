#include "Fecha.h"
#include <iostream>
#include <stdlib.h>
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

int create_date_integer(Fecha f){
	int day = rand() % 31 + 1;
	int month = rand() % 12 + 1;
	int year = rand() % 2019;
	return f.convierte(day, month, year);
}

int create_date_integerReference(Fecha &f){
	int day = rand() % 31 + 1;
	int month = rand() % 12 + 1;
	int year = rand() % 2019;
	return f.convierte(day, month, year);
}

int create_date_integerReferenceC(Fecha *f){
	int day = rand() % 31 + 1;
	int month = rand() % 12 + 1;
	int year = rand() % 2019;
	return f->convierte(day, month, year);
}




int Fecha::masVieja(Fecha fecha1, Fecha fecha2) {

	int a = create_date_integer(fecha1);
	int b = create_date_integer(fecha2);

	if(a > b){
		return 1;
	} else if (a == b){
		return 0;
	} else if (a < b) {
		return -1;
	} 
}

int Fecha::masViejaReference(Fecha &fecha1, Fecha &fecha2) {

	int a = create_date_integerReference(fecha1);
	int b = create_date_integerReference(fecha2);

	if(a > b){
		return 1;
	} else if (a == b){
		return 0;
	} else if (a < b) {
		return -1;
	} 

}

int Fecha::masViejaReferenceC(Fecha *fecha1, Fecha *fecha2) {

	int a = create_date_integerReferenceC(fecha1);
	int b = create_date_integerReferenceC(fecha2);

	if(a > b){
		return 1;
	} else if (a == b){
		return 0;
	} else if (a < b) {
		return -1;
	} 

}
