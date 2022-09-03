/*
 ============================================================================
 Ejercicio 2-5:
Debemos generar el pedido de libretas universitarias a la imprenta para los alumnos
al regreso a la presencialidad. De cada persona debemos obtener los siguientes
datos:
número de legajo (4 cifras sin ceros a la derecha),
estado civil ('s' para soltero", 'c' para casado o 'v' viudo),
edad (más de 17),
año de ingreso (validar por favor)
y género ('f' para femenino, 'm' para masculino, 'o' para no binario).
NOTA: El precio por libreta universitaria es de $450.
Se debe informar (solo si corresponde):
a) La cantidad de personas mayores de 60 años.
b) El legajo y edad de la mujer que ingreso hace más tiempo.
c) Cuanto debe abonar la facultad por las libretas sin el descuento
d) Si se solicitan mas de 5 libretas hay un 5% de descuento, si se solicitan más de
10 libretas se hace 10%. Además, por cada alumno mayor de 60 años al valor original
de la libreta se le hace un 25%. Informar los valores si corresponde.
 ============================================================================
 */
#define LIBRETA 450
#define DESCUENTO_JUBILADO 25
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	char continuar = 's';

	char estadoCivil;
	int legajo;
	char genero;
	int edad;
	int anioIngreso;
	int contMayor60 = 0;
	int flagAnioIngreso = 0;
	int legajoMujer;
	int edadMujer;
	int anioMujer;
	float totalDescuento = 0;
	float total;
	float precioParcial;
	float parcialJubilados;
	int contadorPersonas = 0;
	int descuento;





	do{

		printf("Ingrese su numero de legajo- debe contener 4 cifras-: ");
		scanf("%d", &legajo);

		while(legajo < 1000 || legajo > 9999){
			printf("Error!!.Ingrese su numero de legajo- debe contener 4 cifras-: ");
			scanf("%d", &legajo);
		}

		printf("Ingrese su estado civil(s para soltero, c para casado o v viudo): " );
		fflush(stdin);
		scanf("%c", &estadoCivil);

		while(estadoCivil != 'c' && estadoCivil != 'v' && estadoCivil != 's'){
			printf("Error!! Verifique las opciones y reingrese su estado civil(s para soltero, c para casado o v viudo): ");
			fflush(stdin);
		    scanf("%c", &estadoCivil);
		}

		printf("Ingrese su edad: ");
		scanf("%d", &edad);

		while(edad < 18){
			printf("Debe ser mayor de 17 anios. Reingrese su edad: ");
			scanf("%d", &edad);
		}


		printf("Ingrese su genero('f' para femenino, 'm' para masculino, 'o' para no binario): ");
		fflush(stdin);
		scanf("%c", &genero);

		while(genero != 'f' && genero != 'm' && genero != 'o'){
					printf("Error!! Verifique las opciones y "
							"reingrese su genero('f' para femenino, 'm' para masculino, 'o' para no binario): ");
					fflush(stdin);
				    scanf("%c", &genero);
				}


		printf("Ingrese el anio de ingreso: ");
		scanf("%d", &anioIngreso);


		if(edad > 60){
			contMayor60++;
		}

		if(genero == 'f'){
			if(flagAnioIngreso == 0){
				anioMujer = anioIngreso;
				edadMujer = edad;
				legajoMujer = legajo;
				flagAnioIngreso = 1;
			}else if(anioIngreso < anioMujer){
				anioMujer = anioIngreso;
			    edadMujer = edad;
				legajoMujer = legajo;
			}
		}


		printf("Desea continuar?s/n: ");
		fflush(stdin);
		scanf("%c", &continuar);
		contadorPersonas++;
		system("cls");

	}while(continuar == 's');



	precioParcial = contadorPersonas * LIBRETA;
	parcialJubilados = (contMayor60 * LIBRETA) * DESCUENTO_JUBILADO / 100;

	if(contadorPersonas > 5 && contadorPersonas < 10){
		descuento = 5;
		totalDescuento = (float)precioParcial * descuento / 100;
	}else if(contadorPersonas > 10){
		descuento = 10;
		totalDescuento = (float)precioParcial * descuento / 100;
	}else{
		total = contadorPersonas * LIBRETA;
	}

	total = precioParcial - totalDescuento - parcialJubilados;




	printf("a-La cantidad de personas mayores de 60 anios son: %d\n", contMayor60);
	printf("b-La edad de la mujer que ingreso primero es: %d y su legajo es: %d\n", edadMujer, legajoMujer);
	printf("c-La facultad debe abonar sin descuento: $%.2f\n", precioParcial);
	printf("d-Con los descuentos debe pagar: $%.2f\n", total);

	return EXIT_SUCCESS;
}
