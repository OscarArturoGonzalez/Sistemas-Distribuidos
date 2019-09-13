#include <iostream>
#include <unistd.h>
#include <thread>
using namespace std;

int valor;


void funcion(int valor) {
  printf("Hilo %ld con valor: %d \n", this_thread::get_id(), valor);
  sleep(2);
}

void add() {
  valor + 1;
  sleep(1);
}

void substract() {
  valor - 1;
  sleep(1);
}

int main() {
  
  thread th1(add), th2(substract);

  th1.join();
  th2.join();

  printf("Valor %d\n", valor);
  exit(0);
}