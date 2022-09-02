/*
 ============================================================================
Ejercicio 2-2:
Ingresar 10 números enteros, distintos de cero. Mostrar:

Cantidad de pares e impares.ss
El menor número ingresado.
De los pares el mayor número ingresado.
Suma de los positivos.
Producto de los negativos.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i;
	int numero;
	int acumuladorPares;
	int numeroMinimo;
	int banderaDelMaximoMinimo;
	int numeroParMaximo;
	int numeroPositivo;
	int productoNegativo;





	acumuladorPares=0;
	banderaDelMaximoMinimo=0;
	numeroPositivo=0;
	productoNegativo=1;
	for (i=0;i<10;i++)
	{
		printf("Numero: ");
		scanf("%d", &numero);


			if(banderaDelMaximoMinimo==0 || numero<numeroMinimo)
			{
				numeroMinimo=numero;
			}


			if(numero>0)
			{
				numeroPositivo+=numero;
			}else
			{
				productoNegativo=productoNegativo*numero;
			}

			if(numero % 2 == 0)
			{
				acumuladorPares=acumuladorPares+1;
				if(banderaDelMaximoMinimo==0 || numero>numeroParMaximo)
				{
					numeroParMaximo=numero;
					banderaDelMaximoMinimo=1;
				}
			};

	}//fin del for





	printf("La cantidad de numeros pares es: %d \n", acumuladorPares);
	printf("El menor numero ingresado es: %d \n", numeroMinimo);
	printf("De los pares el numero mayor ingresado es: %d \n", numeroParMaximo);
	printf("La suma de los positivos da el resultado de: %d \n" , numeroPositivo);
	printf("El producto de los numeros negativos es: %d ", productoNegativo);







	return 0;
}
