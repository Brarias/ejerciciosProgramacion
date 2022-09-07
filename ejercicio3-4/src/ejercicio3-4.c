/*
 ============================================================================
Ejercicio 3-4: Especializar la función del punto 3.1 y 3.2 para que valide el número en
un rango determinado.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void mostrarNumeroEnRango(int numero);
float pedirFlotanteRango();

int main(void) {
	setbuf(stdout, NULL);


	int num = 34;
	float sueldo;


	mostrarNumeroEnRango(num);
	sueldo = pedirFlotanteRango();

	printf("\n%.2f", sueldo);




	return EXIT_SUCCESS;
}

void mostrarNumeroEnRango(int numero){

	if(numero > 0 && numero < 101){
		printf("%d\n", numero);
	}
}

float pedirFlotanteRango(){
	float flotante;

	printf("Ingrese un numero flotante entre 0 y 100: ");
	scanf("%f", &flotante);

	while(!(flotante > 0 && flotante < 101)){
		printf("Error!!!Ingrese un numero flotante entre 0 y 100: ");
		scanf("%f", &flotante);
	}

	return flotante;
}
