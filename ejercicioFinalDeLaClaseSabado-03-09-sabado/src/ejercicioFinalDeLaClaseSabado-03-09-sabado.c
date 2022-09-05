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
int ingresar10Valores(void);
/*
 * prototipos de int;
int pedirNumero_float();
int pedirNumero_double();
int pedirNumero_char();
*/
int main(void) {

	int numero;
	int elIngresoDe10Numeros;
	int resultado;



	resultado=numeroEntero(numero);
	elIngresoDe10Numeros=ingresar10Valores();
	printf("%d \n", resultado);
	printf("%d", elIngresoDe10Numeros);

	return 0;
}//funcion principal


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


	int ingresar10Valores(void)
	{
		int i;
		int ingresarNumero;
		int promedio;
		int contadorPositivos =0;
		int acumuladorPositivos = 0;
		int contadorCeros=0;

		for (i=0;i<10;i++)
		{
			printf("ingrese un numero: ");
			scanf("%d", &ingresarNumero);
			if(ingresarNumero > 0)
			{
				contadorPositivos++;
				acumuladorPositivos+=ingresarNumero;
			}
			else
			{
				if(ingresarNumero == 0)
				{
					contadorCeros++;
				}

			}
		}//fin del for

		promedio= acumuladorPositivos/contadorPositivos;

		printf( " \n el promedio de los positivos es: %d", promedio);
		printf(" \n la cantidad de ceros es: %d", contadorCeros);

	};//termino ingresar10Valores


	/*int ingresar10Valores(){
		int ingresarNumero;
		int promedio;
		int contadorPositivos = 0;
		int acumuladorPositivos = 0;
		int contadorCeros = 0;

		for(int i = 0; i < 10 ; i++){
			printf("Ingrese un numero: ");
			scanf("%d", &ingresarNumero);

			if(ingresarNumero > 0)
			{
				contadorPositivos++;
				acumuladorPositivos+= ingresarNumero;
			}else
			{
				if(ingresarNumero == 0){
					contadorCeros++;
				}
			}
		}

		promedio = acumuladorPositivos / contadorPositivos;

		printf("\n El promedio de los positivos es: %d", promedio);
		printf("\n La cantidad de ceros es: %d", contadorCeros);
	}*/












