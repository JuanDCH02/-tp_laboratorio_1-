/*
 * arrayPassengers.h
 *
 *  Created on: 14 may. 2022
 *      Author: JuanDavid
 */

#ifndef ARRAYPASSENGERS_H_
#define ARRAYPASSENGERS_H_

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define LIBRE 0
#define OCUPADO 1
#define MAXPASSENGERS 2000

int addPassengers();
int initPassengers(ePassenger a, int len);
int findPassengerById (int idAuxiliar);
int removePassenger (int num);
int sortPassengerByflyCodeAndStatus(ePassengers pasajeros [],int len);
int sortPassengerByNameAndType(ePassengers pasajeros [],int len);

#endif /* ARRAYPASSENGERS_H_ */
