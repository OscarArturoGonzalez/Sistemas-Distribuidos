#include "../lib/Fraccion/Fraccion.h"
#include <iostream>
using namespace std;

Fraccion::Fraccion(int u, int d) {
	upper = u;
  downer = d;
}


void Fraccion::getDecimal(){
  cout << "decimal: " << (double) upper / (double) downer << endl;
}

void Fraccion::reduceFraction() 
{ 
    int d; 
    d = __gcd(upper, downer); 
  
    int newUpper = upper / d; 
    int newDowner = downer / d; 
  
    cout << "fraccion reducida: "  << newUpper << " / " << newDowner << endl; 
} 