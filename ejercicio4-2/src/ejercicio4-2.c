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

int validacionesDeTemperaturaFarenheit(int);
int validacionesDeTemperaturasCelsius(int);
int transformacionDeFarenheitACelcius(int);
int transformacionDeCelsiusAFarenheit(int);

int main(void) {


int numero;
char tipoDeTemperatura;
int resultado;

printf("que tipo de temperatura: f o c");
scanf("%c",&tipoDeTemperatura);
while(tipoDeTemperatura!='f'&& tipoDeTemperatura!='c')
{
	printf("que tipo de temperatura: f o c");
	scanf("%c",&tipoDeTemperatura);
}


printf("ingrese un numero: ");
scanf("%d",numero);


switch(tipoDeTemperatura)
{
case 'f':
	resultado=transformacionDeFarenheitACelcius(numero);
	break;

case 'c':
	resultado=transformacionDeCelsiusAFarenhei(numero);
	break;
}






	return 0;
}


int validacionesDeTemperaturaFarenheit(int numero)
{
	int tipoDeTemperatura;
	if (numero<32 || numero > 212)
	{
		tipoDeTemperatura=numero;
	}
	else
	{
		tipoDeTemperatura=-1;
	}

	return tipoDeTemperatura;
}



int validacionesDeTemperaturasCelsius(int numero)
{
	int temperatura;
	int tipoDeTemperatura;

	printf("ingrese temperatura");
	scanf("%d", numero);

	if (numero <1 || numero > 99)
	{
		tipoDeTemperatura=numero;
	}
	else
	{
		tipoDeTemperatura=-1;
	}

	return tipoDeTemperatura;
}

int transformacionDeFarenheitACelcius(int numero)
{
	int celsius;
	celsius=(numero - 32)*5/9;
	return celsius;
}

int transformacionDeCelsiusAFarenheit(int numero)
{
	int farenheit;
	farenheit=(numero*9/5)+32;
	return farenheit;
}



