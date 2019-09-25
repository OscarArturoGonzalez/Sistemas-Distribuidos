#include "PaqueteDatagrama.h"
#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

PaqueteDatagrama::PaqueteDatagrama(char *d, unsigned int l, char* ip1,int p ){

	longitud = l;
	puerto = p;
	datos = new char[longitud];
	memcpy(datos,d,l);
   	memcpy(ip,ip1,16);
}

PaqueteDatagrama::PaqueteDatagrama(unsigned int l){
	longitud = l;
	datos = new char[longitud];
}

PaqueteDatagrama::~PaqueteDatagrama(){

	delete[] datos;
}

char* PaqueteDatagrama::obtieneDireccion(){
   return ip;
}

unsigned int PaqueteDatagrama::obtieneLongitud(){
   return longitud;
}

int PaqueteDatagrama::obtienePuerto(){
   return puerto;
}

char* PaqueteDatagrama::obtieneDatos(){
   return datos;
}

void PaqueteDatagrama::inicializaPuerto(int p){
	puerto = p;
}

void PaqueteDatagrama::inicializaIP(char* ip1){
	memcpy(ip,ip1,16);
}

void PaqueteDatagrama::inicializaDatos(char* d){
	memcpy(datos,d,longitud);
}