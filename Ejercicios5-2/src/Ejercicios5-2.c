/*
 ============================================================================
 Ejercicio 5-2: Hacer una función que calcule el promedio de los valores
 del Array que recibe y me devuelva el promedio.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define TAM 5

float promedioArray(int numeros[], int size);
int main(void) {
	setbuf(stdout, NULL);

	int vector[TAM] = {45, 32, 78,56, 90};
	float prom;
	prom = promedioArray(vector, TAM);
	printf("El promedio del array es: %.2f", prom);


	return EXIT_SUCCESS;
}

float promedioArray(int numeros[], int size)
{
	float promedio;
	int suma = 0;

	for(int i = 0; i < size; i++)
	{
		suma += numeros[i];
	}
	promedio = (float)suma / size;

	return promedio;
}
