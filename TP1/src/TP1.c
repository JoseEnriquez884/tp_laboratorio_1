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
	int factorial;
	int numeroIngresado;
	int i;
	factorial=1;

	numeroIngresado=PedirEntero("ingrese numero para calcular factorial: ");

	for(i=numeroIngresado;i>0;i--)
	{
		factorial=factorial*i;
	}
	printf("el factorial de %d es: %d",numeroIngresado,factorial);

	return EXIT_SUCCESS;
}



