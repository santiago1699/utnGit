/*
 ============================================================================
 Name        : ejercicio5-1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Ejercicio 5-1:
Pedir el ingreso de 5 números. Mostrarlos y calcular la sumatoria de los mismos.

 */

#include <stdio.h>
#include <stdlib.h>
#define NUMEROS 5


int ingresarNumeros(int numero[], int len);

int main(void) {
	int array[NUMEROS];

	ingresarNumeros(array,5);


	return 0;
}

int ingresarNumeros(int array[], int len){
	int i;
	int sumaNumeros=0;
	if(array != NULL){

	for(i = 0; i < len;i++){

		printf("Iteracion numero: %d\n", i);

	}
	sumaNumeros+=i;
	printf("total %d",  sumaNumeros);

	}
	return 0;
}



