/*
 * validacionCelsius.c
 *
 *  Created on: 7 sep. 2022
 *      Author: santi
 */
#include <stdio.h>
#include <stdlib.h>


int validacionesDeTemperaturasCelsius(int numeroDeTemperatura)
{
	int tipoDeTemperatura;


	if (numeroDeTemperatura >1 && numeroDeTemperatura < 101)
	{
		tipoDeTemperatura=0;
	}
	else
	{
		tipoDeTemperatura=-1;
	}

	return tipoDeTemperatura;
}
