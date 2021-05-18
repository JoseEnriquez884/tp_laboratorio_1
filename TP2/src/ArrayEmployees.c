/*
 * ArrayEmployees.c
 *
 *  Created on: 12 may. 2021
 *      Author: Jose
 */
#include <stdio.h>
#include <string.h>
#include "ArrayEmployees.h"

void HardcodeoEmployees(eEmployee list[],int len)
{
	int i;
	int id[]={1,2,3,4,5,6,7,8,9,10};
	char name[][51]={"mario","brenda","agustin","martin","camila","florencia","emanuel","roberto","lucia","pepe"};
	char lastName[][51]={"fernandez","rodriguez","perez","bishop","enriquez","lopez","coria","garcia","villalba","varela"};
	float salary[]={20.000,15.300,16.400,21.300,30.100,44.000,48.500,43.000,15000,10.000};
	int sector[]={1,20,15,14,16,19,20,17,10,9};
	int isEmpty[]={OCUPADO,OCUPADO,OCUPADO,OCUPADO,OCUPADO,OCUPADO,OCUPADO,OCUPADO,OCUPADO,OCUPADO};

	for(i=0;i<len;i++)
	{
		list[i].id=id[i];
		strcpy(list[i].name,name[i]);
		strcpy(list[i].lastName,lastName[i]);
		list[i].salary=salary[i];
		list[i].sector=sector[i];
		list[i].isEmpty=isEmpty[i];
	}


}

int ModifyEmployee(eEmployee list[],int len)
{
	//int i;
	int retorno;
	int opcion;
	int idIngresado;
	char auxName[51];
	char auxLastName[51];
	float auxSalary;
	int auxSector;
	char respuesta;
	int index;
	retorno=-1;

	//puedo modificar nombre, apellido, salario o sector
	printEmployees(list,len);
	idIngresado=GetInt("ingrese id del empleado que desea modificar: ","error, reingrese id valido: ",1,1000);
	index=findEmployeeById(list,len,idIngresado);
	if(index!=-1)
	{
		opcion=GetInt(	"1. modificar nombre\n"
				"2. modificar apellido\n"
				"3. modificar salario\n"
				"4. modificar sector\n"
				"ingrese opcion: ","error, reingrese opcion valida: ",1,4);
		switch(opcion)
		{
		case 1:
			GetString("ingrese nuevo nombre: ",auxName);
			respuesta=GetRespuesta("esta seguro de modificar el nombre?: ","error, reingrese respuesta valida");
			if(respuesta=='s')
			{
				strcpy(list[index].name,auxName);
				retorno=1;
			}else
			{
				retorno=0;
			}
			break;
		case 2:
			GetString("ingrese nuevo apellido: ",auxLastName);
			respuesta=GetRespuesta("esta seguro de modificar el apellido?: ","error, reingrese respuesta valida");
			if(respuesta=='s')
			{
				strcpy(list[index].lastName,auxLastName);
				retorno=1;
			}else
			{
				retorno=0;
			}
			break;
		case 3:
			auxSalary=GetFloat("ingrese nuevo salario: ","error, reingrese salario valido: ",1,50000);
			respuesta=GetRespuesta("esta seguro de modificar el salario?: ","error, reingrese respuesta valida: ");
			if(respuesta=='s')
			{
				list[index].salary=auxSalary;
				retorno=1;
			}else
			{
				retorno=0;
			}
			break;
		case 4:
			auxSector=GetInt("ingrese nuevo sector: ","error, reingrese sector valido: ",1,100);
			respuesta=GetRespuesta("esta seguro de modificar el sextor?: ","error, reingrese respuesta valida: ");
			if(respuesta=='s')
			{
				list[index].sector=auxSector;
				retorno=1;
			}else
			{
				retorno=0;
			}
			break;
		}
	}

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
	printf("%d %s %s %.3f %d\n",unEmpleado.id,unEmpleado.name,unEmpleado.lastName,unEmpleado.salary,unEmpleado.sector);
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

