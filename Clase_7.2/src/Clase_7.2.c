/*
 ============================================================================
 Name        : 2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "array.h"

#define CANTIDAD 10

int main(void) {

	setbuf(stdout,NULL);
	int iteraciones;

	int array[CANTIDAD]={7,11,4,5,55,22,1,7,99,65};

	iteraciones=arr_ordenamientoBubble(array,CANTIDAD);

	printf("\n\nRESPUESTAS\n");
	for(int i=0;i<CANTIDAD;i++)
	{
		printf("%d\n",array[i]);
	}
	printf("\n\nRESPUESTAS 2\n");
	printf("%d",iteraciones);
}
