/*
 * Inputs.c
 *
 *  Created on: 3 may. 2021
 *      Author: Jose
 */
#include "Inputs.h"

void GetString(char mensaje[], char cadena[])
{
	printf("%s", mensaje);
	fflush(stdin);
	scanf("%[^\n]",cadena);
}

int GetIntSinValidar(char texto[])
{
	int retornoInt;

	printf("%s",texto);
	fflush(stdin);
	scanf("%d",&retornoInt);
	return retornoInt;
}

int GetInt(char texto[],char textoError[],int minimo,int maximo)
{
	int retornoInt;

	printf("%s",texto);
	fflush(stdin);
	scanf("%d",&retornoInt);

	while(retornoInt<minimo || retornoInt>maximo)
	{
		printf("%s",textoError);
		fflush(stdin);
		scanf("%d",&retornoInt);
	}

	return retornoInt;
}

float GetFloat(char texto[],char textoError[],int minimo,int maximo)
{
	float retornoFloat;
	printf("%s",texto);
	fflush(stdin);
	scanf("%f",&retornoFloat);

	while(retornoFloat<minimo || retornoFloat>maximo)
	{
		printf("%s",textoError);
		fflush(stdin);
		scanf("%f",&retornoFloat);
	}

	return retornoFloat;
}

char GetRespuesta(char texto[],char textoError[])
{
	char caracterIngresado;

	printf("%s",texto);
	fflush(stdin);
	scanf("%c",&caracterIngresado);
	while(caracterIngresado!='s' && caracterIngresado!='n')
	{
		printf("%s",textoError);
		fflush(stdin);
		scanf("%c",&caracterIngresado);
	}
	return caracterIngresado;
}

char GetChar(char mensaje[])
{
    char dato;

    printf(mensaje);
    fflush(stdin);
    scanf("%c", &dato);

    return dato;
}
