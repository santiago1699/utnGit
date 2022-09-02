#include <stdio.h>

/// funcion para DIVISION

	int dividirDosEnteros(int numeroUno,int numeroDos, int * resultadoDivision) {
		int retorno =-1;

		/*if(numeroUno>100)
		{
			retorno=-2;
		}*/
		if(resultadoDivision != NULL)
		{
			if(numeroDos!=0)
			{
				*resultadoDivision= numeroUno / numeroDos;
				retorno=0;
			}
		}



		return retorno;
	}



