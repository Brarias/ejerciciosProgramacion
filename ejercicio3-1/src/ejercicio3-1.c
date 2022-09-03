/*
 ============================================================================
 Ejercicio 3-1: Crear una función que muestre por pantalla el número entero que
recibe como parámetro.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void mostrarNumero(int numero);

int main(void) {
	setbuf(stdout, NULL);
	int num = 50;
	mostrarNumero(num);



	return EXIT_SUCCESS;
}

void mostrarNumero(int numero){
	printf("El numero es: %d", numero);
}
