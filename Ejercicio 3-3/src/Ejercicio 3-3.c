/*
 ============================================================================
 Marcos Cruz Rodriguez, Div D
 Ejercicio 3-3 funciones

 Crear una función que permita determinar si un número es par o no. La
 función retorna 1 en caso afirmativo y 0 en caso contrario. Probar en el main.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int retornoParImpar (int numero);

int main(void)
{
	setbuf(stdout, NULL);
	int numeroIngresado;
	int resultado;

	printf("Ingrese un numero: ");
	scanf("%d",&numeroIngresado);

	resultado = retornoParImpar(numeroIngresado);
	if(resultado == 1)
	{
		printf("\nEl numero ingresado es par");
	}
	else
	{
		printf("\nEl numero ingresado es impar");
	}

	return 0;
}

int retornoParImpar (int numero)
{
	if(numero % 2 == 0)
	{
		return 1;
	}
	else
	{
		numero = 0;
		return numero;
	}
}
