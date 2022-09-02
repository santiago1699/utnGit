/*
 ============================================================================
QUE ES CHAR? COMO LO USO?
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

int main(void) {

	char operador;
	int numeroUno;
	int numeroDos;
	int resultado;

	printf("Ingrese el numero: ");
	scanf("%d", &numeroUno);
	__fpurge(stdin);// PARA NO SALTEAR DE LINEA DE MAENERA AUTOMATICA CUANDO EN LA PROXIMA LINEA SE USA CHAR
	//fflush(stdin) SOLO WINDOWS
	printf("Ingrese el operador (+/-): ");
	scanf("%c", &operador);
	printf("\nIngrese el numero: ");
	scanf("%d", &numeroDos);

	switch(operador){
		case '+':
			resultado = numeroUno + numeroDos;
			break;
		case '-':
			resultado = numeroUno - numeroDos;
			break;
	}

	printf("El resultado es: %d", resultado);

	return 0;
}

