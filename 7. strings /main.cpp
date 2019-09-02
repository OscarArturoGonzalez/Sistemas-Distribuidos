#include <iostream>

using namespace std;

int main(){

	string line;
	cout << "Something: " << endl;
	getline(cin, line);
	cout << line << endl;

	string cadena("ESCOM");
	cout << cadena.at(6) << endl;

char aCString[10];
strcpy(aCString, cadena.c_str()); 
cout << aCString << endl;

	return 0;
}