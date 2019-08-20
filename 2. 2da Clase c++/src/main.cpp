#include "./../lib/Fecha/Fecha.h"
#include <iostream>
using namespace std;

void header(int exercise_number) {
		cout << "--------------------Ejercicio " << exercise_number << "-------------------------" << endl;
}

int main()
{
	int resultado;
	Fecha a, b, c(21,9,1973);
	b.inicializaFecha(17,6,2000);
	a.muestraFecha();
	b.muestraFecha();
	c.muestraFecha();
	resultado = c.convierte(1,4,2014);

	header(1);
	cout << "main.cpp:20:12: error: 'dia' is a private member of 'Fecha'" << endl;
	header(2);
	cout << "Creacion del archivo Fecha.h con la definicion, Fecha.cpp con las funciones" << endl;
	cout << "y el código principal en main.cpp" << endl;
	header(3);
	cout << "Resultado: " << resultado<<endl;
	header(4);

	if(c.leapyr()) {
    cout << "bisiesto " << endl;
  } else {
    cout << "no bisiesto" << endl;
  }

}