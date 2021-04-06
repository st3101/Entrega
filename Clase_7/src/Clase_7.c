/*
 ============================================================================
 Name        : Clase_7.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define cantidad 5

int main(void) {

	setbuf(stdout,NULL);

	int array[cantidad]={8,5,6,7,10};
	int minimo;
	int i;
	int l;
	int indiceMinimo;
	int aux;
	int paso=0;

for(int f=0;f<cantidad;f++)
{
	for(i=0;i<cantidad;i++)
	{
		if( i==paso || minimo > array[i])
		{
			minimo = array[i];
			indiceMinimo = i;
		}



	}

		for(l=0;l<cantidad;l++)
		{

			aux=array[l+paso];
			array[l+paso]=minimo;
			array[indiceMinimo]=aux;
			paso++;

			break;
		}

}

	printf("\n\nRESPUESTAS\n");
	for(i=0;i<cantidad;i++)
	{
		printf("%d\n",array[i]);
	}

	return EXIT_SUCCESS;
}
