#ifndef TEMPERATURA_H_
#define TEMPERATURA_H_

class Temperatura {
	private: 
		float kelvin;
	public:
    Temperatura(float);
		void setTempKelvin(float);
    void setTempFahrenheit(float);
    void setTempCelsius(float);
    void getKelvin();
    void getFahrenheit();
    void getCelsius();
};

#endif