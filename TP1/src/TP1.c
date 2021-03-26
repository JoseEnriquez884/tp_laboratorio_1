/*
 ============================================================================
 Name        : TP1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "PedirDato.h"

int main(void)
{
	setbuf(stdout,NULL);
	int opcion;
	do
	{
		printf("1. ALta\n");
		printf("2. Bajas\n");
		printf("3. Modificar\n");
		printf("4. Salir\n");
		printf("Elija una opcion: ");
		scanf("%d", &opcion);
		switch(opcion)
		{
		case 1:
			printf("Estoy dando de alta\n");
			break;
		case 2:
			printf("Estoy dando de baja\n");
			break;
		case 3:
			printf("Estoy modificando\n");
			break;
		}

	}while(opcion!=4);


	return EXIT_SUCCESS;
}



