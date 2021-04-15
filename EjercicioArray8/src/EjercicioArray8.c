/*
 ============================================================================
 Name        : EjercicioArray8.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style

 Una empresa tiene dos turnos (mañana y tarde) en los que trabajan 8 empleados (4 por la mañana
 y 4 por la tarde). Confeccionar un programa que permita almacenar los sueldos de los empleados
 agrupados por turno(definir los dos vectores con componentes de tipo float). Imprimir los
 gastos sueldos de cada uno.
 ============================================================================
 */

#define NUM_TURNOS 4

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	int i;
	float turnoMan[NUM_TURNOS];
	float turnoTar[NUM_TURNOS];
	float man = 0;
	float tar = 0;

	printf("Sueldos de empleados de turno de mañana. \n");

	for(i=0;i<NUM_TURNOS;i++)
	{
		printf("Ingrese el sueldo: \n");
		scanf("%f", &turnoMan[i]);
	}

	printf("Sueldos de empleados de turno de tarde. \n");

		for(i=0;i<NUM_TURNOS;i++)
		{
			printf("Ingrese el sueldo: \n");
			scanf("%f", &turnoTar[i]);
		}


	for(i=0;i<NUM_TURNOS;i++)
	{
		man+=turnoMan[i];
		tar+=turnoTar[i];
	}

	printf("Total de gastos del turno mañana: %.2f \n", man);
	printf("Total de gastos del turno tarde: %.2f", tar);

	return EXIT_SUCCESS;
}
