#include <iostream>
#include <unistd.h>
#include <thread>
#include <atomic>
using namespace std;

atomic<int> global (0);
int n = 50000;
void funcion(int valor){
	//cout<<"ID Hilo " << this_thread::get_id() << " Valor recibido: " << valor << endl;
	//printf("Hilo: %ld ",this_thread::get_id());
	for(int i = 0; i < n; i++){
		global++;
	}
	//printf("Valor recibido 1: %d\n", global );
	sleep(1);
}

void funcion2(int valor){
	//cout<<"ID Hilo " << this_thread::get_id() << " Valor recibido: " << valor << endl;
	//printf("Hilo: %ld ",this_thread::get_id());
	for(int i = 0; i < n; i++){
		global--;
	}
	//printf("Valor recibido 2: %d\n", global );
	sleep(1);
}

int main(){
	thread th1(funcion, 5), th2(funcion2, 10);
	cout << "Proceso principal espera que los hilos terminen\n";
	th1.join();
	
	th2.join();
	cout << "El hilo principal termina\n";
	cout << "Variable global: " << global << endl;
	exit(0);
}