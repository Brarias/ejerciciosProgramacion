/*
 ============================================================================
 Ingresar 5 caracteres e informar cuantas letras m (minúsculas) se ingresaron.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);


	char caracterIngresado;
	int contadorM = 0;

	for(int i = 0; i < 5; i++){
		printf("Ingrese un caracter: ");
		fflush(stdin);
		scanf("%c", &caracterIngresado);

		if(caracterIngresado == 'm'){
			contadorM++;
		}
	}

	printf("La cantidad de letras m ingresada es: %d", contadorM);








	return EXIT_SUCCESS;
}
