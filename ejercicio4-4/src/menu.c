#include <stdio.h>
#include <stdlib.h>
#include "menu.h"


int menu(void) {
int opcion;
printf("\nSeleccione una opcion: \n");
printf("1) Loguearse\n");
printf("2) Comprar\n");
printf("3) Ver mis compras\n");
printf("4) Vender\n");
printf("5) Salir\n");
scanf("%d", &opcion);

return opcion;
}

int submenu(void) {
int opcionSubmenu;

printf("\nSeleccione una opcion: \n");
printf("1) Vender\n");
printf("2) Hacer factura\n");
printf("3) Volver atrás\n");
scanf("%d", &opcionSubmenu);

return opcionSubmenu;
}



