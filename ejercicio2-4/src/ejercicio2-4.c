/*
 ============================================================================
 Name        : ejercicio2-4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
/*
 Ejercicio 2-4:
Ingresar 5 caracteres e informar cuantas letras p (minúsculas) se ingresaron.

 */

#include <stdio_ext.h>
#include <stdlib.h>
int main(void) {
	char letra;
	int i;
	char contadorLetraP;
	int contador;


	contadorLetraP='p';
	contador=0;

	for(i=0;i<5;i++)
	{
		printf("ingrese una letra del abecedario: ");
		scanf("la letra ingresada es %c" , &letra);
		__fpurge(stdin);


		if(letra == contadorLetraP)
		{
			contador++;
		};

	}// fin del for

	printf("el total de letras p ingresadas es de: %d", contador);

	return 0;
}
