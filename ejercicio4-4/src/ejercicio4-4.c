/*
 ============================================================================
 Ejercicios 4-4:
 A. Hacer el menú de un programa en el MAIN con las siguientes opciones:
 1. Loguearse
 2. Comprar
 3. Ver mis compras
 4. Vender
 5. Salir

 B. Al menú anterior chequear que no pueda ingresar a ninguna opción si no se logueó.

 C. Ahora agregamos, chequear que no pueda ver sus compras, si no ingresó primero a
 comprar al menos una vez.

 D. Cuando se ingresa a la opción vender del menú, debe abrirse otro menú que contenga:
 1. Vender
 2. Hacer factura
 3. Volver atrás.

 E. A lo anterior sumarle que haya compras para poder vender. (Si compré una vez y vendí
 una vez no puedo ingresar a vender).

 F. Pasar las acciones de menú a funciones y llevarlas a una biblioteca
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "menu.h"

int main(void) {
	setbuf(stdout, NULL);

	char salir = 'n';
	int flagA = 0;
	int contadorCompras = 0;

	do {

		switch(menu())
		{
			case 1:
			printf("\nIniciar Sesion");
			flagA = 1;
			break;
			case 2:
			if(flagA == 1) {
				printf("\nQue vas a comprar?");
				contadorCompras++;
			} else {
				printf("\nPrimero debes loguearte!!!");
			}
			break;

			case 3:
			if(flagA == 1 && contadorCompras > 0) {
				printf("\nAca estan tus compras:");
			}
			break;

			case 4:
			if(flagA == 1 && contadorCompras > 0) {
				switch(submenu()) {
					case 1:
					printf("\nque vas a vender?");
					break;
					case 2:
					printf("\nSeleccione factura a imprimir");
					break;
					case 3:
					printf("\nDesea volver al menu anterior?");
				}

				if(contadorCompras == 1){
					contadorCompras--;
				}
			} else {
				printf("\nPrimero debes loguearte y comprar al menos una vez!!!");
			}

		break;
		case 5:
		printf("\nDesea salir: s/n");
		fflush(stdin);
		scanf("%c", &salir);
		break;

	}
}while(salir == 'n');

return EXIT_SUCCESS;
}
