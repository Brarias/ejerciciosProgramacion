/*
 ============================================================================
 Ejercicio 2-1: Ingresar 7 números negativos distintos de 0 calcular y mostrar el
promedio de los números. Probar la aplicación con distintos valores.
Ejemplo 1: (-7)( - 5)( - 12) (- 1)( - 2)
Ejemplo 2: (-9)( - 15)( - 12) (- 1)( - 21)
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	int numeroIngresado;
	int suma = 0;
	float promedio;

	for(int i = 0; i < 7; i++){
		printf("Ingrese un numero: ");
		scanf("%d", &numeroIngresado);

		if(!(numeroIngresado != 0 && numeroIngresado < 0)){
			printf("No se puede ingresar ese numero");
		}
		suma = suma + numeroIngresado;


	}

	promedio = (float) suma / 7;
	printf("El promedio es: %.2f", promedio);



	return EXIT_SUCCESS;
}
