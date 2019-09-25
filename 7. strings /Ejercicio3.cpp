#include <iostream>
#include <stdlib.h>
#include <string>
#include <time.h>
#include <vector>

using namespace std;

string genera_palabra();

int main()
{
	int cont = 0;
	string palabra, cadena, buscar("IPN");
	//vector<size_t> pos;
	srand(time(NULL));

	//cout << palabra;

	//cadena = genera_palabra();	

	for (int i = 0; i < 175760; i++)
	{
		palabra = genera_palabra();
		//cadena = cadena + " " + palabra;
		cadena.append(" ");
		cadena.append(palabra);	
	}

	// cadena = cadena + " " + "IPN";
	// cadena = cadena + " " + "IPN";

	// for (int i = 0; i < 10; i++)
	// {
	// 	palabra = genera_palabra();
	// 	cadena = cadena + " " + palabra;	
	// }

	// cadena = cadena + " " + "IPN";
	// cadena = cadena + " " + "IPN";

	cout << cadena << endl;

	size_t posicion = cadena.find(buscar); //primera posicion::Puede buscar en todo

	while(posicion != string::npos) //si encontro algo
	{
 		cont++;
		posicion = cadena.find(buscar, posicion + buscar.size());
	}

	cout << "La cadena " << buscar << " se encontró " << cont << " veces" << endl;
	// if(posicion!=string::npos)
	// 	cout << "Cadena encontrada en: " << posicion << endl;
	// Posicion
	//pos.push_back(posicion);
	// for (int i = 0; i < pos.size(); i++)
	// {
	// 	cout << pos[i] << endl;
	// }

	return 0;
}


string genera_palabra(){
	int x;
	string palabra;

	for (int i = 0; i < 3; ++i)
	{
		x = 65 + static_cast <float> (rand()) /( static_cast <float> (RAND_MAX/(90-65)));
		palabra = palabra + char(x);
	}
	return palabra;
}

