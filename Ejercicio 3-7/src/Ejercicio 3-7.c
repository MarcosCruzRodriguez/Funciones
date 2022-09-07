/*
 ============================================================================
 Marcos Cruz Rodriguez, Div D
 Ejercicio 3-7 funciones

 Realizar un programa que: asigne a las variables numero1 y numero2
 los valores solicitados al usuario, valide los mismos entre 10 y 100, asigne
 a la variable operacion el valor solicitado al usuario, valide el mismo
 's'-sumar, 'r'-restar, realice la operación de dichos valores a través de una
 función. Mostrar el resultado por pantalla.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void funcionSuma(int primerNumero, int segundoNumero);
void funcionResta(int primerNumero, int segundoNumero);

int main(void)
{
	setbuf(stdout, NULL);
	int numeroUno;
	int numeroDos;
	char operacion;

	printf("Ingrese el primer numero: ");
	scanf("%d",&numeroUno);
	while(numeroUno < 10 || numeroUno > 100)
	{
		printf("Reingrese el primer numero: ");
		scanf("%d",&numeroUno);
	}
	printf("\nIngrese el segundo numero: ");
	scanf("%d",&numeroDos);
	while(numeroDos < 10 || numeroDos > 100)
	{
		printf("\nReingrese el segundo numero: ");
		scanf("%d",&numeroDos);
	}

	printf("\n Ingrese el tipo de operacion que desea realizar");
	printf("\nPara suma ingrese s, para resta ingrese r: ");
	fflush(stdin);
	scanf("%c",&operacion);
	operacion = tolower(operacion);
	while(operacion!='s' && operacion!='r')
	{
		printf("\nError. Solamente ingrese para suma s, para resta ingrese r: ");
		fflush(stdin);
		scanf("%c",&operacion);
		operacion = tolower(operacion);
	}

	if(operacion == 's')
	{
		funcionSuma(numeroUno,numeroDos);
	}
	else
	{
		funcionResta(numeroUno,numeroDos);
	}

	return 0;
}

void funcionSuma(int primerNumero, int segundoNumero)
{
	int suma;
	suma = primerNumero + segundoNumero;
	printf("\nLa suma da como resultado: %d",suma);
}

void funcionResta(int primerNumero, int segundoNumero)
{
	int resta;
	resta = primerNumero - segundoNumero;
	printf("\nLa suma da como resultado: %d",resta);
}
