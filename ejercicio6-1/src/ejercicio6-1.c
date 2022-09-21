/*
 ============================================================================
Ejercicio 6-1: Disponemos de dos variables numéricas (a y b). Realizar un algoritmo
que permita el intercambio de valores de dichas variables.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


int main(void) {
	setbuf(stdout, NULL);

	int a;
	int b;
	int aux;

	aux = a;
	a = b;
	b = aux;



	return EXIT_SUCCESS;
}
