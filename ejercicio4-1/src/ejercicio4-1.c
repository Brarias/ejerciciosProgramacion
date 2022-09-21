/*
 ============================================================================
 Ejercicio 4-1: Realizar un programa en el MAIN que permita calcular y mostrar
 el factorial de un número. Utilizar la función de PedirNumero de la ejercitación
 3. Por ejemplo:
5! = 5*4*3*2*1 = 120
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void mostrarNumero(int numero);
int pedirNumero(int numero);
int factorial(int numero);

int main(void) {
	setbuf(stdout, NULL);

	int num;
	int resultado;
	num = pedirNumero(num);
	resultado = factorial(num);
	mostrarNumero(resultado);


	return EXIT_SUCCESS;
}

void mostrarNumero(int numero)
{
	printf("El numero es: %d", numero);
}

int pedirNumero(int numero)
{
	printf("Ingrese un numero: ");
	scanf("%d", &numero);

	return numero;
}

int factorial(int numero){
	int multiplicacion = 1;

	for(int i = 1; i <= numero; i++){
		multiplicacion = multiplicacion * i;
	}

	return multiplicacion;
}
