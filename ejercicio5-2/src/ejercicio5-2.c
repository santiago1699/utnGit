/*
 ============================================================================
 Name        : ejercicio5-1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================

 Ejercicio 5-2:
Pedir el ingreso de 10 números enteros entre -1000 y 1000. Determinar:
Cantidad de positivos y negativos.
Sumatoria de los pares.
El mayor de los impares.

Listado de los números ingresados.
Listado de los números pares.
Listado de los números de las posiciones impares.
 */

#include <stdio.h>
#include <stdlib.h>

void recorrerNumerosIngresados(int array[]);

#define ENTEROS 10


int main(void) {
	int i;
	int numeros;
	int arrayNumerosIngresados[ENTEROS];
	int cantidadPositivos=0;
	int cantidadNegativos=0;
	int sumaPares=0;

	int banderaMaximoImpares;
	int imparMaximo;

	for(i=0;i<ENTEROS;i++)
	{

	do{
		printf("ingrese un numero entre -1000 y 1000:  ");
		scanf("%d", &numeros);
	}while(numeros < -1000 || numeros>1000);



	//CANTIDAD DE POSITIVOS Y NEGATIVOS
	if(numeros>0)
	{
		cantidadPositivos++;
	}
	else
	{
		cantidadNegativos++;
	}

	//suma de pares
	if(numeros % 2 ==0)
	{
		sumaPares+=numeros;
	}else if(imparMaximo<numeros || banderaMaximoImpares==0)
	{
		imparMaximo=numeros;
		banderaMaximoImpares=1;
	}

	//arrayNumerosIngresados[i]=recorrerNumerosIngresados(numeros, ENTEROS);// en cada valor de la i, me guardara el numero ingresado
	}//fin del for PRINCIPAL

	printf("la cantidad de positivos es: %d \n", cantidadPositivos);
	printf("la cantidad de negativos es: %d \n", cantidadNegativos);
	printf("la suma de los pares es : %d \n", sumaPares);
	printf("el numero maximo impar es : %d \n", imparMaximo);
	printf("lalal %d ", arrayNumerosIngresados);


	return 0;
}


void recorrerNumerosIngresados(int array[ENTEROS])
{
	int i;
	int numeros;
	for(i=0;i<ENTEROS;i++)
	{
		printf("numeros ingresados %d", ENTEROS[i]);
	}
}








