/*
 * funcionesmatematicas.c
 *
 *  Created on: 16 abr. 2022
 *      Author: JuanDavid
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

float multiplicar( float num1, float num2){ //funcion para resolver una multiplicacion,
	float result;							// ingreso ambos numeros, realiza la operacion
											// y devuelve el resultado
	result = num1 * num2;
	return result;
}

float dividir(float num1, float num2){
	float result;							//funcion para resolver una division,
	result = num1 / num2;					// ingreso ambos numeros, realiza la operacion
	return result;							// y devuelve el resultado
}

float resta(float num1, float num2){		//funcion para resolver una resta,
	float result;							// ingreso ambos numeros, realiza la operacion
	result = num1 - num2;					// y devuelve el resultado
	return result;

}




