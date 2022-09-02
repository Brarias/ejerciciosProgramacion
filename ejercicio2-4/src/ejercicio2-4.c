/*
 ============================================================================
 Ejercicio 2-4:
 Ingresar 8 números enteros, distintos de cero. Mostrar:
 a. El menor número ingresado.
 b. De los pares el mayor número ingresado.
 c. Producto de los negativos.
 d. En qué lugar fue ingresado el mayor numero
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	int numeroIngresado;
	int mayorPar = 0;
	int flagPar = 0;
	int productoNegativos = 0;
	int flagNegativos = 0;
	int lugarMayor;
	int menor = 0;
	int flag = 0;
	int mayor = 0;

	for (int i = 0; i < 8; i++) {
		printf("Ingrese un numero: ");
		scanf("%d", &numeroIngresado);

		while (numeroIngresado == 0) {
			printf("El numero debe ser distinto de cero!!\n");
			printf("Ingrese un numero: ");
			scanf("%d", &numeroIngresado);
		}

		if (flag == 0) {
			menor = numeroIngresado;
			mayor = numeroIngresado;
			lugarMayor = i + 1;
			flag = 1;
		} else {
			if (numeroIngresado > mayor) {
				mayor = numeroIngresado;
				lugarMayor = i + 1;
			}
			if (numeroIngresado < menor) {
				menor = numeroIngresado;
			}
		}

		if (numeroIngresado % 2 == 0) {
			if (flagPar == 0) {
				mayorPar = numeroIngresado;
				flagPar = 1;
			}else{
				if(numeroIngresado > mayorPar){
					mayorPar = numeroIngresado;
				}

			}
		}

		if(numeroIngresado < 0){
			if(flagNegativos == 0){
				productoNegativos = numeroIngresado;
				flagNegativos = 1;
			}else{
					productoNegativos = productoNegativos * numeroIngresado;
			}
		}
	}
	printf("El menor numero es: %d\n", menor);
	printf("El mayor numero par es: %d\n", mayorPar);
	printf("El producto de los negativos es: %d\n", productoNegativos);
	printf("El mayor numero fue ingresado en la posicion numero: %d\n",
			lugarMayor);

	return EXIT_SUCCESS;
}
