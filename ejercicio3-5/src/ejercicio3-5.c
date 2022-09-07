/*
 ============================================================================
Ejercicio 3-5: Realizar un programa en donde se puedan utilizar los prototipos de la
función Restar en sus 4 combinaciones.
a) int Restar1(int, int);
b) int Restar2(void);
c) void Restar3(int, int);
d) void Restar4(void);
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int Restar1(int numeroA, int numeroB);
int Restar2(void);
void Restar3(int numeroA, int numeroB);
void Restar4(void);

int main(void) {
	setbuf(stdout, NULL);

	int num1 = 4;
	int num2 = 8;
	int resultado;

	resultado = Restar1(num1, num2);
	printf("Restar1 %d\n", resultado);

	resultado = Restar2();
	printf("Restar2 %d\n", resultado);

	Restar3(num1, num2);

	Restar4();


	return EXIT_SUCCESS;
}
int Restar1(int numeroA, int numeroB)
{
	int resultado;

	resultado = numeroA + numeroB;

	return resultado;

}

int Restar2(void)
{
	int numeroA;
	int numeroB;
	int resultado;

	printf("Ingrese el primer numero: ");
	scanf("%d", &numeroA);

	printf("Ingrese el segundo numero: ");
	scanf("%d", &numeroB);

	resultado = numeroA + numeroB;

	return resultado;

}

void Restar3(int numeroA, int numeroB)
{
	int resultado;
	resultado = numeroA + numeroB;
	printf("El resultado de la suma de los dos numeros es: %d\n", resultado);

}

void Restar4(void)
{

		int numeroA;
		int numeroB;
		int resultado;

		printf("Ingrese el primer numero: ");
		scanf("%d", &numeroA);

		printf("Ingrese el segundo numero: ");
		scanf("%d", &numeroB);

		resultado = numeroA + numeroB;
		printf("El resultado de la suma de los dos numeros es: %d\n", resultado);


}
