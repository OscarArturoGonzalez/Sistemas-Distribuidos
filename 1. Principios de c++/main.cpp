#include <iostream>

using namespace std;


void header(int exercise_number) {
		cout << "--------------------Ejercicio " << exercise_number << "-------------------------" << endl;
}

float divide_int(int a, float b) {
  printf ("Resultado: %f\n", (float)a/(float)b);
  return 0;
}


float divide_float(int a, float b) {
  printf ("Resultado: %f\n", a/b);
  return 0;
}


void exercise0(){
	int numeroDeLenguajes;

	header(0);

	cout << "!!!Hola!!!\n" << "Bienvenido a C++.\n" << endl;
	cout << "Cuantos lenguajes de programación dominas?" << endl;
	cin >> numeroDeLenguajes;

	if(numeroDeLenguajes < 1)
		cout << "Sería recomendable aprender antes un lenguaje más sencillo ...\n" << "por ejemplo C, aunque nada es imposible.\n" << endl;
	else
		cout << "Este curso será sencillo para ti.\n" << endl;
}

void exercise1(){
	const double PI = 3.1415926;
	float radio, area;
	header(1);

	cout<<"Radio del circulo:\n";
	cin>> radio;
	area= PI*radio*radio;
	cout<< "El area del circulo es: "<< area << endl;

}

void exercise2(){
	int a = 13;
  float b = 6;

	header(2);
  divide_int(a, b);
  divide_float(a, b);
}

void exercise3(){
	double c = 20;
	double f;
	
	header(3);
	//f = (9/5) * c + 32.0;
	f = (9*c/5) + 32.0;

	cout << "Conversión de temperatura\n";
	cout << f << endl;
}

void exercise4(){
	double c = 20;
	double f;

	header(4);

	f = (static_cast<double>(9)/static_cast<double>(5)) * c + 32.0;
	//f = (9*c/5) + 32.0;

	cout << "Conversión de temperatura\n";
	//cin >> f;
	cout << f << endl;
}

void exercise6(){
	double precio=78.7;

	header(6);
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	cout<<precio<<endl;
}

int main(){

	exercise0();
	exercise1();
	exercise2();
	exercise3();
	exercise4();
	exercise6();

	return 0;
}