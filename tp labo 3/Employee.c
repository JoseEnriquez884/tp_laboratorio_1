#include <stdlib.h>
#include "Employee.h"
#include <string.h>

int employee_CompareByName(Employee* e1,Employee* e2)
{
    return strcmp(e1->nombre,e2->nombre);
}
int employee_CompareById(Employee* e1,Employee* e2)
{
    int comp=0;
    if(e1->id>e2->id)
    {
        comp=1;
    }
    else
    {
        if(e1->id<e2->id)
        {
            comp=-1;
        }
    }
    return comp;
}

int employee_getId(Employee* this,int* id)
{
    int getteo=0;
    if(this!=NULL && id!=NULL)
    {
        *id=this->id;
        getteo = 1;
    }
    return getteo;
}

int employee_setId(Employee* this,int id)
{
    int setteo=0;
    if(this!=NULL && id!=-1)
    {
        this->id=id;
        setteo = 1;
    }
    return setteo;
}

int employee_setNombre(Employee* this,char* nombre)
{
    int setteo=0;
    if(this!=NULL && nombre!=NULL)
    {
        strcpy(this->nombre,nombre);
        setteo = 1;
    }
    return setteo;
}

int employee_getNombre(Employee* this,char* nombre)
{
    int getteo=0;
    if(this!=NULL && *nombre!='\0')
    {
        strcpy(nombre,this->nombre);
        getteo = 1;
    }
     return getteo;
}

int employee_setHorasTrabajadas(Employee* this,int horasTrabajadas)
{
    int setteo=0;
    if(this!=NULL && horasTrabajadas>0)
    {
        this->horasTrabajadas=horasTrabajadas;
        setteo = 1;
    }
    return setteo;
}

int employee_getHorasTrabajadas(Employee* this,int* horasTrabajadas)
{
    int getteo=0;
    if(this!=NULL && horasTrabajadas!=NULL)
    {
        *horasTrabajadas=this->horasTrabajadas;
        getteo = 1;
    }
    return getteo;
}

int employee_setSueldo(Employee* this,int sueldo)
{
    int setteo=0;
    if(this!=NULL && sueldo>0)
    {
        this->sueldo=sueldo;
        setteo = 1;
    }
    return setteo;
}
int employee_getSueldo(Employee* this,int* sueldo)
{
    int getteo=0;
    if(this!=NULL && sueldo!=NULL)
    {
        *sueldo=this->sueldo;
        getteo = 1;
    }
    return getteo;
}
Employee* employee_new()
{
    Employee* nuevoEmpleado=NULL;
    nuevoEmpleado=(Employee*)malloc(sizeof(Employee));
   return nuevoEmpleado;
}
Employee* employee_newParametros(char* idStr,char* nombreStr,char* horasTrabajadasStr,char* sueldoStr)
{
    Employee* EmpleadoAux;
    int sueldo;
    int horasTrabajadasInt;
    int id;

    EmpleadoAux=employee_new();

    if(EmpleadoAux==NULL)
    {
        printf("No hay espacio");
    }
    else
    {
        id=atoi(idStr);
        employee_setId(EmpleadoAux,id);
        employee_setNombre(EmpleadoAux,nombreStr);
        sueldo=atoi(sueldoStr);
        employee_setSueldo(EmpleadoAux,sueldo);
        horasTrabajadasInt=atoi(horasTrabajadasStr);
        employee_setHorasTrabajadas(EmpleadoAux,horasTrabajadasInt);
    }

    return EmpleadoAux;
}
