/*
 ============================================================================
 Name        : TP1.c
 Author      : Jorge Díaz
 Version     : Versión Final
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"


int main(void) {
	setbuf(stdout, NULL);

	int operador;
	int salir = 0;

	while(salir == 0){
		printf("\n---CALCULADORA---");
		printf("\n1. Sumar");
		printf("\n2. Restar");
		printf("\n3. Multiplicar");
		printf("\n4. Dividir");
		printf("\n5. Factorial");
		printf("\n6. Salir \n");

		//Guardo la opción
		printf("\nElija una operación: ");
		scanf("%d", &operador);

		//Pido los valores
		int x;
		int y;

		printf("\nElija un valor para el número 1: ");
		scanf("%d", &x);

		printf("\nElija un valor para el número 2: ");
		scanf("%d", &y);

		switch(operador)
		{
		case 1:
		sumar(x, y);
		break;

		case 2:
		restar(x, y);
		break;

		case 3:
		multiplicar(x, y);
		break;

		case 4:
		dividir(x, y);
		break;

		case 5:
		factorial(x, y);
		break;

		case 6:
		salir = 1;
		printf("Programa finalizado.");
		break;

		default:
		printf("\nError. Elija una operación válida. \n");

		}

	  }

	return EXIT_SUCCESS;
}
