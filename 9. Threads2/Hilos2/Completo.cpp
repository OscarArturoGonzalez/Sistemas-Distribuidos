#include <iostream>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <cstring>
#include <thread>
#include <math.h>


using namespace std;

#define numeroElementos 100000000

char buffer[BUFSIZ];

void funcionDD(){ 
	printf("Hilo DD\n");
	sleep(1);
}

void funcionDD2(){ 
	printf("Hilo DD 2 Distinto archivo\n");
	sleep(1);
}


void funcionCPU(){ 
	printf("Hilo CPU\n");
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
	sleep(1);
}

void funcionRAM(){ 
	printf("Ejercicio RAM\n");
	int *arreglo, i;

	arreglo = new int[numeroElementos];

	for (i = 0; i < numeroElementos; i++)
	{
		arreglo[i] = 0;
	}

	for (i = 0; i < 100000000; i++)
	{
		arreglo[rand()%numeroElementos] = rand();
	}
	sleep(1);
}


int main(int argc, char *argv[])
{
	thread th1(funcionRAM), th2(funcionCPU); //th3(funcionRAM); 
	cout << "Proceso principal espera que los hilos terminen\n";
	th1.join();
	th2.join();
	//th3.join();
	
	cout << "El hilo principal termina\n";
	exit(0);

	
}