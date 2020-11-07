#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "Employee.h"
#include "parser.h"

int parser_EmployeeFromText(FILE* pFile, LinkedList* pArrayListEmployee)
{
    char nombre[50];
    int size;
    char sueldo[50];
    char horasTrabajadas[50];
    int exito=0;
    char id[50];
    int i=0;
    Employee* EmpleadoAux[TAM];

    do
    {
        size=fscanf(pFile,"%[^,],%[^,],%[^,],%[^\]\n",id,nombre,horasTrabajadas,sueldo);

        if(size==4)
        {
            if(!(EmpleadoAux[i]=employee_new()))
            {
                printf("No hay espacio");
            }
            else
            {
                EmpleadoAux[i]=employee_newParametros(id,nombre,horasTrabajadas,sueldo);

                ll_add(pArrayListEmployee,EmpleadoAux[i]);

                i++;

                exito=1;

            }
        }
    }while(!feof(pFile));

    fclose(pFile);

    return exito;

}

int parser_EmployeeFromBinary(FILE* pFile, LinkedList* pArrayListEmployee)
{
    char nombre[50];
    int size;
    char sueldo[50];
    char horasTrabajadas[50];
    int i=0;
    char id[50];
    int exito=0;
    Employee* EmpleadoAux[TAM];

    do
    {

        size=fscanf(pFile,"%[^,], %[^,], %[^,], %[^\n]\n",id,nombre,horasTrabajadas,sueldo);

        if(size==4)
        {
           if(EmpleadoAux[i]!=employee_new())
            {
                printf("sin lugar");
                break;
            }
            else
            {
                EmpleadoAux[i]=employee_newParametros(id,nombre,horasTrabajadas,sueldo);

                ll_add(pArrayListEmployee,EmpleadoAux[i]);

                i++;

                exito=1;

            }
        }
    }while(!feof(pFile));

    fclose(pFile);

    return exito;

}
