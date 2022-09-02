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

#include "calculos.h"


 //prototipo. Siempre se declaran arriba de las funciones para que sepan que vendra de ante mano





int main(void) {


	int numeroUno;
	int numeroDos;
	int resultado;
	char operador;
	int resultadoTotal;




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
				resultadoTotal = sumarDosEnteros(numeroUno, numeroDos, &resultado);

		break;

		case '-':
			resultadoTotal = restarDosEnteros(numeroUno,numeroDos,&resultado);
			break;

		case '*':
			resultadoTotal = multiplicarDosEnteros(numeroUno,numeroDos, &resultado);
			break;

		case '/':
			 resultadoTotal=dividirDosEnteros(numeroUno,numeroDos, &resultado);//division.h

			if(resultadoTotal == -1){
				printf("\n no se puede dividir por 0 ");
			}
			if(resultadoTotal == -2)
			{
				printf("\n no puede ser mayor a 100 el primer numero");
			}
			break;


	}// FIN DEL SWITCH

			printf("el resultado es: %d" , resultado);


	return 0;
}//FIN DE LA FUNCION















