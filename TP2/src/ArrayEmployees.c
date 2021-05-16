/*
 * ArrayEmployees.c
 *
 *  Created on: 15 may. 2021
 *      Author: Jorge
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "utn.h"
#include "ArrayEmployees.h"


//INICIALIZAR ARRAY DE EMPLEADOS

int initEmployees(Employee* list, int len)
{
	int i;
	int retorno = -1;

		if(list != NULL && len > 0)
			{
				for(i=0; i < len; i++)
				{
					list[i].isEmpty = 1; //Pone cada campo is empty array en 1, o sea está disponible/libre
				}

				retorno = 1;
			}

		return retorno;
}

//BUSCAR LIBRE

int buscarLibre(Employee* list, int len, int* posicion)
{
	int retorno = -1;

	if(list != NULL && len > 0 && posicion != NULL)
	{
		int i;
		for(i=0; i < len; i++)
		{
			if(list[i].isEmpty == 1)
			{
				retorno = 0;
				*posicion = i;
				break;
			}
		}
	}

	return retorno;
}

//AGREGAR EMPLEADOS

int addEmployees(Employee* list, int len, int id, char name[],char lastName[],float salary,int sector)

{
	int retorno = -1;
	int posicion;
	int auxInt;
	int auxSector;
	float auxSalario;

	if(list != NULL && len > 0)
	{
		if(buscarLibre(list, len, &posicion) == -1)
		{
		printf("\nNo hay más lugares libres.");
		}

		else
		{
			if(utn_getNumero(&auxInt, " Ingrese ID entre 1 y 1000: ", " Número no válido\n\n", 1, 1000, 2)==0)
			{
				 list[posicion].id = auxInt;
			}

			printf("\n Ingrese Nombre: ");
			scanf("%s", list[posicion].name);
			fflush(stdin);

			printf("\n Ingrese Apellido: ");
			scanf("%s", list[posicion].lastName);
			fflush(stdin);

			if(utn_getNumeroFlotante(&auxSalario, "\n Ingrese Salario 100-1500: ", " Salario no válido.\n", 100, 1500, 2)==0)
			{
				list[posicion].salary = auxSalario;
			}


			if(utn_getNumero(&auxSector, " \n Ingrese Sector 1-20: ", " Número no válido\n\n", 1, 20, 2)==0)
			{
				list[posicion].sector = auxSector;
			}

			list[posicion].isEmpty = 0; // Array lleno

			printf("\nEmpleado agregado a la base de datos.");

			retorno = 0;
		}
	}

	return retorno;
}

//ENCONTRAR EMPLEADO POR ID - MODIFICAR

int findEmployeeById(Employee* list, int len,int id)
{
	int i;
	char answer='s';
	char auxName[51];
	char auxLastName[51];
	float auxSalary=0;
	int auxSector=0;
	int identification;
	int retorno = -1;

	printf("\nIngrese el ID del Empleado que desea modificar: \n");
	scanf("%d", &identification);
	fflush(stdin);

	for(i=0; i < len; i++)
	{

		if(identification == list[i].id)
		{
			printf("El empleado con el ID %d es: ", list[i].id);
			printf("%s ", list[i].name);
			printf("%s. ", list[i].lastName);
			printf("Su salario es $%.2f ", list[i].salary);
			printf("y trabaja en el sector %d.\nDesea modificarlo? s/n\n", list[i].sector);
			scanf("%c", &answer);

			if(answer == 's' || answer == 'S')
				{
				fflush(stdin);
				printf("\nIngrese Nuevo Nombre: \n");
				scanf("%s", auxName);
				fflush(stdin);
				printf("\nIngrese Nuevo Apellido: \n");
				scanf("%s", auxLastName);
				fflush(stdin);
				printf("\nIngrese Nuevo Salario 100-1500: \n");
				scanf("%f", &auxSalary);
				fflush(stdin);
				printf("\nIngrese Nuevo Sector 1-20: \n");
				scanf("%d", &auxSector);
				fflush(stdin);


				strcpy(list[i].name, auxName);
				strcpy(list[i].lastName, auxLastName);
				list[i].salary = auxSalary;
				list[i].sector = auxSector;

				printf("Empleado correctamente modificado.");

				retorno = 1;

				break;
				}
			else
			{
				if(answer == 'n' || answer == 'N' || answer != 's' || answer != 'S')
				{
				fflush(stdin);
				printf("\nOperación Cancelada.\n");
				retorno = -1;
				break;
				}
			}
		}

	}

	return retorno;
}


//REMOVER EMPLEADO

int removeEmployee(Employee* list, int len, int id)
{
	int i;
	int identification;
	char answer = 's';
	int retorno = -1;

	printf("Ingrese el ID del usuario que desea eliminar: ");
	scanf("%d", &identification);
	fflush(stdin);

	if(list!=NULL && len>0)
	{

	for(i=0; i < len; i++)
		{

			if(identification == list[i].id)
			{
				printf("\nEl Empleado %s %s con el ID %d será eliminado. Desea continuar? s/n \n",list[i].name, list[i].lastName, list[i].id);
				scanf("%c", &answer);


				if(answer == 's' || answer == 'S')
				{

					printf("El Empleado %s %s con el ID %d fue eliminado de la base de datos. \n", list[i].name, list[i].lastName, list[i].id);
					list[i].salary = 0;
					list[i].id = 0;
					strcpy(list[i].name,"");
					strcpy(list[i].lastName,"");
					list[i].isEmpty = 1;
					retorno = 0;
					break;
				}

				else
				{
		    	if(answer == 'n' || answer == 'N' || answer != 's' || answer != 'S')
				{
		    		printf("\nOperación Cancelada.\n");
					retorno = -1;
					break;
				}
				}

			}
		}
	}
		return retorno;
}


//IMPRIMIR EMPLEADOS

int printEmployees(Employee* list, int length)
{
	int i;
	int retorno = -1;
	printf("\n///EMPLEADOS///\n");

	if(list != NULL && length > 0)
	{
		printf("\nID   NOMBRE    APELLIDO   SALARIO   SECTOR");
		for(i=0;i < length;i++)
			{
				if(list[i].isEmpty == 0)
				{
				printf("\n%d    %s     %s    $ %.2f       %d\n", list[i].id, list[i].name, list[i].lastName, list[i].salary, list[i].sector);
				retorno = 1;
				}

			}
	}

	return retorno;
}

//CALCULAR PROMEDIO SALARIOS

int printSalaries(Employee* list, int length)
{
		int i;
		int retorno = -1;
		int contadorMayorPromedio = 0;
		float acumuladorSalarios = 0;
		float promedioSalarios = 0;
		printf("\n///SALARIOS///\n");

		if(list != NULL && length > 0)
		{
			printf("\n  TOTAL      PROMEDIO   EMP. SALARIO > PROMEDIO\n");
			for(i=0;i < length; i++)
				{
					if(list[i].isEmpty == 0)
					{

					acumuladorSalarios = list[i].salary + acumuladorSalarios;

					if(list[i].salary == acumuladorSalarios)
					{
						promedioSalarios = acumuladorSalarios;
					}
					else
					{
						promedioSalarios = acumuladorSalarios / length;

						if(list[i].salary > promedioSalarios)
						{
						contadorMayorPromedio++;

						}
					}

					retorno = 1;
					}

				}

			printf("$ %.2f     $ %.2f       %d", acumuladorSalarios, promedioSalarios, contadorMayorPromedio);

		}

		return retorno;
}




//ORDENAR EMPLEADOS

int sortEmployees(Employee* list, int len, int order)
{
	int retorno = -1;
	int i;
	int j;
	Employee auxOrder;

	for(i=0; i < len - 1; i++)
		{
			if(order == 1)
			{
			if(list[i].id == -1)
			{
				continue;
			}

				for(j=i+1; j<len; j++)
				{
					if(list[j].id == -1)
					{
						continue;
					}

					if(strcmp(list[i].lastName, list[j].lastName) > 0)
					{
						auxOrder = list[j];
						list[j] = list[i];
						list[i] = auxOrder;
					}
				}

				retorno = 0;
				break;
			}else
			{
				if(order==0)
				{
					continue;
					retorno = 0;
				}
			}
		}

	return retorno;

}
