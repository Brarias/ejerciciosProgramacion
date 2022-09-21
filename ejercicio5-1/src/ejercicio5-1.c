/*
 ============================================================================
 Ejercicio 5-1: Pedir 5 números enteros, guardarlos en un Array.
 Calcular la sumatorio de los mismos y mostrar los impares ingresados.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define TAM 5

void mostrarNumeros(int vector[], int size);
void listadoNumerosImpares(int numeros[], int size);

int main(void) {
	setbuf(stdout, NULL);
	int numeros[TAM];
	int sumatoria;

    sumatoria = 0;
	for(int i = 0; i < TAM; i++){
		printf("Ingrese un numero: ");
		scanf("%d", &numeros[i]);
		sumatoria += numeros[i];
	}
	printf("\nLa sumatoria de los numeros es: %d", sumatoria);
	printf("\nLos numeros impares son: ");
	listadoNumerosImpares(numeros, TAM);



	return EXIT_SUCCESS;
}

void mostrarNumeros(int vector[], int size)
{
	for(int i = 0; i < size; i++){
		printf("%d\n", vector[i]);
		}
}

void listadoNumerosImpares(int numeros[], int size)
{
    for(int i = 0; i < size; i++){
        if(!(numeros[i] %2== 0)){
		printf("\n Numero impar: %d", numeros[i]);
		}

    }
}
