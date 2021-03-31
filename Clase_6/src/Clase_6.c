/*
 ============================================================================
 Name        : Clase_6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "array.h"
#define CANTIDAD_EDAD 3



int main(void)
{
	setbuf(stdout,NULL);

	int arrayEdades[CANTIDAD_EDAD];
	int maximo;
	int minimo;
	int suma;
	int i;
	float promedio;

	for(i=0;i<CANTIDAD_EDAD;i++)
	{
		printf("Ingrese la %d° edad: ",i+1);
		fflush(stdin);
		scanf("%d",&arrayEdades[i]);
	}

	if(arr_calcularMaximoArrayInt(arrayEdades,CANTIDAD_EDAD,&maximo)==0)
	{
		printf("La edad maxima es: %d",maximo);
	}

	if(arr_calcularMinimoArrayInt(arrayEdades,CANTIDAD_EDAD, &minimo)==0)
	{
		printf("\nLa edad minima es %d: ",minimo);
	}

	if(arr_calcularPromedioArrayInt(arrayEdades,CANTIDAD_EDAD, &promedio)==0)
	{
		printf("\nEl promedio es %.2f: ",promedio);
	}

	if(arr_calcularSumaInt(arrayEdades,CANTIDAD_EDAD,&suma)==0)
	{
		printf("\nLa suma es: %d",suma);
	}

	return EXIT_SUCCESS;
}
