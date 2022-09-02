/*
 ============================================================================
 Name        : ejercicio3-1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int numeroParOImpar(int numeroUno, int * resultado);

int main(void) {

	int numeroUno;
	int resultado;

	printf("INGRESE EL NUMERO: ");
	scanf("%d", &numeroUno);


	resultado=numeroParOImpar(numeroUno,&resultado);
	printf("%d", resultado);



	return 0;
}

	int numeroParOImpar(int numeroUno, int * resultado)
	{
		int par;
		if(numeroUno % 2 == 0)
		{
			*resultado=1;
			par=1;
		}else
		{
			*resultado=0;
			par=0;
		}
		return par;
	}
