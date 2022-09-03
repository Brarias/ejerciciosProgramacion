/*
 ============================================================================
Ejercicio 3-3: Crear una función que permita determinar si un número es par o no. La
función retorna 1 en caso afirmativo y 0 en caso contrario. Probar en el main.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int esPar(int numero);

int main(void) {
	setbuf(stdout, NULL);

	int num;

	printf("Ingrese un numero: ");
	scanf("%d", &num);

	if(esPar(num) == 1){
		printf("Es par");
	}else{
		printf("Es impar");
	}



	return EXIT_SUCCESS;
}

int esPar(int numero){
	int retorno = 0;

	if(numero %2 == 0){
		retorno = 1;
	}

	return retorno;
}
