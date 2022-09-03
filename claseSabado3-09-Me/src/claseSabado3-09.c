/*
 ============================================================================
 Name        : claseSabado3-09.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
//COMO SE DESARROLLA UNA FUNCION, SON LOS SIGUUIENTES PASOS
//prototipo/ declaracion de la funcion. darla a conocer, q va a recibir y q va a devolver. tipo de retorno
int sumar(int,int);
int dividirEnteros(int, int, float *);
//void sumarEnterosVoid(int numeroUNO, int numeroDOS);

int main(void) {

	int numeroA;
	int numeroB;
	int resultado;
	int salioTodoBien;
	int division;

	numeroA=2;
	numeroB=110;

	//llamada de la funcion
	resultado = sumar(numeroA,numeroB);

	printf("el resultado es %d", resultado);


	/*//llamada de vacio
	sumarEnterosVoid(numeroA, numeroB);*/

	salioTodoBien=dividirEnteros(numeroA,numeroB, &division);


	return 0;
}

//desarrollo de la funcion. // SIEMPRE DEBEMOS DE POGRAMAR DE ESTE TIPO

	int sumar(int numeroUno,int numeroDos)
	{
		int retorno;

		retorno=numeroUno+numeroDos;

		return retorno;
	}

	int dividirEnteros(int numeroUno, int, numeroDos, float *resultado)
	{
		int retorno;

		if(numeroDos!=0)
		{
			*resultado=(float)numeroUno/numeroDos;
			retorno=0;
		}
		else
		{
			retorno = -1;
		}

		return retorno;
	}

	/*
	void sumarEnterosVoid(int numeroUNO, int numeroDOS) //NO RETORNA NADA AL MAIN, SOLO MUESTRA LA SUMA HECHA.
	{
		int suma;
		suma=numeroUNO+numeroDOS;
		printf("el resultado es %d", suma);
	}
	*/


	//ESTE ESTA MAL PARCIALMENTE MAL
/*
	int sumarSinParametros(void)
	{
		int retorno;
		int numeroA;
		int numeroB;
		printf("ingrese un numero \n");
		scanf("%d",&numeroA);
		printf("ingrese un numero \n");
		scanf("%d",&numeroB);
		retorno= numeroA+numeroB;
		return retorno;
	}
*/
