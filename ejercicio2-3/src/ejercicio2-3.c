/*
 ============================================================================
Ejercicio 2-3: Usando el concepto de operadores lógicos booleanos en el condicional.
Solicitar un número al usuario e informar si el número es par o impar.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	int numeroIngresado;
	int esPar = 0;

	printf("Ingrese un numero: ");
	scanf("%d", &numeroIngresado);

	if(numeroIngresado % 2 == 0){
		esPar = 1;
	}
	if(esPar){
		printf("El numero ingresado: %d es par", numeroIngresado);
	}else{
	printf("El numero ingresado: %d es impar", numeroIngresado);
	}


	return EXIT_SUCCESS;
}
