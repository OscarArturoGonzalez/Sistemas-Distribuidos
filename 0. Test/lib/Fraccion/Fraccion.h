#ifndef FRACCION_H_
#define FRACCION_H_

class Fraccion {
	private: 
		int upper;
    int downer;
	public:
    Fraccion(int, int);
    void getDecimal();
    void reduceFraction();
};

#endif