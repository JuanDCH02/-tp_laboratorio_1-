/*
 * arrayPassengers.c
 *
 *  Created on: 14 may. 2022
 *      Author: JuanDavid
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define LIBRE 0
#define OCUPADO 1
#define MAXPASSENGERS 2000


int addPassengers()
{
	int index= -1;

	ePassenger pasajero;
    printf("\n--------------------------------------------------\n");
	printf("Ingrese nombre del pasajero: \n");
	fflush(stdin);
	scanf("%[^\n]", pasajero.name);

	printf("Ingrese el  apellido del pasajero: \n");
	fflush(stdin);
	scanf("%[^\n]", pasajero.lastName);

	printf("Ingrese el  precio del vuelo: \n");
	scanf("%f", pasajero.price);

	printf("Ingrese el codigo del vuelo: \n");
	fflush(stdin);
	scanf("%[^\n]", pasajero.flyCode);

	printf("Ingrese el tipo de pasajero:\n 1.Business\n 2.Turista\n");
	scanf("%d", &pasajero.typePassenger);

	printf("Ingrese el estado del vuelo: \n 1.Activo\n 2.Cancelado\n");
	scanf("%d", &pasajero.statusFlight);
	printf("---------------------------------------------------\n");


	pasajero.isEmpty= OCUPADO;

	index =0;

	return index;
}
int initPassengers(ePassengers, int len)
{
	int index =OCUPADO;
	ePassenger pasajero;
	int i;
	for(i=0; i<len; i++;){
		pasajero[i].isEmpty= LIBRE;

		 }break;
	 index=LIBRE;

	 return index;
}

int findPassengerById (int idAuxiliar)
{
    int index=-1;
    int i;
    	for( i=0; i<MAXPASSENGERS; i++ ){
			if( pasajero[i].id == auxId && pasajero[i].isEmpty == OCUPADO ){
			    index =0;
			}break;
		return index;

}

int removePassenger ()
{
    int index =-1;
    int confirmar;
    printf( "Seguro de dar de baja? [S|N]:\n" );
		scanf("%c", &confirmar);
		confirmar = toupper( confirmar );

			if( confirmar == 'S' ){

			    pasajero[i].isEmpty = -1;


                index =0;

			}

}

int sortPassengerByNameAndType(ePassengers pasajeros [],int len)
{
    int index = -1;
	int i, j;
	ePassenger aux;


		for(i=0 ; i<len-1 ; i++)
		{
			for(j=i+1; j<len; j++)
			{
				if(strcmp(pasajeros[i].lastName, pasajeros[j].lastName)>0)
				{
					aux = pasajeros[i];
					pasajeros[i] = pasajeros[j];
					pasajeros[j] = aux;
				}
				else
				{
					if(strcmp(pasajeros[i].lastName, pasajeros[j].lastName)==0)
					{
						if(pasajeros[i].typePassenger> pasajeros[j].typePassenger)
						{
							aux = pasajeros[i];
							pasajeros[i] = pasajeros[j];
							pasajeros[j] = aux;
							printf("%s, %s, %f, %s, %d, %d\n", pasajero.name,pasajero.lastName,pasajero.price,pasajero.flyCode,pasajero.typePassenger,pasajero.statusFlight);
							index=0;
						}

					}

				}
			}

		}


	return index;
}

int sortPassengerByflyCodeAndStatus(ePassengers pasajeros [],int len)
{
    index = -1;
    int i,j;
    for( i=0; i<len; i++ ){

        if(statusFlight == 1){

            for(i=0 ; i<len-1 ; i++){

            	for(j=i+1; j<len; j++){

            		if(strcmp(pasajeros[i].flyCode, pasajeros[j].flyCode)>0){

            			aux = pasajeros[i];
            			pasajeros[i] = pasajeros[j];
            			pasajeros[j] = aux;
            			index = 0;
            			printf("%s, %s, %f, %s, %d, %d\n", pasajero.name,pasajero.lastName,pasajero.price,pasajero.flyCode,pasajero.typePassenger,pasajero.statusFlight);

            		}
            	}
            }
        }
    }

    return index;
}
