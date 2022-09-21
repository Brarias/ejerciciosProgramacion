#include "validacionTemperatura.h"

float convertidorFahrenheitACelsius(int temperaturaFahrenheit){
	float conversion = -1;
	int validacion;
	validacion =  validacionFahrenheit(temperaturaFahrenheit);

	if(validacion == 0){
	conversion = (float)(temperaturaFahrenheit -32) / 1.8;
	}

	return conversion;
}

float convertidorCelsiusAFahrenheit(int temperaturaCelsius){
	float conversion = -1;
    int validacion;
    validacion =  validacionCelsius(temperaturaCelsius);

	if(validacion == 0){

		//ºF = ºC x 1.8 + 32.
		conversion = (float)(temperaturaCelsius * 1.8) + 32;
	}

	return conversion;
}

