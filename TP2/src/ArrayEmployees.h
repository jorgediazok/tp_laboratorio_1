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

//Funci�n que sirve para inicializar los arrays. Parametros: Array y largo de array.
int initEmployees(Employee* list, int len);

//Funci�n que sirve para buscar un array libre para cargar la data. Parametros: Array, largo de array y posicion del indice en el array.
int buscarLibre(Employee* list, int len, int* posicion);

//Funci�n que sirve para cargar empleados en el sistema. Parametros: Array, largo de array y par�metros de llenado de informaci�n.
int addEmployees(Employee* list, int len, int id, char name[],char lastName[],float salary,int sector);

//Funci�n que sirve para encontrar un empleado a trav�s del id: Par�metros: Array, largo de array e id para pasar por par�metro
int findEmployeeById(Employee* list, int len,int id); //Encontrar Empleado

//Funci�n que sirve para eliminar un empleado del sistema. Par�metros: Array, largo de array e id para pasar por par�metro.
int removeEmployee(Employee* list, int len, int id); //Eliminar Empleado

//Funci�n que sirve para imprimir los empleados cargados en el sistema. Par�metros: Array y largo de array.
int printEmployees(Employee* list, int length); //Imprimir Empleados

//Funci�n que sirve para ordenar los empleados cargados en el sistema. Par�metros: Array, largo de array y orden de array.
int sortEmployees(Employee* list, int len, int order); //Ordenar Empleados

//Funci�n que sirve para calcular el valor del total de los salarios y el promedio de los mismos. Par�metros: Array y largo de array
int printSalaries(Employee* list, int length); //Calcular salarios




#endif /* ARRAYEMPLOYEES_H_ */
