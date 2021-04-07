/*
 * array.h
 *
 *  Created on: 30 mar. 2021
 *      Author: santi
 */

#ifndef ARRAY_H_
#define ARRAY_H_

int arr_calcularMaximoArrayInt(int* array,int limite,int* resultado);
int arr_calcularMinimoArrayInt(int* array,int limite,int* resultado);
int arr_calcularPromedioArrayInt(int* array,int limite,float* resultado);
int arr_calcularSumaInt(int* array,int limite, int* resultado);
int arr_calcularMinimoIndiceArrayInt(int* array,int limite,int* rMinimo,int* rIndice);

int arr_ordenamientoBubble(int* array,int limite);

#endif /* ARRAY_H_ */
