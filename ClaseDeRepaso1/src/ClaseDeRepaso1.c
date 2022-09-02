/*
 ============================================================================
******************************************************************************

se ingresan 5 numeros y 5 letras
se necesita saber:
a- promedio de numeros
b-cantidad de vocales(cuantas a , cuantas e. cuantas i. cuantas o. cuantas u)
c- de la letra a, el valor mas grande.
d- ell factor de todos los numeros

*******************************************************************************/



#include <stdio_ext.h>
#include <stdlib.h>
#define T 10
int main(void) {

	int numero;
	char letra;
	int acumuladorNumero;
	float promedio;
	int contadorA;
	int contadorE;
	int contadorI;
	int contadorO;
	int contadorU;
	int maximoNumero;
	int banderaMaximoA;
	int factor;


	int i;
	acumuladorNumero=0;
	contadorA=0;
	contadorE=0;
	contadorI=0;
	contadorO=0;
	contadorI=0;
	banderaMaximoA=0;
	factor=1;

	for(i=0;i<10;i++)
	{
		printf("ingrese un numero: ");
		scanf("%d", &numero);

		printf("ingrese la letra: ");
		__fpurge(stdin);
		scanf("%c", &letra);


		switch(letra)
		{
		case 'a':
			contadorA++;
			if(numero>maximoNumero || banderaMaximoA==0)
			{
				maximoNumero=numero;
				banderaMaximoA=1;
			}
		break;
		case 'e':
			contadorE++;
		break;
		case 'i':
			contadorI++;
		break;
		case 'O':
			contadorO++;
		break;
		case 'u':
			contadorU++;
		break;
		}

		acumuladorNumero+=numero;
		factor = factor * numero;

	}//fin del for

	promedio= (float)acumuladorNumero/T;

	printf("el promedio es: %f", promedio);
	printf("Se ingresaron : %d letras a \n", contadorA);
	printf("Se ingresaron : %d letras e \n", contadorE);
	printf("Se ingresaron : %d letras i \n", contadorI);
	printf("Se ingresaron : %d letras o \n", contadorO);
	printf("Se ingresaron : %d letras u \n", contadorU);
	if(banderaMaximoA>0)
	{
		printf("El maximo numero : %d " , maximoNumero);
	}else
	{
		printf("No se ingresaron letras A para calcular el maximo");
	}

	printf("\n el factor es: %d " , factor);


	return 0;
}
