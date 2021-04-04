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
	long long int factorialDelPrimerOperando;
	long long int factorialDelSegundoOperando;

	banderaPrimerOperando=FALSE;
	banderaSegundoOperando=FALSE;

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
		opcion=GetInt("Ingrese una opcion: \n","Error, reingrese una opcion valida",1,5);

		switch(opcion)
		{
		case 1:
			primerOperando=GetFloat("Ingrese primer operando: ","Error, reingrese numero valido: ",-1000,1000);
			banderaPrimerOperando=TRUE;
			break;
		case 2:
			segundoOperando=GetFloat("Ingrese segundo operando: ","Error, reingrese numero valido: ",-1000,1000);
			banderaSegundoOperando=TRUE;
			break;
		case 3:

			if(!(banderaPrimerOperando || banderaSegundoOperando))//esta condicion no sirve
			{
				suma=SumarNumeros(primerOperando,segundoOperando);

				resta=RestarNumeros(primerOperando,segundoOperando);

				multiplicacion=MultiplicarNumeros(primerOperando,segundoOperando);

				division=DividirNumeros(primerOperando,segundoOperando);

				factorialDelPrimerOperando=CalcularFactorial(primerOperando);

				factorialDelSegundoOperando=CalcularFactorial(segundoOperando);
			}else
			{
				printf("Se debe cargar 2 valores para poder calcular todas las operaciones.");
			}



			break;
		case 4:

			break;
		}

	}while(opcion!=5);


	return EXIT_SUCCESS;
}



