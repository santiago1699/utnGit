/*
Ejercicio 1-3: ingresar 3 números y mostrar el número del medio, sólo si existe. En caso de que no exista también informarlo.
Ejemplo:
1   5   3     el 3 es del medio
5   1   5    no hay numero del medio
3   5   1     el 3 es del medio
3   1   5    el 3 es del medio
5   3   1    el 3 es del medio

 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int numeroUno;
	int numeroDos;
	int numeroTres;

	int numeroMaximo;
	int numeroMinimo;
	int numeroDelMedio;



	printf("ingrese el primer numero: ");
	scanf("%d", &numeroUno);
	printf("ingrese el segundo numero: ");
	scanf("%d", &numeroDos);
	printf("ingrese el tercer numero: ");
	scanf("%d", &numeroTres);

	if(numeroUno>numeroDos && numeroUno>numeroTres)
	{
		printf("el numero mas grande de los tres es: %d", numeroUno);
	}
	else
	{
		if(numeroDos>numeroTres)
		{
			printf("el nunmero mas grande de los tres es %d", numeroDos);
		}
		else
		{
			printf("el numero mas grande es el %d", numeroTres);
		}
	}

	return 0;
}
