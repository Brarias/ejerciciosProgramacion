/*
 ============================================================================
 Ejercicio 1-1: Ingresar dos números enteros entre -50 y 100, sumarlos y mostrar el
resultado. Ejemplo: Si ingresamos 3 y 2 el programa mostrará: “La suma entre 3 y 2
da como resultado 5”
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	int primerNumero;
	int segundoNumero;
	int suma;

	printf("Ingrese el primer numero: ");
	scanf("%d", &primerNumero);

	printf("Ingrese el segundo numero: ");
	scanf("%d", &segundoNumero);

	if(primerNumero > -50 && primerNumero < 100 && segundoNumero > -50 && segundoNumero <100){
		suma = primerNumero + segundoNumero;
		printf("La suma es: %d", suma);
	}
	else{
		printf("No es posible realizar la suma");
	}





	return EXIT_SUCCESS;
}
