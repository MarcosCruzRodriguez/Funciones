/*
 ============================================================================
 Marcos Cruz Rodriguez, Div D
 Ejercicio 3-6 funciones

 Realizar un programa que: asigne a la variable numero1 un valor
 solicitado al usuario, valide el mismo entre 10 y 100, realice un descuento
 del 5% a dicho valor a través de una función llamada realizarDescuento().
 Mostrar el resultado por pantalla.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void realizarDescuento(float numeroIngresado);

int main(void) {
	setbuf(stdout, NULL);
	int numeroUno;

	printf("Ingrese un numero: ");
	scanf("%d",&numeroUno);
	while(numeroUno < 10 || numeroUno > 100)
	{
		printf("Reingrese un numero entre 10 y 100: ");
		scanf("%d",&numeroUno);
	}
	realizarDescuento(numeroUno);

	return 0;
}

void realizarDescuento(float numeroIngresado)
{
	numeroIngresado = numeroIngresado * 0.95;
	printf("\nEl numero con su descuento del 5 por ciento es: %.2f",numeroIngresado);
}
