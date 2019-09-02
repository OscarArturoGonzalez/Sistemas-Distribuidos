#include <iostream>
#include "../lib/Temperatura/Temperatura.h"

using namespace std;

void header(int exercise_number) {
		cout << "--------------------Ejercicio " << exercise_number << "-------------------------" << endl;
}

float squareRoot(float n) { 
  /*We are using n itself as initial approximation This can definitely be improved */
  float x = n; 
  float y = 1; 
  float e = 0.000001; /* e decides the accuracy level*/
  while (x - y > e) { 
      x = (x + y) / 2; 
      y = n / x; 
  } 
  return x; 
} 

void getHeight(float time) {
  float g = 9.80665;
  float height = ( g* time * time ) / 2;
  cout << "Height " << height << " m" << endl; 
}

void getTime(int seconds) {
  int hours = seconds / 3600;
  seconds -= hours * 3600;
  int minutes = seconds / 60;
  seconds -= minutes * 60;

  cout << "Horas " << hours << " Minutos " << minutes << " Segundos " << seconds << endl; 
}

int main(){

  int n = 81; 
  Temperatura t(200);
  t.getKelvin();
  t.getCelsius();
  t.getFahrenheit();

  
  // 1 cout << "Square root of " << n << " is " << squareRoot(n) << endl; 
  // 2 getHeight(9.8);
  // 3 getTime(50381);

	return 0;
}