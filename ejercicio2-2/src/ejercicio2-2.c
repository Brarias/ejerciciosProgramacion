/*
 ============================================================================
Ejercicio 2-2: Ingresar números enteros, hasta que el usuario pida. Mostrar:
a) El promedio de los positivos y su mínimo.
b) El promedio de los negativos y su máximo.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	char continuar = 's';
	int numeroIngresado;
	int contadorPositivos = 0;
	int contadorNegativos = 0;
	int minimoPositivos = 0;
	int flagPositivos = 0;
	int maximoNegativos = 0;
	int flagNegativos = 0;
	int sumaNegativos = 0;
	int sumaPositivos = 0;
	float promedioNegativos;
	float promedioPositivos;

	do{
		printf("Ingrese un numero: ");
		scanf("%d", &numeroIngresado);
		if(numeroIngresado > 0){
			contadorPositivos++;
			sumaPositivos = sumaPositivos + numeroIngresado;
			if(flagPositivos == 0){
				minimoPositivos = numeroIngresado;
				flagPositivos = 1;
			}else if(minimoPositivos > numeroIngresado){
				minimoPositivos = numeroIngresado;

			}

		}else{
			contadorNegativos++;
			sumaNegativos = sumaNegativos + numeroIngresado;
			if(flagNegativos == 0){
				maximoNegativos = numeroIngresado;
				flagNegativos = 1;
			}else if(maximoNegativos < numeroIngresado){
				maximoNegativos = numeroIngresado;
			}

		}

		printf("Desea continuar) s/n ");
		fflush(stdin);
		scanf("%c", &continuar);
	}while(continuar == 's');

	promedioPositivos = (float)sumaPositivos / contadorPositivos;
	promedioNegativos = (float)sumaNegativos / contadorNegativos;

	printf("El promedio de los positivos es: %.2f y el minimo de los positivos es: %d\n", promedioPositivos, minimoPositivos);
	printf("El promedio de los negativos es: %.2f y el maximo de los negativos es: %d\n", promedioNegativos, maximoNegativos);


	return EXIT_SUCCESS;
}
