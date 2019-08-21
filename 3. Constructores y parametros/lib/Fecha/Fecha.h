#ifndef FECHA_H_
#define FECHA_H_

class Fecha
{
	private: 
		int dia;
		int mes;
		int anio;
		long x;
		long x1;
		long x2;
		long x3;
		long x4;
	public:
		char * buffer;
		Fecha(int = 3, int = 4, int =2014);
		void inicializaFecha(int, int, int);
		void muestraFecha();
		int convierte(int, int, int);
		bool leapyr();
		int masVieja(Fecha fecha1, Fecha fecha2);
		int masViejaReference(Fecha &fecha1, Fecha &fecha2);
		int masViejaReferenceC(Fecha *fecha1, Fecha *fecha2);
};

#endif
