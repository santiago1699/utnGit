/*
 ============================================================================
 Name        : ejercicio3-03-09-sabado.c
 Author      : Santiago Castro
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Ejercicio 3:
Crear una función que reciba como parámetro un número entero. La función retorna 1 en caso de que sea positivo, -1 en caso de que sea negativo y 0 en caso de que sea 0. Realizar la prueba lógica de la función en el main.
Ejercicio 4:
Realizar un programa que permita el ingreso de 10 números enteros.
Determinar:
El promedio de los positivos
La cantidad de ceros
Del menor de los negativos la suma de los antecesores de ese valor (frenar en cero).
Nota:
Utilizar las funciones del punto anterior y desarrollar funciones para resolver los procesos que están resaltados.
 */

#include <stdio.h>
#include <stdlib.h>

//PROTOTIPO
int numeroEntero(int);//RETORNOS: int - float - char - void - void*
//int ingresar10Valores(int);
int promedioDeLosPositivos(int);
/*
 * prototipos de int;
int pedirNumero_float();
int pedirNumero_double();
int pedirNumero_char();
*/
int main(void) {

	int numero;
	//int saberQueClaseDeEntero;
	//int elIngresoDe10Numeros;
	int resultado;
	int resultadoPromedio;

	int i;
	for(i=0;i<10;i++)
	{
		printf("ingrese los numeros: ");
		scanf("%d",&numero);
	}

	resultado=numeroEntero(numero);
	resultadoPromedio=promedioDeLosPositivos(numero);
	printf("%d \n", resultado);
	printf("%d \n", resultadoPromedio);

	return 0;
}

	int numeroEntero(int numeroEntero)
	{
		int retornamos;
		if(numeroEntero>0)
		{
			retornamos=1;
		}
		else
		{
			if(numeroEntero<0)
			{
				retornamos=-1;
			}
			else
			{
				retornamos=0;
			}
		}

		return retornamos;
	}

	//FUNCION INGRESAR 10 NUMEROS
	/*int ingresar10Valores(int numero)
	{
		int i;
		for(i=0;i<10;i++)
		{
			printf("ingrese los numeros: ");
			scanf("%d",&numero);
		}
		return i;

	}*/

	int promedioDeLosPositivos(int numero)
	{
		int contadorNumero;
		int acumuladorNumero;
		int promedio;
		contadorNumero=0;
		acumuladorNumero=0;
		if(numero>0)
		{
			contadorNumero++;
			acumuladorNumero+=numero;
		}
		promedio=acumuladorNumero/contadorNumero;
		return promedio;
	}








