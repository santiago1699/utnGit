/*
 ============================================================================
 Name        : ejercicio2-3
 Author      :
 Version     :1.0
 Copyright   : Your copyright notice
 Description :
 Debemos alquilar el servicio de transporte para llegar a Mar del Plata con un grupo de personas (no más de 100), de cada persona debemos obtener los siguientes datos:
número de cliente,
estado civil ('s' para soltero", 'c' para casado o 'v' viudo),
edad( solo mayores de edad, más de 17),
temperatura corporal (validar por favor)
y genero('f' para femenino, 'm' para masculino, 'o' para no binario).
NOTA: El precio por pasajero es de $600.
Se debe informar (solo si corresponde):
a) La cantidad de personas con estado  civil"viudo" de más de 60 años.
b) el número de cliente y edad de la mujer soltera más joven.
c) cuánto sale el viaje total sin descuento.
d) si hay más del 50% de los pasajeros que tiene más de 60 años , el precio final tiene un descuento del 25%, que solo mostramos si corresponde.

 ============================================================================
 */

#include <stdio_ext.h>
#include <stdlib.h>

int main(void) {

	int i;
	char estadoCivil;
	int edad;
	int temperaturaCorporal;
	char genero;
	int contadorPasajero;
	int contadorViudoJubilado;
	int numeroDeCliente;
	int banderaEdadMujerMinimo;
	int edadMujerMinimo;
	int numeroMinimoMujer;
	int contadorJubilado;
	int descuento;
	int precioFinalJubilado;
	int precioFinalTotal;



	contadorPasajero=0;
	contadorViudoJubilado=0;
	banderaEdadMujerMinimo=0;
	contadorJubilado=0;

	for(i=0;i<10;i++)
	{
		printf("ingrese su estado civil 's' para soltero, c para casado, o v viudo: ");
		scanf("%c", &estadoCivil);
		__fpurge(stdin);
		while(estadoCivil!='c' && estadoCivil!='s' && estadoCivil!='v')
		{
			printf("ingrese su estado civil 's' para soltero, c para casado, o v viudo: ");
			scanf("%c", &estadoCivil);
			__fpurge(stdin);
		}


		printf("cual es su edad? ");
		scanf("%d", &edad);
		while(edad<18)
		{
			printf("cual es su edad? solo puede ser mayor de edad ");
			scanf("%d", &edad);
		}

		printf("Ingrese su temperatura");
		scanf("%d", &temperaturaCorporal);

		printf("cual es su genero? ('f' para femenino, 'm' para masculino, 'o' para no binario): ");
		scanf("%c", &genero);
		__fpurge(stdin);
		while(genero!='f' && genero!='m' && genero!='o')
		{
			printf("cual es su genero? ('f' para femenino, 'm' para masculino, 'o' para no binario): ");
			scanf("%c", &genero);
			__fpurge(stdin);
		}

		printf("Cual es el numero de cliente?");
		scanf("%d", &numeroDeCliente);
		while(numeroDeCliente<0)
		{
			printf("Cual es el numero de cliente?");
			scanf("%d", &numeroDeCliente);
		}

		//calculos
		contadorPasajero=contadorPasajero+1;

		if(edad>59 && estadoCivil=='v')
		{
			contadorViudoJubilado=contadorViudoJubilado+1;
		}else
		{
			if(edad>59)
			{
				contadorJubilado++;
				precioFinalJubilado=600*contadorJubilado;
			}
		}






		if(genero=='f' && estadoCivil=='s')
		{
			if(banderaEdadMujerMinimo==0 || edadMujerMinimo>edad)
			{
				edadMujerMinimo=edad;
				numeroMinimoMujer=numeroDeCliente;
				banderaEdadMujerMinimo=1;
			}
		}


		precioFinalTotal=600*i;

	}//fin del for


			if(contadorJubilado>49)
		{
			descuento=precioFinalJubilado*0.85;
			printf("el descuento para los jubilado en su totalidad es: %d \n" , descuento);
		}else
		{
			printf("la cantidad de jubilados es menor al 50 porciento \n");
		}

	printf("la cantidad de personas viudad de mas de 60 son: %d \n", contadorViudoJubilado);
	printf("la edad minima de la mujer soltera es:%d \n", edadMujerMinimo);
	printf("el numero de cliente de la mujer soltera mas joven es: %d \n", numeroMinimoMujer);
	printf("el viaje total sin descuento sale %d \n", precioFinalTotal);



	return 0;
}


