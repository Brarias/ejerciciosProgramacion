/*
 ============================================================================
Ejercicio 6-2: Realizar un programa que permita el ingreso de 10 números enteros
(positivos y negativos). Necesito generar un listado de los números positivos de
manera creciente y negativos de manera decreciente. (Como máximo 5 estructuras
repetitivas)
[Listado 1: 4, 5, 6, 10, 18, 29]
[Listado 2 : -1,-5,-9,-12]
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define TAM 10

void ordenamientoPositivos(int numeros[], int size);
void ordenamientoNegativos(int numeros[], int size);
void listadoNumerosIngresados(int numeros[], int size);

int main(void) {
	setbuf(stdout, NULL);

	int listado[TAM] = {4, -1, 5, -5, 6, -9, 10, -12, 18, 29};
	ordenamientoPositivos(listado, TAM);
	ordenamientoNegativos(listado, TAM);
	listadoNumerosIngresados(listado, TAM);



	return EXIT_SUCCESS;
}

void ordenamientoPositivos(int numeros[], int size)
{
	int aux;
	for(int i = 0; i < size -1; i++){
		for(int j = i +1; j < size; j++){
			if(numeros[i] >= 0 && numeros[i] > numeros[j]){

				aux = numeros[i];
				numeros[i] = numeros[j];
				numeros[j] = aux;
			}
		}
	}
}

void ordenamientoNegativos(int numeros[], int size)
{
	int aux;
	for(int i = 0; i < size -1; i++){
		for(int j = i +1; j < size; j++){
			if(numeros[i] <= 0 && numeros[i] < numeros[j]){

				aux = numeros[i];
				numeros[i] = numeros[j];
				numeros[j] = aux;
			}
		}
	}
}

void listadoNumerosIngresados(int numeros[], int size)
{
    for(int i = 0; i < size; i++){
		printf("\nIndice: %d valor: %d", i, numeros[i]);
		}
}
