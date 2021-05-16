/*
 ============================================================================
 Name        : TP2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utn.h"
#include "ArrayEmployees.h"

#define QTY_EMPLOYEES 3


int main(void) {
	setbuf(stdout, NULL);

		Employee arrayEmployees[QTY_EMPLOYEES];

		initEmployees(arrayEmployees, QTY_EMPLOYEES);

		int opcion = 0;
		int respuesta;


		char auxChar;
		int auxId = 0;
		char auxName[51];
		char auxLastName[51];
		float auxSalary = 0;
		int auxSector = 0;
		int auxOrder = 1;

		do
		{
		respuesta = utn_getNumero(&opcion, "\n\nMENU EMPLEADOS\n\n1 - ALTAS \n2 - MODIFICAR \n3 - BAJAS\n4 - INFORMAR\n5 - SALIR\n\n\n", "OPCIÓN INVÁLIDA", 1, 5, 2);

		if(respuesta == 0)
		{
			switch(opcion)
			{
			case 1: //ADD EMPLOYEE
				addEmployees(arrayEmployees, QTY_EMPLOYEES, auxId, auxName, auxLastName, auxSalary, auxSector);
				break;
			case 2:	//MODIFY EMPLOYEE
				findEmployeeById(arrayEmployees, QTY_EMPLOYEES, auxId);
				break;
			case 3: //REMOVE EMPLOYEE
				removeEmployee(arrayEmployees, QTY_EMPLOYEES, auxId);
				break;

			case 4: //INFORMAR
				utn_getNumero(&opcion,"\nINFORMES: ELIJA UNA OPCIÓN\n\n1 - EMPLEADOS ORDENADOS POR APELLIDO Y SECTOR\n2 - EMPLEADOS ORDENADOS POR SALARIO\n\n", "OPCIÓN INVÁLIDA", 1, 2, 2);
					if(opcion == 1)
					{
						utn_getNumero(&opcion,"\nINFORMES: ELIJA UN ORDEN\n\n0 - ORDEN ASCENDENTE\n1 - ORDEN DESCENDENTE\n\n", "OPCIÓN INVÁLIDA", 0,1,2);
						if(opcion == 0)
						{
						sortEmployees(arrayEmployees, QTY_EMPLOYEES, auxOrder);
						printEmployees(arrayEmployees, QTY_EMPLOYEES);
						}
						}
						if(opcion ==2)
						{
						printSalaries(arrayEmployees, QTY_EMPLOYEES);

					}

				break;

			case 5: //SALIR
				utn_getCaracter(&auxChar, "Desea salir del sistema? s/n\n", "Opción inválida\n\n", 'n', 's', 2);
					if(auxChar == 's' || auxChar == 'S')
					{
						printf("Saliste del sistema.");
						exit(0);
						break;
					}
					else
					{
						if(auxChar == 'n' || auxChar == 'N')
						{
							main();
						}
					}
				}
			}

		}while(opcion != 5);


		return EXIT_SUCCESS;
}

