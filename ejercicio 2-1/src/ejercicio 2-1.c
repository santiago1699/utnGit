/*
Ejercicio 2-1: Ingresar 5 números enteros calcular y mostrar el promedio de los números. Probar la aplicación con distintos valores.
Ejemplo 1:  3 - 5 - 7 - 9 - 1
Ejemplo 2:  2 - 1 - 8 - 1 - 2

 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int numeroUno;
	int numeroDos;
	int numeroTres;
	int numeroCuatro;
	int numeroCinco;
	int suma;
	int promedio;


	printf("ingrese el primer numero: ");
	scanf("%d", &numeroUno);

	printf("ingrese el segundo numero: ");
	scanf("%d", &numeroDos);

	printf("ingrese el tercer numero: ");
	scanf("%d", &numeroTres);

	printf("ingrese el cuarto numero: ");
	scanf("%d", &numeroCuatro);

	printf( "ingrese el quinto numero:");
	scanf("%d", &numeroCinco );

	suma= (numeroUno + numeroDos + numeroTres + numeroCuatro + numeroCinco);
	promedio = suma / 5;
	printf("el promedio es %d", promedio);
	return 0;
}
