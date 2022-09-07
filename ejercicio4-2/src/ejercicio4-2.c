/*
 ============================================================================
 Name        : ejercicio4-2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Realizar un programa que permita la carga de temperaturas en celsius y fahrenheit , validando que las temperaturas ingresadas estén entre el punto de congelación y ebullición del agua para cada tipo de escala.
Las validaciones se hacen en una biblioteca.
Las funciones de transformación de fahrenheit a celsius y de celsius a fahrenheit se hacen en otra biblioteca.
 */

#include <stdio.h>
#include <stdlib.h>

#include "validacionCelsius.h"
#include "validacionesFarenheit.h"

#include "transformacionACelsius.h"
#include "transformacionAFarenheit.h"



int main(void) {


int numero;
char tipoDeTemperatura;
int resultado;
int retornoValidacionFarenheit;
int retornoValidacionCelsius;

printf("que tipo de temperatura f o c:  ");
scanf("%c",&tipoDeTemperatura);
while(tipoDeTemperatura!='f'&& tipoDeTemperatura!='c')
{
	printf("que tipo de temperatura f o c:  ");
	scanf("%c",&tipoDeTemperatura);
}


printf("ingrese un numero de temperatura:  ");
scanf("%d",&numero);


switch(tipoDeTemperatura)
{
case 'f':
	retornoValidacionFarenheit=validacionesDeTemperaturaFarenheit(numero);
	if(retornoValidacionFarenheit ==0)
	{
	resultado=transformacionDeFarenheitACelcius(numero);
	printf("el numero tranformado a celisus es: %d", resultado);
	}
	else
	{
		printf("no devuelve temperatura, se excede de los rangos");
	}
	break;

case 'c':
	retornoValidacionCelsius=validacionesDeTemperaturasCelsius(numero);
	if(retornoValidacionCelsius == 0)
	{
		resultado=transformacionDeCelsiusAFarenheit(numero);
		printf("el numero transformado a farenheit es: %d",resultado);
	}
	else
	{
		printf("no devulve temperatura, se pasa de rangos");
	}

	break;
}

	return 0;
}








