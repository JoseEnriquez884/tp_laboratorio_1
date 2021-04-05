/*
 * Aritmetica.c
 *
 *  Created on: 25 mar. 2021
 *      Author: Jose
 */
#include "Aritmetica.h"

float SumarNumeros(float primerNumero,float segundoNumero)
{
	float resultado;
	resultado=primerNumero+segundoNumero;
	return resultado;
}

float RestarNumeros(float unNumero,float otroNumero)
{
	float resultado;
	resultado=unNumero-otroNumero;
	return resultado;
}

float MultiplicarNumeros(float numeroUno,float numeroDos)
{
	float resultado;
	resultado=numeroUno*numeroDos;

	return resultado;
}
float DividirNumeros(float dividendo,float divisor)
{
	float resultado;
	resultado=dividendo/divisor;

	return resultado;
}
long int CalcularFactorial(int numeroIngresado)
{
	int i;
	long int factorial;
	factorial=1;

	if(numeroIngresado!=0)
	{
		for(i=numeroIngresado;i>0;i--)
		{
			factorial=factorial*i;
		}
	}else
	{
		factorial=1;
	}
	return factorial;
}



