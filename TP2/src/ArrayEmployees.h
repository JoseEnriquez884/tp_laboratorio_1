/*
 * ArrayEmployees.h
 *
 *  Created on: 12 may. 2021
 *      Author: Jose
 */
#include "Inputs.h"

#ifndef ARRAYEMPLOYEES_H_
#define ARRAYEMPLOYEES_H_

#define VACIO 0
#define OCUPADO -1

typedef struct
{
	int id;
	char name[51];
	char lastName[51];
	float salary;
	int sector;
	int isEmpty;
}eEmployee;

int ModifyEmployee(eEmployee list[],int);
void initEmployees(eEmployee list[], int len);//hecho
int addEmployee(eEmployee list[],int len,int id,char name[20],char lastName[20],float salary,int sector);//hecho
int GetEmployee(eEmployee list[],int len);//hecho
int GenerateId(eEmployee list[],int len);//hecho
int SearchFree(eEmployee list[],int len);//hecho
int findEmployeeById(eEmployee list[], int len,int id);//hecho
int removeEmployee(eEmployee list[], int len, int id);
int sortEmployees(eEmployee list[], int len, int order);
int printEmployees(eEmployee list[], int length);//hecho
void PrintOneEmployee(eEmployee);//hecho


#endif /* ARRAYEMPLOYEES_H_ */
