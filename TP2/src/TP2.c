/*
 ============================================================================
 Name        : TP2.c
 Author      : Enriquez Jose
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "ArrayEmployees.h"

#define LEN 2

int main(void)
{
	setbuf(stdout,NULL);
	eEmployee list[LEN];
	int altaEmpleado;
	int opcion;
	int listado;
	initEmployees(list,LEN);


	do
	{
		opcion=GetInt(	"1. Alta de empleado\n"
						"2. Modificar empleado\n"
						"3. Baja de empleado\n"
						"4. Listados y promedio\n"
						"5. Salir\n"
						"Ingrese opcion: ","Error, reingrese opcion valida",1,5);

		switch(opcion)
		{
			case 1:
				altaEmpleado=GetEmployee(list,LEN);
				if(altaEmpleado!=OCUPADO)
				{
					printf("Se cargo con exito\n");
				}else
				{
					printf("No hay espacio para cargar un empleado\n");
				}
				break;
			case 2:
				break;
			case 3:
				break;
			case 4:
				listado=printEmployees(list,LEN);
				if(listado==-1)
				{
					printf("No hay nada para mostrar por ahora");
				}
				break;
		}

	}while(opcion!=5);

	return EXIT_SUCCESS;
}
