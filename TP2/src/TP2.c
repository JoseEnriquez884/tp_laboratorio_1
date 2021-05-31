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

#define LEN 1000

int main(void)
{
	setbuf(stdout,NULL);
	eEmployee list[LEN];
	int altaEmpleado;
	int opcion;
	int bajaDeEmpleado;
	int idEmpleado;
	int opcion4;
	int opcionDeOrdenamiento;
	int modificarEmpleado;
	int ordenamientoEmpleados;
	float salarioTotal;
	float promediosSalarios;
	int contadorEmpleadosMayoresQueElPromedio;
	//initEmployees(list,LEN);
	HardcodeoEmployees(list,LEN);


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
				modificarEmpleado=ModifyEmployee(list,LEN);
				switch(modificarEmpleado)
				{
					case -1:
						printf("no se encontro el id ingresado\n");
						break;
					case 0:
						printf("se cancelo la modificacion\n");
						break;
					case 1:
						printf("se modifico con exito!\n");
						break;
				}
				break;
			case 3:
				printEmployees(list,LEN);
				idEmpleado=GetInt("ingrese id del empleado que desea eliminar: ","error, reingrese id valido: ",1,1000);
				bajaDeEmpleado=removeEmployee(list,LEN,idEmpleado);
				switch(bajaDeEmpleado)
				{
					case -1:
						printf("no se encontro el id del empleado.\n");
						break;
					case 1:
						printf("se dio de baja con exito\n");
						break;
					case 0:
						printf("se cancelo la baja del empleado\n");
						break;
				}
				break;
			case 4:
				do
				{
					opcion4=GetInt(	"1. mostrar listado de empleados ordenados alfabeticamente por apellido y sector\n"
							"2. Total y promedio de los salarios, y cuántos empleados superan el salario promedio,\n"
							"3. volver.\n"
							"ingrese opcion: ","error, reingrese opcion valida: ",1,3);
					switch(opcion4)
					{
					case 1:
						opcionDeOrdenamiento=GetInt("¿De que manera desea ver ordenados los empleados?\n"
													"1. ascendente\n2. descendente\n",
													"error, reingrese opcion valida: ",1,2);
						ordenamientoEmpleados=sortEmployees(list,LEN,opcionDeOrdenamiento);
						if(ordenamientoEmpleados!=0)
						{
							printf("se ordenaron todos los empleados!\n");
						}else
						{
							printf("no se pudieron ordenar los empleados!\n ");
						}
						printEmployees(list,LEN);
						break;
					case 2:
						salarioTotal=SalaryTotalEmployees(list,LEN);
						promediosSalarios=AverageSalary(list,LEN);
						contadorEmpleadosMayoresQueElPromedio=CountExceedAverageSalary(list,LEN,promediosSalarios);
						printf("total de los salarios: %.2f\n",salarioTotal);
						printf("promedios de los salarios: %.2f\n",promediosSalarios);
						printf("cantidad de empleados que superan el salario promedio: %d\n",contadorEmpleadosMayoresQueElPromedio);
						break;
					}
				}while(opcion4!=3);
				break;
		}

	}while(opcion!=5);

	return EXIT_SUCCESS;
}
