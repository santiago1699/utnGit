/*
 ============================================================================
 Name        : Clase_Funciones.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

//Prototipo
int SumarEnteros(int numeroUno,int numeroDos);
void SumarEnterosVoid (int numeroUno, int numeroDos);
int SumarSinParametros(void);
void SumarSinRetornoSinParametro(void);


int dividirEnteros(int numeroUno,int numeroDos,float* resultado);




int main(void) {

	setbuf(stdout,NULL);

	int numeroA;
	int numeroB;
	int division;
	int salioTodoBien;

	numeroA = 2;
	numeroB = 10;

	//llamadada con retorno
	//resultado = SumarEnteros(numeroA,numeroB);
	//printf("\nEstoy desde el main! \nEl resultado es %d",resultado);

	//Llamada al mostrar
	SumarEnterosVoid(10,30);


	salioTodoBien = dividirEnteros(numeroA,numeroB,&division);
	if(salioTodoBien == 0)
	{
		printf("La division se realizo correctamente y el resultado es %f", division);
	}
	else
	{
		printf("No se pudo realizar la division");
	}


	return EXIT_SUCCESS;
}


//desarrollo
int SumarEnteros(int numeroA,int numeroB)
{
	int retorno;
	retorno = numeroA + numeroB;
	return retorno;
}


void SumarEnterosVoid (int numeroUno, int numeroDos)
{
	int suma;
	suma = numeroUno + numeroDos;
	printf("\nEstoy desde la funcion! \nMostramos la suma nada mas %d",suma);
}


int SumarSinParametros(void)
{
	int retorno;
	int numeroA;
	int numeroB;
	printf("Ingrese un numero \n");
	scanf("%d",&numeroA);
	printf("Ingrese un numero \n");
	scanf("%d",&numeroB);
	retorno = numeroA + numeroB;
	return retorno;
}


void SumarSinRetornoSinParametro(void)
{
	int suma;
	int numeroA;
	int numeroB;
	printf("Ingrese un numero \n");
	scanf("%d",&numeroA);
	printf("Ingrese un numero \n");
	scanf("%d",&numeroB);
	suma = numeroA + numeroB;
	printf("\nEl resultado de la suma es %d",suma);
}



int dividirEnteros(int numeroUno,int numeroDos, float* resultado)
{
	int retorno;
	if(numeroDos != 0)
	{
		*resultado = (float) numeroUno / numeroDos;
		retorno = 0;
	}
	else
	{
		retorno = -1;
	}

	return retorno;
}
