/*
 ============================================================================
 Marcos Cruz Rodriguez, Div D
 Ejercicio 3-4 funciones

 Especializar la función del punto 3.1 y 3.2 para que valide el número en
 un rango determinado.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void numeroMostrado(int numero);
float pideNumero (void);

int main(void)
{
	setbuf(stdout, NULL);
	int numeroIngresado;
	float final;

	printf("\nIngrese un numero mayor a -1: ");
	scanf("%d", &numeroIngresado);
	while(numeroIngresado < 0)
	{
		printf("Reingrese un numero mayor a -1: ");
		scanf("%d", &numeroIngresado);
	}

	numeroMostrado(numeroIngresado);

	final = pideNumero();
	printf("\nEl numero ingresado es: %.2f", final);

	return 0;
}

void numeroMostrado(int numero)
{
	printf("\nEl numero ingresado es: %d", numero);
}

float pideNumero (void)
{
	float numero;

	printf("\nIngrese un numero menor a 0: ");
	scanf("%f", &numero);
	while(numero > -1)
	{
		printf("Reingrese un numero menor a 0: ");
		scanf("%f", &numero);
	}

	return numero;
}
