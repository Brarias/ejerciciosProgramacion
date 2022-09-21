/*
 ============================================================================
Ejercicio 5-5: Pedir 10 números enteros distintos de cero entre -50 y 75. La carga
deberá ser aleatoria (todos los elementos se inicializan en cero por default).
Determinar el promedio de los positivos. Desde el mayor de los negativos los
números negativos hasta llegar a cero.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define TAM 5

void CargarListadoNumerosAleatoria(int numeros[], int size);
void listadoNumerosIngresados(int numeros[], int size);
int ObtenerNumero(char* mensaje, int minimo, int maximo);
float promedioPositivos(int numeros[], int size);

int main(void) {
	setbuf(stdout, NULL);

	int numeros[TAM];
	float prom;

	CargarListadoNumerosAleatoria(numeros, TAM);
	listadoNumerosIngresados(numeros, TAM);
	prom = promedioPositivos(numeros, TAM);
	printf("\nEl promedio de los numeros positivos es: %.2f", prom);

	return EXIT_SUCCESS;
}

int ObtenerNumero(char* mensaje, int minimo, int maximo) {
    int numeroIngresado;

    printf("%s", mensaje);
    scanf("%d", &numeroIngresado);
    while (numeroIngresado <= minimo || numeroIngresado >= maximo) {
        printf("Error!!! Vuelva a ingresar el numero... ");
        scanf("%d", &numeroIngresado);
    }

    return numeroIngresado;
}
void CargarListadoNumerosAleatoria(int numeros[], int size){

	char continuar;
	int posicion;
	for(int i = 0; i < size; i++){
		 numeros[i] = 0;
	}
	do{
		posicion = ObtenerNumero("Ingrese la posicion en la que desea guardar el numero: ", 0, 5);
		numeros[posicion] = ObtenerNumero("Ingrese el numero: ", -50, 75);
		printf("Desea continuar?");
		fflush(stdin);
		scanf("%c", &continuar);
	}while(continuar == 's');


}

void listadoNumerosIngresados(int numeros[], int size)
{
    for(int i = 0; i < size; i++){
		printf("\nIndice: %d valor: %d", i, numeros[i]);
		}
}

float promedioPositivos(int numeros[], int size)
{
	float promedio;
	int suma = 0;

	for(int i = 0; i < size; i++)
	{
		if(numeros[i] > 0)
		{
			suma += numeros[i];
		}
	}
	promedio = (float) suma / size;

	return promedio;
}
