/*
 ============================================================================
 Marcos Cruz Rodriguez, Div D
 Ejercicio 3-2 funciones

 Crear una función que pida el ingreso de un flotante y lo retorne.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

float pideNumero (void);

int main(void) {
	setbuf(stdout, NULL);
	float final;

	final = pideNumero();
	printf("\nEl numero ingresado es: %.2f", final);

	return 0;
}

float pideNumero (void)
{
	float numero;

	printf("Ingrese un numero: ");
	scanf("%f", &numero);

	return numero;
}
