/*
 ============================================================================
Ejercicio 5-4: Pedir 10 números entre -100 y 100, guardarlos en un Array. Determinar:
a) Cantidad de negativos.
b) Sumatoria de los impares.
c) El mayor de los pares.
d) Listado de los números ingresados.
e) Listado de los números mayores a 15.
f) Listado de los números de las posiciones impares.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define TAM 10

void CargarListadoNumeros(int numeros[], int size);
void listadoNumerosIngresados(int numeros[], int size);
void listadoNumerosMayores(int numeros[], int size);
void listadoNumerosPosicionesImpares(int numeros[], int size);
int ObtenerNumero(char* mensaje, int minimo, int maximo);
int DevolverSigno(int numeroIngresado);
int ContarNegativos(int numeros[], int size);
int mayorPares(int numeros[], int size);
int DeterminarParidad(int numero);

int main(void) {
	setbuf(stdout, NULL);

	 int numeros[TAM];
	 int cantidadNegativos;
	 int mayorPar;


	 CargarListadoNumeros(numeros,TAM);
	 cantidadNegativos = ContarNegativos(numeros, TAM);
	 printf("\nLa cantidad de numeros negativos es: %d", cantidadNegativos);
	 mayorPar = mayorPares(numeros, TAM);
	 printf("\nEl mayor de los numeros pares es: %d", mayorPar);
	 listadoNumerosIngresados(numeros, TAM);
	 listadoNumerosMayores(numeros, TAM);
	 listadoNumerosPosicionesImpares(numeros, TAM);





	return EXIT_SUCCESS;
}

int ObtenerNumero(char* mensaje, int minimo, int maximo) {
    int numeroIngresado;

    printf("%s", mensaje);
    scanf("%d", &numeroIngresado);
    while (numeroIngresado < minimo || numeroIngresado > maximo) {
        printf("Error!!! Vuelva a ingresar el numero... ");
        scanf("%d", &numeroIngresado);
    }

    return numeroIngresado;
}
void CargarListadoNumeros(int numeros[], int size){
    for (int i =0; i<size ;i++){
          numeros[i] = ObtenerNumero("ingrese un numero: ", -100,100);

    }
}

int DevolverSigno(int numeroIngresado)
{
    int retorno;
    retorno=0;

    if(numeroIngresado < 0)
    {
        retorno=-1;
    }
    else
    {
        if(numeroIngresado >0)
        {
            retorno=1;
        }

    }
    return retorno;

}

int ContarNegativos(int numeros[], int size)
{
    int contadorNegativo;
    int esNegativo;
    contadorNegativo=0;
   for(int i=0;i<size;i++)
   {
       esNegativo=DevolverSigno(numeros[i]);
       if(esNegativo==-1)
       {
           contadorNegativo++;
       }
   }
   return contadorNegativo;
}

int DeterminarParidad(int numero)
{
    int paridad;
    if(numero%2==0)
    {
    paridad =1;
    }else{
    paridad=0;
    }
    return paridad;
}

int mayorPares(int numeros[], int size){
	int mayor;
	int esPar;
	int flagPar;
	flagPar = 0;
	mayor = 0;

	for(int i = 0; i < size; i++){
		esPar = DeterminarParidad(numeros[i]);
		if(flagPar == 0 && esPar ==1){
			mayor = numeros[i];
			flagPar = 1;
		}if(mayor < numeros[i] && esPar ==1){
		    mayor = numeros[i];
		}
	}


	return mayor;
}

void listadoNumerosIngresados(int numeros[], int size)
{
    for(int i = 0; i < size; i++){
		printf("\nIndice: %d valor: %d", i, numeros[i]);
		}
}
void listadoNumerosMayores(int numeros[], int size){
	 for(int i = 0; i < size; i++){
		 if(numeros[i] > 15)
		printf("\nMayor a 15: %d", numeros[i]);
			}
}
void listadoNumerosPosicionesImpares(int numeros[], int size)
{
    int paridad;


    for(int i = 0; i < size; i++){
        paridad = DeterminarParidad(i);
        if(paridad == 0){
		printf("\nNumero posicion impar: %d", numeros[i]);
		}

    }
}
