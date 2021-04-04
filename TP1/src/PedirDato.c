/*
 * PedirDato.c
 *
 *  Created on: 26 mar. 2021
 *      Author: Jose
 */

#include <stdio.h>
#include "PedirDato.h"

int GetInt(char texto[],char textoError[],int minimo,int maximo)
{
	int numeroIngresado;
	printf("%s",texto);
	scanf("%d",&numeroIngresado);
	while(numeroIngresado<minimo || numeroIngresado>maximo)
	{
		printf("%s",textoError);
		scanf("%d",&numeroIngresado);
	}

	return numeroIngresado;
}

float GetFloat(char texto[],char textoError[],int minimo,int maximo)
{
	float numeroIngresado;
	printf("%s",texto);
	scanf("%f",&numeroIngresado);
	while(numeroIngresado<minimo || numeroIngresado>maximo)
	{
		printf("%s",textoError);
		scanf("%f",&numeroIngresado);
	}

	return numeroIngresado;
}
