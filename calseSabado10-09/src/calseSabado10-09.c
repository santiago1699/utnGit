/*
 ============================================================================
 Name        : calseSabado10-09.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio_ext.h>
#define TAM 5

void InicializarVector(int vector[], int size, int inicial);
void CargarVector(int vector[], int size);
int main()
{
    int numero;
    int lista[TAM];//={5,7,1,9,10};
    char seguir;
    int posicion;
    int acumulador;

    acumulador = 0;

    InicializarVector(lista, TAM, -1);


    CargarVector(lista,TAM);


    for(int i=0; i<TAM; i++)
    {
       if(lista[i]!=-1)
       {
           acumulador+=lista[i];
       }
    }

    printf("El total acumulado es: %d\n", acumulador);

    printf("La lista de numeros es: \n");
    for(int o=0; o<TAM; o++)
    {
        if(lista[o]!=-1)
        {
             printf("%d\n", lista[o]);
        }

    }


    return 0;
}


void InicializarVector(int vector[], int size, int inicial)
{
    for(int i = 0; i<size; i++)
    {
        vector[i] = inicial; //valor ilogico para inicializar
    }
}


void CargarVector(int vector[], int size)
{
    int numero;
    int posicion;
    char seguir;
    do
    {
        printf("Ingrese un numero: ");
        scanf("%d", &numero);
        printf("Ingrese la posicion dentro de la lista (1 a 5): ");
        scanf("%d", &posicion);
        /*validar >0 y <= size*/

        vector[posicion-1] = numero;

        printf("Quiere ingresar otro numero? s/n");
        __fpurge(stdin);
        scanf("%c", &seguir);

    }while(seguir=='s');
}

