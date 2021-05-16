/*
 * utn.h
 *
 *  Created on: 6 may. 2021
 *      Author: Jorge
 */

#ifndef UTN_H_
#define UTN_H_

//Esta funci�n sirve para CUALQUIER pregunta que quiera saber un n�mero entero, para su validaci�n.

int utn_getNumero(int* pResultado, char* mensaje, char* mensajeError, int minimo, int maximo, int reintentos);

//Esta funci�n sirve para CUALQUIER pregunta que quiera saber un n�mero flotante, para su validaci�n.

int utn_getNumeroFlotante(float* pResultado, char* mensaje, char* mensajeError, float minimo, float maximo, int reintentos);

//Esta funci�n sirve para CUALQUIER pregunta que quiera saber un caracter, para la validaci�n de datos.

int utn_getCaracter(char* pResultado, char* mensaje, char* mensajeError, char minimo, char maximo, int reintentos);

//Esta funci�n sirve para saber si lo que ingresa el usuario es en efecto un numero
int esNumerico(char str[]);

//Esta funci�n sirve para saber si lo que ingresa el usuario es un telefono
int esTelefono(char str[]);

//Esta funci�n sirve para saber si lo que ingresa el usuario es alfanumerico
int esAlfanumerico(char str[]);

//Esta funci�n sirve para saber si lo que ingresa el usuario es solo letras
int esSoloLetras(char str[]);

//Estas funciones sirven para CUALQUIER pregunta con strings
void getString(char mensaje[], char input[]);

int getStringLetras(char mensaje[], char input[]);

int getStringNumeros(char mensaje[], char input[]);




#endif /* UTN_H_ */
