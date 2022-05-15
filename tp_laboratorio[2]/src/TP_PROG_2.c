#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "arrayPassengers.h"
#include "propio.h"
#define LIBRE 0
#define OCUPADO 1
#define MAXPASSENGERS 2000





int main(void) {
	ePassenger pasajero;

		int cantidadPasajeros=0;
		int cantProm=0;
		int i,a,auxId, opcion,opcionModificar;
		char confirmar;
		float totalPrecio=0;
		float prom;

		initPassengers(ePassenger pasajero, MAXPASSENGERS);

		do{
			opcion = mostrarMenu();
			switch(opcion){
			case 1: //ALTA
				buscarEspacioLibre();
				if(buscarEspacioLibre == LIBRE){
					a= addpassenger();
						if(a ==0){
							cantidadPasajeros++;
							totalPrecio += pasajero[i].price;
							printf("El pasajero ha sido cargado con el id: %d !\n",pasajero[i].id );
							break;
						}

				}else {
					printf("No hay espacio libre...\n");
				}break;
			}
			case 2:
				//MODIFICAR

						if( cantidadPasajeros > 0 ){
							auxId = preguntarId();

					    	a =findpassengerbyId(auxId);
					    	if(a == 0){
								do{
									opcionModificar = mostrarMenuModificar();

								    switchModificar(opcionModificar);

								}while(opcionModificar !=7);
								    printf("La modificacion ha sido correcta!\n");


					    	}printf( "Ningun pasajero ha sido cargado con ese Id...\n" );

						}else{

						}break;
						//fin if case 2

			case 3: //BAJA
				if( cantidadPasajeros > 0 ){
					auxId = preguntarId();
					a = findPassengerbyId(auxId);

					if(a == 0){
						a = removePassenger(auxId);
						if(a == 0){
							printf( "El pasajero ha sido borrado!\n" );
							cantidadPasajeros--;
							totalPrecio -= pasajero[i].price;
						}else{
					           printf( "El pasajero no ha sido borrado...\n" );
					       }break;
					}else {
				        printf( "Nigun pasajero ha sido cargado con ese Id...\n" );
					}
				}else{
					printf("No hay pasajeros cargados...\n");
				}break;
			case 4: //INFORMAR
				if(cantidadPasajeros > 0){

					printf("Listado por Apellido y tipo de pasajero: \n");
					sortPassengerByNameAndType(pasajero,int MAXPASSENGERS);

					printf("Listado por Codigos de vuelo activos: \n");
					sortPassengerByflyCodeAndStatus( pasajero,int MAXPASSENGERS);

					printf("Precio total de los vuelos: %d\n", totalPrecio);

					prom = totalPrecio / cantidadPasajeros;
					printf("promedio total de los vuelos: %f\n", prom);

					cantProm = PasajerosMasDelPromedio(MAXPASSENGERS, prom);
					printf("Cantidad de pasajeros que superan el precio promedio total de los vuelos: %f\n", cantProm);

				}else {
					printf("No hay pasajeros cargados...\n");
				}


			}while(opcion !=5);


	return EXIT_SUCCESS;
 }
