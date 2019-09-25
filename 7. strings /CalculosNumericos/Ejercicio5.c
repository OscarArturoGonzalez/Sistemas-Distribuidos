#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//using namespace std;

//string genera_palabra();
int main()
{
	double seno = 0, coseno = 0, tangente = 0, logaritmo = 0, raizCuad = 0;
	//int cont = 0;
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
	return 0;
}
