/*
 ============================================================================
 Se ingresan 5 importes. y pais de origen(c para china, u para uruguay, p para paraguay
 CALCLULAR Y MOSTRAR:
 a- minimo importe con su pais
 b promedio importe
 c cantidad de productos de china
 d sobre el minimo encontrado aplicar un desceunto del 10% a dicho importe
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int i;
	int importe;
	char pais;
	int cantidad;
	int acumuladorC;
	int suma;
	int promedio;
	int importeMinimo;
	char paisMinimoUno;
	int descuento;

	int banderaMinimo;

	acumuladorC=0;
	suma=0;

	for(i=0;i<5;i++)
	{
		printf("ingrese pais  ('C' para China, 'U' para Uruguay o 'P' para Paraguay):");
		scanf("%c", &pais);

		printf("cual es el importe del product?");
		scanf("%d", &importe);

		printf("cuanta cantidad de productos llevara? ");
		scanf("%d", &cantidad);

		if(banderaMinimo==0 || importeMinimo>importe)
		{
			importeMinimo=importe;
			paisMinimoUno=pais;
			banderaMinimo=1;
		}


		suma+=importe;


		if(pais == 'c')
		{
			acumuladorC+=cantidad;
		}


	}//fin del for
	descuento= importeMinimo*0.90;
	promedio=suma/i;
	printf("El pais con el importe minimo es %c \n", paisMinimoUno);
	printf("El importe del pais minimo es: %d, " , importeMinimo);
	printf("el promedio del importe total es %d \n", promedio);
	printf("La cantidad de productos de china es: %d \n", acumuladorC);
	printf("Se le aplica un 10% de desc al minimo importe de %d", importeMinimo );
	printf("lo cual equivaldria a: %d" , descuento);


	return 0;
}
