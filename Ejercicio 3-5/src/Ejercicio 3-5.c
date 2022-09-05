/*
 ============================================================================
 Marcos Cruz Rodriguez, Div D
 Ejercicio 3-5 funciones

 Realizar un programa en donde se puedan utilizar los prototipos de la
 función Restar en sus 4 combinaciones.
  int Restar1(int, int);
  int Restar2(void);
  void Restar3(int, int);
  void Restar4(void);
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int restarUno (int numeroUno, int numeroDos);
int restarDos (void);
void restarTres (int numeroCinco, int numeroSeis);
void restarCuatro (void);

int main(void)
{
	setbuf(stdout, NULL);
	int primerNumero;
	int segundoNumero;
	int primerTotal;
	int segundoTotal;
	int quintoNumero;
	int sextoNumero;

	printf("\nIngrese el primer numero: ");
	scanf("%d",&primerNumero);
	printf("\nIngrese el segundo numero: ");
	scanf("%d",&segundoNumero);
	primerTotal = restarUno(primerNumero,segundoNumero);

	printf("\nLa respuesta a la primer resta es: %d",primerTotal);

	segundoTotal = restarDos ();
	printf("\nLa respuesta a la segunda resta es: %d",segundoTotal);

	printf("\nIngrese el primer numero: ");
	scanf("%d",&quintoNumero);
	printf("\nIngrese el segundo numero: ");
	scanf("%d",&sextoNumero);
	restarTres(quintoNumero,sextoNumero);

	restarCuatro ();

	return 0;
}

int restarUno (int numeroUno, int numeroDos)
{
	int respuesta;

	respuesta = numeroUno - numeroDos;
	return respuesta;
}

int restarDos (void)
{
	int numeroTres;
	int numeroCuatro;
	int respuesta;

	printf("\nIngrese el primer numero: ");
	scanf("%d",&numeroTres);
	printf("\nIngrese el segundo numero: ");
	scanf("%d",&numeroCuatro);

	respuesta = numeroTres - numeroCuatro;
	return respuesta;
}

void restarTres (int numeroCinco, int numeroSeis)
{
	int respuesta;

	respuesta = numeroCinco - numeroSeis;
	printf("\nLa respuesta de la tercera resta es: %d",respuesta);
}

void restarCuatro (void)
{
	int numeroSiete;
	int numeroOcho;
	int respuesta;

	printf("\nIngrese el primer numero: ");
	scanf("%d",&numeroSiete);
	printf("\nIngrese el segundo numero: ");
	scanf("%d",&numeroOcho);

	respuesta = numeroSiete - numeroOcho;
	printf("\nLa respuesta de la tercera resta es: %d",respuesta);
}
