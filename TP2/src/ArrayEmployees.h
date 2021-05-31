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
#define UP 1
#define DOWN 0

typedef struct
{
	int id;
	char name[51];
	char lastName[51];
	float salary;
	int sector;
	int isEmpty;
}eEmployee;

/** \brief Inicializa el campo isEmpty en VACIO(0) y el id tambien en 0
* \param eEmployee list[] array de empleados
* \param int len es el tamaño del array de empleados
*/
void initEmployees(eEmployee list[],int len);

/** \brief genera en memoria en forma de hardcodeo 10 empleados
* \param eEmployee list[] array de empleados
* \param int len es el tamaño del array de empleados
*/
void HardcodeoEmployees(eEmployee[],int);//(esta funcion fue usada para probar)

/** \brief modifica un empleado en memoria
* \param eEmployee list[] array de empleados
* \param int Es el tamaño del array de empleados
*/
int ModifyEmployee(eEmployee list[],int);

/** \brief Da de alta un empleado en la primer posicion libre
* \param eEmployee list[] array de empleados
* \param int len es el tamaño del array de empleados
* \param int id numero de identificacion de un empleado
* \param char name[20] Nombre de un empleado
* \param char lastName[20] Apellido de un empleado
* \param float salary Sueldo de un empleado
* \param int sector Numero del sector de un empleado
* \return int retorna el indice en caso de que haya espacio para dar de alta un empleado o retorna OCUPADO(-1)
*  si no hay espacio
*/
int addEmployee(eEmployee list[],int len,int id,char name[20],char lastName[20],float salary,int sector);
/** \brief Pide los datos para poder cargar un empleado
* \param eEmployee list[] array de empleados
* \param int len Es el tamaño del array de empleados
* \return int retorna el indice si encontro espacio para cargar un empleado o -1 si no lo hay
*/
int GetEmployee(eEmployee list[],int len);

/** \brief Genera de forma automatica el id para un empleado
* \param eEmployee list[] array de empleados
* \param int len Es el tamaño del array de empleados
* \return int Retorna el numero del id del empleado
*/
int GenerateId(eEmployee list[],int len);

/** \brief Busca la primer posicion libre en el array de empleados
* \param eEmployee list[] array de empleados
* \param int len Es el tamaño del array de empleados
* \return int Retorna el indice si encontro una posicion libre o sino devuelve -1 si no encontro lugar libre
*/
int SearchFree(eEmployee list[],int len);

/** \brief Realiza la busqueda de un empleado mediante su id
* \param eEmployee list[] array de empleados
* \param int len Es el tamaño del array de empleados
* \param int id numero de id del empleado que va a buscar
* \return int Retorna la posicion del empleado o -1 si no lo encontro
*/
int findEmployeeById(eEmployee list[], int len,int id);

/** \brief Elimina un empleado de manera logica
* \param eEmployee list[] array de empleados
* \param int len Es el tamaño del array de empleados
* \param int id numero de id del empleado que va a eliminar
* \return int Retorna -1 si no encontro el empleado a eliminar
* 					   0 si se cancelo la baja del empleado
* 					   1 si se dio de baja con exito
*/
int removeEmployee(eEmployee list[], int len, int id);

/** \brief Ordena los empleados por apellido y sector
* \param eEmployee list[] array de empleados
* \param int len Es el tamaño del array de empleados
* \param int order Numero entero que indica si se va ordenar de forma ascendente(UP=1) o descendente (DOWN=0)
* \return int Retorna 1 si pudo ordenar o 0 si no pudo
*/
int sortEmployees(eEmployee list[], int len, int order);

/** \brief Muestra el listado de empleados
* \param eEmployee list[] array de empleados
* \param int length Es el tamaño del array de empleados
* \return int Retorna -1 si no pudo mostrar o 1 si pudo
*/
int printEmployees(eEmployee list[], int length);

/** \brief Muestra un empleado
* \param eEmployee un solo empleado
*/
void PrintOneEmployee(eEmployee);

/** \brief Acumula todos los sueldos de los empleados
* \param eEmployee list[] array de empleados
* \param int len Es el tamaño del array de empleados
* \return float Retorna la suma total de todos los sueldos de los empleados
*/
float SalaryTotalEmployees(eEmployee list[],int len);

/** \brief Se encarga de contar todos los empleados
* \param eEmployee list[] array de empleados
* \param int len Es el tamaño del array de empleados
* \return int Retorna la cantidad de empleados
*/
int CountEmployees(eEmployee list[],int len);

/** \brief Calcula el sueldo promedio de los empleados
* \param eEmployee list[] array de empleados
* \param int len Es el tamaño del array de empleados
* \return float Retorna el promedio de sueldos
*/
float AverageSalary(eEmployee list[],int len);

/** \brief Se encarga de contar los empleados que superan el sueldo promedio
* \param eEmployee list[] array de empleados
* \param int len Es el tamaño del array de empleados
* \param float averageSalary Sueldo promedio
* \return int Retorna la cantidad de empleados que superen el sueldo promedio
*/
int CountExceedAverageSalary(eEmployee list[],int len,float averageSalary);

#endif /* ARRAYEMPLOYEES_H_ */
