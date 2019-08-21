#include "./../lib/Fecha/Fecha.h"
#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

void header(int exercise_number) {
		cout << "--------------------Ejercicio " << exercise_number << "-------------------------" << endl;
}

int main() {
	int resultado;
	Fecha f1, f2, f3(21,9,1973);
	f2.inicializaFecha(17,6,2000);
	f1.buffer = (char*) malloc (10000);
	f2.buffer = (char*) malloc (10000);
	f3.buffer = (char*) malloc (10000);
	int dates_generated = 10000000, o;

	for(int x=0; x <= dates_generated; x++){
		o = f1.masViejaReference(f2, f3);
	}
}