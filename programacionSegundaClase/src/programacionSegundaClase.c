/*
 ============================================================================
 Name        : programacionSegundaClase.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */ // En esta clase vemos punteros, para que sirven y demas

#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>

#include "division.h"
#include "suma.h"


 //prototipo. Siempre se declaran arriba de las funciones para que sepan que vendra de ante mano
int restarDosEnteros(int numeroUno, int numeroDos);
int multiplicarDosEnteros(int numeroUno, int numeroDos);



int main(void) {


	int numeroUno;
	int numeroDos;
	int resultado;
	char operador;
	int resultadoDivision;
	int resultadoSuma;



	printf("Ingrese el primer numero: ");
	scanf("%d", &numeroUno);

	__fpurge(stdin);
	printf("Ingrese el operador (+ ; - ; / ; *): ");
	scanf("%c", &operador);

	printf("Ingrese el segundo numero: ");
	scanf("%d", &numeroDos);



	switch(operador)
	{
		case '+':
				resultado = sumarDosEnteros(numeroUno, numeroDos, &resultadoSuma);
		break;

		case '-':
			resultado = restarDosEnteros(numeroUno,numeroDos);
			break;

		case '*':
			resultado = multiplicarDosEnteros(numeroUno,numeroDos);
			break;

		case '/':
			 resultado=dividirDosEnteros(numeroUno,numeroDos, &resultadoDivision);//division.h

			if(resultado == -1){
				printf("\n no se puede dividir por 0 ");
			}
			if(resultado == -2)
			{
				printf("\n no puede ser mayor a 100 el primer numero");
			}
			break;


	}
	//printf("el resultado es: %d" , resultadoSuma);
	printf("el resultado es : %d", resultado);


	return 0;
}



		//funcion para RESTAR

	int restarDosEnteros(int numeroUno, int numeroDos)
	{
		int resta;


		resta= numeroUno-numeroDos;

		return resta;
	}



	//funcion para MULTIPLICAR

	int multiplicarDosEnteros(int numeroUno, int numeroDos)
	{
		int multiplicacion;

		multiplicacion=numeroUno*numeroDos;

		return multiplicacion;
	}








