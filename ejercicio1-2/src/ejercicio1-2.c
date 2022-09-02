/*
 ============================================================================
 Name        : ejercicio1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

int main(void) {

	int numeroUno;
	int numeroDos;
	int numeroTres;

	printf("Numero uno: ");
	scanf("%d", &numeroUno);
	printf("Numero dos: ");
	scanf("%d", &numeroDos);
	printf("numero tres: ");
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
