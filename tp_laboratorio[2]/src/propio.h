/*
 * tp2.h
 *
 *  Created on: 9 may. 2022
 *      Author: JuanDavid
 */

#ifndef PROPIO_H_
#define PROPIO_H_
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "arrayPassengers.h"
#define LIBRE 0
#define OCUPADO 1
#define MAXPASSENGERS 2000


typedef struct{
	int id ;
	char name[51] ;
	char lastName[51];
	float price;
	char flyCode[10];
	int typePassenger;
	int statusFlight;
	int isEmpty;

}ePassenger;


void mostrarPasajero(ePassenger);

int addPassengers(char mensaje[]);
int buscarEspacioLibre();
void mostrarporApellidoYTipo(ePassenger);
int mostrarMenu();
int mostrarMenuModificar();
void preguntarId();
int  confirmarDarDeBaja(int num);
void switchModificar(int opc);
int PasajerosMasDelPromedio(int len, float num);



#endif /* PROPIO_H_ */
