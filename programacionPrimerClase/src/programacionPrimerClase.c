/*
 ============================================================================
 Name        : programacionPrimerClase.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
\

	int numeroUno;
	int numeroDos;
	int resultado;

	printf("Numero uno: ");
	scanf("%d", &numeroUno);
	printf("Numero dos: ");
	scanf("%d", &numeroDos);

	resultado = numeroUno + numeroDos;

	printf("El resultado de sumar esto: %d mas esto: %d es: %d",
			numeroUno, numeroDos, resultado);

	return 0;
}

