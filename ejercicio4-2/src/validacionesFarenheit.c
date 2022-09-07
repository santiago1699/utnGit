/*
 * validacionesFarenheit.c
 *
 *  Created on: 7 sep. 2022
 *      Author: santi
 */

#include <stdio.h>
#include <stdlib.h>

int validacionesDeTemperaturaFarenheit(int numero)
{
	int tipoDeTemperatura;
	if (numero>32 && numero < 212)
	{
		tipoDeTemperatura=0;
	}
	else
	{
		tipoDeTemperatura=-1;
	}

	return tipoDeTemperatura;
}
