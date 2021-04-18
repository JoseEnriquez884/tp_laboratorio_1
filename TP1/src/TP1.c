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
#include "Aritmetica.h"
#include <limits.h>

#define TRUE 1
#define FALSE 0

int main(void)
{
	setbuf(stdout,NULL);
	int opcion;
	float primerOperando;
	float segundoOperando;
	int banderaPrimerOperando;
	int banderaSegundoOperando;
	float suma;
	float resta;
	float multiplicacion;
	float division;
	long int factorialDelPrimerOperando;
	long int factorialDelSegundoOperando;
	int banderaDeOperaciones;

	banderaPrimerOperando=FALSE;
	banderaSegundoOperando=FALSE;
	banderaDeOperaciones=FALSE;

	do
	{
		if(banderaPrimerOperando==FALSE)
		{
			printf("1. Ingresar 1er operando (A=x)\n");
		}else
		{
			printf("1. Ingresar 1er operando (A=%.2f)\n",primerOperando);
		}


		if(banderaSegundoOperando==FALSE)
		{
			printf("2. Ingresar 2do operando (B=y)\n");
		}else
		{
			printf("2. Ingresar 2do operando (B=%.2f)\n",segundoOperando);
		}

		printf("3. Calcular todas las operaciones\n");
		printf("4. Informar resultados\n");
		printf("5. Salir\n");
		opcion=GetInt("Ingrese una opcion: \n","Error, reingrese una opcion valida: ",1,5);

		switch(opcion)
		{
		case 1:
			primerOperando=GetFloat("Ingrese primer operando: ","Error, reingrese numero valido: ",INT_MIN,INT_MAX);
			banderaPrimerOperando=TRUE;
			break;
		case 2:
			segundoOperando=GetFloat("Ingrese segundo operando: ","Error, reingrese numero valido: ",INT_MIN,INT_MAX);
			banderaSegundoOperando=TRUE;
			break;
		case 3:

			if(banderaPrimerOperando==TRUE && banderaSegundoOperando==TRUE)
			{
				suma=SumarNumeros(primerOperando,segundoOperando);
				resta=RestarNumeros(primerOperando,segundoOperando);
				multiplicacion=MultiplicarNumeros(primerOperando,segundoOperando);
				division=DividirNumeros(primerOperando,segundoOperando);
				factorialDelPrimerOperando=CalcularFactorial(primerOperando);
				factorialDelSegundoOperando=CalcularFactorial(segundoOperando);
				printf("\nSe realizaron todos los calculos.\n\n");
				banderaDeOperaciones=TRUE;
			}else
			{
				printf("\nSe deben cargar 2 valores para poder calcular todas las operaciones.\n\n");
			}
			break;
		case 4:
			if(banderaDeOperaciones==TRUE)
			{
				printf("El resultado de %.2f + %.2f es: %.2f\n",primerOperando,segundoOperando,suma);
				printf("El resultado de %.2f - %.2f es: %.2f\n",primerOperando,segundoOperando,resta);
				if(segundoOperando!=0)
				{
					printf("El resultado de %.2f / %.2f es: %.2f\n",primerOperando,segundoOperando,division);
				}else
				{
					printf("No se puede dividir por 0.\n");
				}
				printf("El resultado de %.2f * %.2f es: %.2f\n",primerOperando,segundoOperando,multiplicacion);
				if(primerOperando<0 || primerOperando!=(int)primerOperando || segundoOperando<0 || segundoOperando!=(int)segundoOperando)
				{
					printf("No se puede calcular el factorial porque es negativo o decimal.\n");
				}else
				{
					printf("El factorial de %.2f es: %ld y El factorial de %.2f es: %ld\n",primerOperando,factorialDelPrimerOperando,segundoOperando,factorialDelSegundoOperando);
				}
			}else
			{
				printf("\nNo se puede mostrar los resultados sin antes haber calculado todas las operaciones.\n\n");
			}
			banderaDeOperaciones=FALSE;
			break;
		}

	}while(opcion!=5);


	return EXIT_SUCCESS;
}



