/*
 ============================================================================
 Name        : ejercitacionFInalVectoresSabado10-9.c
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

#define ENTEROS 10

void recorrerNumerosIngresados(int array[], int len);
void recorrerNumerosPares(int array[], int len);
void recorrerNumerosImpares(int array[],int len);

int main(void) {
	int i;
	int numero;
	int arrayNumeros[ENTEROS];

	//canitdad positivos y negativos
	int contadorPositivo=0;
	int contadorNegativo=0;
	//sumatoria de los pares
	int acumuladorPares=0;
	//el mayoor de los impares
	int maximoImpar;
	int banderaMaximoImpar=0;




	for(i=0;i<ENTEROS;i++)
	{
		do{
			printf("ingrese el numero: ");
			scanf("%d", &numero);
		}while(numero<-1000 || numero>1000);

		//CANTIDAD DE POSITIVOS Y NEGATIVOS
		if(numero>0)
		{
			contadorPositivo++;
		}else
		{
			contadorNegativo++;
		}

		//SUMATORIA DE LOS PARES
		if(numero %2 == 0)
		{
			acumuladorPares+=numero;
		}else if(maximoImpar<numero || banderaMaximoImpar ==0)// MAXIMO DE LOS IMPARES
		{
			maximoImpar=numero;
			banderaMaximoImpar=1;
		}

	}

	printf("La cantida de positivos es: %d \n",contadorPositivo);
	printf("La cantidad de negativos es: %d \n", contadorNegativo);
	printf("La sumatoria de los pares es: %d \n", acumuladorPares);
	printf("El mayor de los impares es: %d\n", maximoImpar);
	recorrerNumerosIngresados(arrayNumeros,ENTEROS);
	recorrerNumerosPares(arrayNumeros,ENTEROS);
	recorrerNumerosImpares(arrayNumeros, ENTEROS);


	return 0;
}

void recorrerNumerosIngresados(int array[], int len)
{
	int i;
	for(i=0;i<len;i++)
	{
		printf("el listado de los numeros ingresados es: %d \n", array[i]);
	}
}


void recorrerNumerosPares(int array[], int len)
{
	int i;
	for(i=0;i<len;i++)
	{
		if(array[i] %2 ==0)
		{
			printf("el numero de pares ingresados es: %d \n", array[i]);
		}
	}
}


void recorrerNumerosImpares(int array[],int len)
{
	int indice;
	for(indice=0;indice<len;indice++)
	{
		if(indice %2 !=0)//posicion en la que el indice es impar
		{
			printf("posicion: %d , %d \n"  ,indice ,array[indice]);
		}
	}
}

