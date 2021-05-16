/*
 * ArrayEmployees.h
 *
 *  Created on: 15 may. 2021
 *      Author: Jorge
 */

#ifndef ARRAYEMPLOYEES_H_
#define ARRAYEMPLOYEES_H_

typedef struct
{
	int id;
	char name[51];
	char lastName[51];
	float salary;
	int sector;
	int isEmpty;
}Employee;

//Función que sirve para inicializar los arrays. Parametros: Array y largo de array.
int initEmployees(Employee* list, int len);

//Función que sirve para buscar un array libre para cargar la data. Parametros: Array, largo de array y posicion del indice en el array.
int buscarLibre(Employee* list, int len, int* posicion);

//Función que sirve para cargar empleados en el sistema. Parametros: Array, largo de array y parámetros de llenado de información.
int addEmployees(Employee* list, int len, int id, char name[],char lastName[],float salary,int sector);

//Función que sirve para encontrar un empleado a través del id: Parámetros: Array, largo de array e id para pasar por parámetro
int findEmployeeById(Employee* list, int len,int id); //Encontrar Empleado

//Función que sirve para eliminar un empleado del sistema. Parámetros: Array, largo de array e id para pasar por parámetro.
int removeEmployee(Employee* list, int len, int id); //Eliminar Empleado

//Función que sirve para imprimir los empleados cargados en el sistema. Parámetros: Array y largo de array.
int printEmployees(Employee* list, int length); //Imprimir Empleados

//Función que sirve para ordenar los empleados cargados en el sistema. Parámetros: Array, largo de array y orden de array.
int sortEmployees(Employee* list, int len, int order); //Ordenar Empleados

//Función que sirve para calcular el valor del total de los salarios y el promedio de los mismos. Parámetros: Array y largo de array
int printSalaries(Employee* list, int length); //Calcular salarios




#endif /* ARRAYEMPLOYEES_H_ */
