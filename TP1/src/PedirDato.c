/*
 * PedirDato.c
 *
 *  Created on: 26 mar. 2021
 *      Author: Jose
 */

#include <stdio.h>
#include "PedirDato.h"

int PedirEntero(char texto[])
{
	int numeroIngresado;
	printf("%s",texto);
	scanf("%d",&numeroIngresado);

	return numeroIngresado;
}
