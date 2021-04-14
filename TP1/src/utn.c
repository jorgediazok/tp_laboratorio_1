/*
 * utn.c
 *
 *  Created on: 5 abr. 2021
 *      Author: Jorge
 */


#include <stdio.h>
#include <stdlib.h>


//Funciones

void sumar(int A, int B)
{
	int r;
	r = A + B;
	printf("\nEl resultado de la suma es: %d \n", r);
}

void restar(int A, int B)
{
	int r;
	r = A - B;
	printf("\nEl resultado de la resta es: %d \n", r);
}

void multiplicar(int A, int B)
{
	int r;
	r = A * B;
	printf("\nEl resultado de la multiplicación es: %d \n", r);
}

void dividir(int A, int B)
{
	float r;

	if(B == 0){
		printf("\nNo es posible dividir por 0 \n");
	}else{
		r = (float) A / B;
		printf("\nEl resultado de la división es: %.2f \n", r);
	}
}

void factorial(int A, int B)
{
	int i;
	int factorialA = 1;
	int factorialB = 1;

	for(i=1; i<=A; i++)
	{
		factorialA *= i;
	}

	for(i=1; i<=B; i++)
	{
		factorialB *= i;
	}


	printf("\nEl factorial del primer número es %d, y el factorial del segundo número es %d \n", factorialA, factorialB);
}
