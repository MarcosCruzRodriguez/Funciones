/*
 ============================================================================
 Marcos Cruz Rodriguez, Div D
 Ejercicio Sabado 02 funciones

 Ejercicio 1:
 Crear una función que le solicite al usuario el ingreso de un numero y lo retorne.
 Ejercicio 2:
 Crear una función que reciba como parámetro dos números enteros, que realice el
 promedio de los números y que retorne dicho valor.
 Ejercicio 3:
 Crear una función que reciba como parámetro un número entero. La función retorna
 1 en caso de que sea positivo, -1 en caso de que sea negativo y 0 en caso de que sea 0.
 Realizar la prueba lógica de la función en el main.
 Ejercicio 4:
 Realizar un programa que permita el ingreso de 10 números enteros.
 Determinar:
  El promedio de los positivos
  La cantidad de ceros
  Del menor de los negativos la suma de los antecesores de ese valor (frenar en cero).
 Nota:
 Utilizar las funciones del punto anterior y desarrollar funciones para resolver los
 procesos que están resaltados.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int ingresoDato(void);
float promedioDatos(int primerNumero, int segundoNumero);
int parametroEntero(int numero);

int main(void)
{
	setbuf(stdout, NULL);
	int numeroIngresado;
	int numeroUno;
	int numeroDos;
	float total;
	int numeroEntero;
	int retornoIndefinido;

	numeroIngresado = ingresoDato();
	printf("\nEl numero ingresado es: %d",numeroIngresado);

	printf("\nIngrese el primer parametro: ");
	scanf("%d",&numeroUno);
	printf("\nIngrese el segundo parametro: ");
	scanf("%d",&numeroDos);

	total = promedioDatos(numeroUno,numeroDos);
	printf("\nEl promedio de los 2 parametros es: %.2f",total);

	printf("\nIngrese un numero entero: ");
	scanf("%d",&numeroEntero);

	retornoIndefinido = parametroEntero(numeroEntero);
	if(retornoIndefinido == 1)
	{
		printf("\nEl numero ingresado es positivo");
	}
	else
	{
		if(retornoIndefinido == -1)
		{
			printf("\nEl nuemro ingresado es negativo");
		}
		else
		{
			printf("\nEl nuemro ingresado es cero");
		}
	}

	return 0;
}

int ingresoDato(void)
{
	int numero;

	printf("Ingrese un numero: ");
	scanf("%d",&numero);
	return numero;
}

float promedioDatos(int primerNumero, int segundoNumero)
{
	int suma;
	float promedio;

	suma = primerNumero + segundoNumero;
	promedio = (float)suma / 2;
	return promedio;
}

int parametroEntero(int numero)
{
	if(numero > 0)
	{
		return 1;
	}
	else
	{
		if(numero < 0)
		{
			return -1;
		}
		else
		{
			return 0;
		}
	}
}
