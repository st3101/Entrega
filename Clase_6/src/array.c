/*
 * array.c
 *
 *  Created on: 30 mar. 2021
 *      Author: santi
 */

#include <stdio.h>
#include <stdlib.h>

int arr_calcularMaximoArrayInt(int* array,int limite,int* resultado)
{
	int i;
	int maximo;
	int retorno=1;

	for(i=0;i<limite;i++)
	{
		if(array[i]>maximo||i==0)
		{
			maximo=array[i];
			retorno=0;
		}
	}

	*resultado=maximo;

	return retorno;
}

int arr_calcularMinimoArrayInt(int* array,int limite,int* resultado)
{
	int i;
	int minimo;
	int retorno=1;

	for(i=0;i<limite;i++)
	{
		if(array[i]<minimo||i==0)
		{
			minimo=array[i];
			retorno=0;
		}
	}

	*resultado=minimo;

	return retorno;
}

int arr_calcularPromedioArrayInt(int* array,int limite,float* resultado)
{
	int i;
	float promedio;
	int acumulador=0;
	int retorno=1;

	for(i=0;i<limite;i++)
	{
		acumulador= acumulador + array[i];
		retorno=0;
	}

	promedio= acumulador / i;

	*resultado=promedio;

	return retorno;
}
int arr_calcularSumaInt(int* array,int limite, int* resultado)
{
		int i;

		int sumador=0;
		int retorno=1;

		for(i=0;i<limite;i++)
		{
			sumador = sumador + array[i];
			retorno=0;
		}

		*resultado=sumador;

		return retorno;
}
