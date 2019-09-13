#include "../lib/Elemento/Elemento.h"
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void mostrar_criba(vector<Elemento> criba) {
  cout << endl;

  for (int i = 0; i < criba.size(); i++) {
    if(!criba[i].obtenerSiEsPrimo()){
      cout << criba[i].obtenerValor() << "\t";
    } else{

    }
  }

  cout << endl;
}

vector<Elemento> criba_eratostenes(int n) {
    
    vector<Elemento> criba;
    Elemento current_primo = Elemento();  // numero primo que iremos tomando del vector
    Elemento aux = Elemento();  // numero primo que iremos tomando del vector


    // vector con numeros desde 2 hasta n
    for (int i = 2; i <= n; i++) {
      criba.push_back(Elemento(i, false));
    }

    if (n == 2 || n == 3) 
        return criba;

    // iterador para el vector criba
    vector<Elemento>::iterator it = criba.begin();

    current_primo = *it;  // El primer primo es el 2

    do
    {
        vector<Elemento>::iterator it2 = it + 1;

        for(; it2 <= criba.end(); it2++){
          aux = *it2;
          if(aux.obtenerValor() % current_primo.obtenerValor() == 0) {
            aux.marcarComoPrimo();
            *it2 = aux;
            //criba.erase(it2);
          }
        }

        it++;
        current_primo = *it;

    } while (pow(current_primo.obtenerValor(), 2) < n);


    return criba;
}

int main() {
    int n;      // Limite de criba
    vector<Elemento> num_primos;
    
    cout << "Numero limite de numeros: ";
    cin >> n;

    num_primos = criba_eratostenes(n);

    mostrar_criba(num_primos);

    return 0;
}