/**********Ejercicio 5************/
#include <iostream>
#include <unistd.h>
#include <thread>
#include <atomic>
using namespace std;

//int global = 0;
atomic<int> global(0);
int n = 50000;
void funcion(atomic<int>& var){
	//cout<<"ID Hilo " << this_thread::get_id() << " Valor recibido: " << valor << endl;
	//printf("Hilo: %ld ",this_thread::get_id());
	for(int i = 0; i < n; i++){
		var++;
	}
	//printf("Valor recibido 1: %d\n", global );
	sleep(1);
}

void funcion2(atomic<int>& var){
	//cout<<"ID Hilo " << this_thread::get_id() << " Valor recibido: " << valor << endl;
	//printf("Hilo: %ld ",this_thread::get_id());
	for(int i = 0; i < n; i++){
		var--;
	}
	//printf("Valor recibido 2: %d\n", global );
	sleep(1);
}

int main(){
	atomic<int> var(0);
	//atomic<int> var2(10);
	thread th1(funcion, ref(var)), th2(funcion2, ref(var));
	cout << "Proceso principal espera que los hilos terminen\n";
	th1.join();
	//cout << "Variable local: " << var << endl;
	th2.join();
	cout << "El hilo principal termina\n";
	cout << "Variable local: " << var << endl;
	exit(0);
}