/*
 ============================================================================
 Name        : ejercicio3-3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int enteros(int numero);

int main(void) {
	int numero;
	numero=0;

	printf("el numero es entero es %d", enteros(numero));

	return 0;
}

int enteros(int numero)
{
	printf("INGRESE UN NUMERO ENTERO: \n ");
	scanf("%d", &numero);
	int numeroEntero=numero;
	return numeroEntero;
}
