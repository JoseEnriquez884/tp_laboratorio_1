/*
 * ArrayEmployees.c
 *
 *  Created on: 12 may. 2021
 *      Author: Jose
 */
#include <stdio.h>
#include <string.h>
#include "ArrayEmployees.h"

int ModifyEmployee(eEmployee list[],int)
{
	int i;
	int retorno;



	return retorno;
}

int findEmployeeById(eEmployee list[], int len,int id)
{
	int i;
	int retorno;
	retorno=-1;
	for(i=0;i<len;i++)
	{
		if(id==list[i].id)
		{
			retorno=i;
			break;
		}
	}
	return retorno;
}

int printEmployees(eEmployee list[], int length)
{
	int i;
	int retorno;
	retorno=-1;
	for(i=0;i<length;i++)
	{
		if(list[i].isEmpty==OCUPADO)
		{
			PrintOneEmployee(list[i]);
			retorno=1;
		}
	}
	return retorno;
}

void PrintOneEmployee(eEmployee unEmpleado)
{
	printf("%d %s %s %.2f %d\n",unEmpleado.id,unEmpleado.name,unEmpleado.lastName,unEmpleado.salary,unEmpleado.sector);
}

int SearchFree(eEmployee list[],int len)
{
	int i;
	int index;
	index=OCUPADO;
	for(i=0;i<len;i++)
	{
		if(list[i].isEmpty==VACIO)
		{
			index=i;
			break;
		}
	}
	return index;
}

int GenerateId(eEmployee list[],int len)
{
	int i;
	int retornoId;
	int idMaximo;
	for(i=0;i<len;i++)
	{
		if(i==0 || list[i].id>idMaximo)
		{
			idMaximo=list[i].id;
		}
	}
	retornoId=idMaximo+1;
	return retornoId;
}

int GetEmployee(eEmployee list[],int len)
{
	int id;
	char name[20];
	char lastName[20];
	float salary;
	int sector;
	int newEmployee;

	GetString("Ingrese nombre: ",name);
	GetString("Ingrese apellido: ",lastName);
	salary=GetFloat("ingrese salario: ","Error, reingrese salario valido",1,50000);
	sector=GetInt("Ingrese sector: ","Error, reingrese sector valido: ",1,100);
	id=GenerateId(list,len);

	newEmployee=addEmployee(list,len,id,name,lastName,salary,sector);

	return newEmployee;
}

int addEmployee(eEmployee list[],int len,int id,char name[20],char lastName[20],float salary,int sector)
{
	int i;
	int index;
	index=SearchFree(list,len);
	if(index!=OCUPADO)
	{
		for(i=0;i<len;i++)
		{
			list[index].id=id;
			strcpy(list[index].name,name);
			strcpy(list[index].lastName,lastName);
			list[index].salary=salary;
			list[index].sector=sector;
			list[index].isEmpty=OCUPADO;
		}
	}

	return index;
}

void initEmployees(eEmployee list[], int len)
{
	int i;
	for(i=0;i<len;i++)
	{
		list[i].isEmpty=VACIO;
		list[i].id=0;
	}
}

