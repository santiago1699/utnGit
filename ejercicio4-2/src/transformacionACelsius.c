/*
 * transformacionACelsius.c
 *
 *  Created on: 7 sep. 2022
 *      Author: santi
 */

#include <stdio.h>
#include <stdlib.h>


int transformacionDeFarenheitACelcius(int numero)
{
	int celsius;
	celsius=(numero - 32)*5/9;
	return celsius;
}
