#include <iostream>
#include <stdlib.h>
#include <string>
#include <time.h>
#include <vector>
#include <math.h>

using namespace std;

string genera_palabra();

int main()
{
	double seno, coseno, tangente, logaritmo, raizCuad;
	int cont = 0;
	//vector<size_t> pos;
	//srand(time(NULL));
	double i = 0;

	//cout << palabra;

	//cadena = genera_palabra();	

	while(i < 10000000){
		seno+=sin(i);
		coseno+=cos(i);
		tangente+=tan(i);
		logaritmo+=log(i);
		raizCuad+=sqrt(i);
		i++;
	}
}
