#include "../lib/Temperatura/Temperatura.h"
#include <iostream>
using namespace std;

Temperatura::Temperatura(float k) {
	kelvin = k;
}

void Temperatura::setTempKelvin(float k){
  kelvin = k;
}

void Temperatura::setTempFahrenheit(float f){
  kelvin = (f - 32) * (0.5555) + 273.15;
}

void Temperatura::setTempCelsius(float c){
  kelvin = c + 273.15;
}

void Temperatura::getKelvin(){
  cout << "Temperatura en kelvin: " << kelvin << endl;
}

void Temperatura::getFahrenheit(){
  cout << "Temperatura en fahrenheit: " << (kelvin - 273.15) * (1.8)  + 32 << endl;
}

void Temperatura::getCelsius(){
  cout << "Temperatura en celsius: " << kelvin - 273.5 << endl;
}