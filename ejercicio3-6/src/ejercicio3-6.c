/*
 ============================================================================
Ejercicio 3-6: Realizar un programa que: asigne a la variable numero1 un valor
solicitado al usuario, valide el mismo entre 10 y 100, realice un descuento del 5% a
dicho valor a través de una función llamada realizarDescuento(). Mostrar el resultado
por pantalla.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int pedirNumero();
int validarNumero(int numero, int minimo, int maximo);
float realizarDescuento(int numero);

int main(void) {
	setbuf(stdout, NULL);

	int numero;
	float numeroDescontado;

	numero = pedirNumero();
	numeroDescontado =realizarDescuento(numero);
	printf("%.2f", numeroDescontado);



	return EXIT_SUCCESS;
}

int pedirNumero(){
	int numero;
	int validacion;

	printf("Ingrese un numero entre 10 y 100: ");
	scanf("%d", &numero);
	fflush(stdin);

	validacion = validarNumero(numero, 10, 100);

	while(validacion == -1){
		printf("Error!!! Ingrese un numero entre 10 y 100: ");
		scanf("%d", &numero);
		validacion = validarNumero(numero, 10, 100);
	}


	return numero;
}

int validarNumero(int numero, int minimo, int maximo){
	int retorno = -1;

	if(numero >= minimo && numero <= maximo){
		retorno = 1;
	}

	return retorno;
}

float realizarDescuento(int numero){
	int descuento = 5;
	float numeroConDescuento;

	numeroConDescuento = numero - (float)(numero * descuento) / 100;



	return numeroConDescuento;
}
