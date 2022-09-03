/*
 ============================================================================
Ejercicio 3-2: Crear una función que pida el ingreso de un flotante y lo retorne.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

float pedirFlotante();

int main(void) {
	setbuf(stdout, NULL);

	float sueldo;

	sueldo = pedirFlotante();

	printf("%f", sueldo);


	return EXIT_SUCCESS;
}
float pedirFlotante(){
	float flotante;

	printf("Ingrese un numero flotante: ");
	scanf("%f", &flotante);

	return flotante;
}
