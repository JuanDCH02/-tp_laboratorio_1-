/*
 * pediryvalidar.c
 *
 *  Created on: 16 abr. 2022
 *      Author: JuanDavid
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int  validarNumPositivo(float num1){
	int result =1;
	if(num1 < 1 ){						//esta funcion valida que el numero que ingresemos sea mayor
									// a 1, si es asi, devuelve 1, si es menor que 1, devuelve -1
		result= -1;
	}
	return result;
}

int pedirOpcion(){

	int result;
	printf("1. Ingresar los Kilometros del vuelo");
	printf("\n2. Ingresar precios de los Vuelos");  //funcion para pedir las opciones del menu
	printf("\n3. Calcular Datos");
	printf("\n4. Mostrar Resultados");
	printf("\n5. Carga Forza de Datos");
	printf("\n6. Salir");
	fflush(stdin);
	scanf("%d", &result);

	return result;
}

int validarNumEntre(float num1, int num2, int num3){ //funcion para validar que un numero este entre
													// el rango de valor de otros dos, perimero ingresamos el numero a evaluar
													// despues el numero del que no queremos que sea menor y por ultimo el numero del que
													//queremos que no sea mayor, devuelve 1 si esta dentro del rango, y -1
													// si no cumple con los parametros
	int result= 1;

	if(num1 < num2 || num1 > num3){
		result = -1;
	}
	return result;
}

float pedirNumero(char mensaje[]){ //funcion para pedir un numero, ingresamos es el texto que queramos
	float numero;					// mostrar, guarda el numero ingresado y lo devuelve
	printf(mensaje);
	fflush(stdin);
	scanf("%f", &numero);

	return numero;
}


