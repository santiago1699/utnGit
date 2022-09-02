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
	}// fin de la funcion

	int sumarDosEnteros(int numeroUno, int numeroDos, int * suma)
	{
		if(suma != NULL)
		{
			*suma= numeroUno+numeroDos;
		}



		return suma;
	}// fin de la funcion

	//funcion para RESTAR

	int restarDosEnteros(int numeroUno, int numeroDos, int * resta)
	{

		if(resta != NULL)
		{
			*resta= numeroUno-numeroDos;
		}


		return resta;
	}// FIN DE LA FUNCION


	//funcion para MULTIPLICAR

	int multiplicarDosEnteros(int numeroUno, int numeroDos, int * multiplicacion)
	{

		if (multiplicacion != NULL)
		{
			*multiplicacion = numeroUno*numeroDos;
		}


		return multiplicacion;
	}









