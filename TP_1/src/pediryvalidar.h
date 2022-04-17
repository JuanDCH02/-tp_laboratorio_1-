/*
 * pediryvalidar.h
 *
 *  Created on: 16 abr. 2022
 *      Author: JuanDavid
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#ifndef PEDIRYVALIDAR_H_
#define PEDIRYVALIDAR_H_


int validarNumPositivo(float num1);
int pedirOpcion();
int validarNumEntre(float num1, int num2, int num3);
float pedirNumero(char mensaje[]);



#endif /* PEDIRYVALIDAR_H_ */
