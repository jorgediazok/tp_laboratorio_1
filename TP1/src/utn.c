/*
 * utn.c
 *
 *  Created on: 5 abr. 2021
 *      Author: Jorge
 */


#include <stdio.h>
#include <stdlib.h>


//Funciones

void sumar(int numA, int numB)
{
	int resultado;
	resultado = numA + numB;
	printf("\nEl resultado de la suma es: %d \n", resultado);
}

void restar(int numA, int numB)
{
	int resultado;
	resultado = numA - numB;
	printf("\nEl resultado de la resta es: %d \n", resultado);
}

void multiplicar(int numA, int numB)
{
	int resultado;
	resultado = numA * numB;
	printf("\nEl resultado de la multiplicaci�n es: %d \n", resultado);
}

void dividir(int numA, int numB)
{
	float resultado;

	if(numB == 0){
		printf("\nNo es posible dividir por 0 \n");
	}else{
		resultado = (float) numA / numB;
		printf("\nEl resultado de la divisi�n es: %.2f \n", resultado);
	}
}

void factorial(int numA, int numB)
{
	int i;
	int factorialA = 1;
	int factorialB = 1;

	for(i=1; i<=numA; i++)
	{
		factorialA *= i;
	}

	for(i=1; i<=numB; i++)
	{
		factorialB *= i;
	}


	printf("\nEl factorial del primer n�mero es %d, y el factorial del segundo n�mero es %d \n", factorialA, factorialB);
}
