/*
 ============================================================================
 Name        : TP_1Final.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "funcionesmatematicas.h"
#include "pediryvalidar.h"
#define BTC 4606954.55


int main(void) {

	setbuf(stdout, NULL);

	float km =0;
	float precioAerolineas =0;
	float precioLatam =0;
	int opcion;
	float precioTarjetaDebitoAerolineas =0;
	float precioTarjetaDebitoLatam =0;
	float interesTarjetaCreditoAerolineas =0;
	float interesTarjetaCreditoLatam =0;
	float precioXKmAerolineas =0;
	float precioXKmLatam =0;
	float diffPrecio =0;
	float precioBtcAerolineas =0;
	float precioBtcLatam =0;
	int validar =0;



		do{
			opcion = pedirOpcion();
			validar = validarNumEntre(opcion, 1 ,6);
			if(validar == -1){
				opcion = pedirOpcion("Por favor Ingrese una opcion\n");
			}

			switch(opcion){

			case 1:

				km = pedirNumero("\nIngrese los kilometros del vuelo\n");
				validar = validarNumPositivo (km);
				if(validar == -1){
					km = pedirNumero("\nIngrese los kilometros del vuelo\n\n");
				}

				break;

			case 2:

				precioAerolineas =  pedirNumero("Ingrese el precio de Aerolineas\n");
				validar = validarNumPositivo (precioAerolineas);
				if(validar == -1){
					precioAerolineas = pedirNumero("Ingrese el precio de Aerolineas\n");
				}

				precioLatam =  pedirNumero("Ingrese el precio de Latam\n");
				validar = validarNumPositivo (precioLatam);
				if(validar == -1){
					precioLatam = pedirNumero("Ingrese el precio de Latam\n");
				}
				break;

			case 3:
				precioTarjetaDebitoAerolineas = multiplicar (precioAerolineas, 0.90);
				precioTarjetaDebitoLatam = multiplicar (precioLatam, 0.90);
				interesTarjetaCreditoAerolineas = multiplicar(precioAerolineas, 1.25);
				interesTarjetaCreditoLatam = multiplicar(precioLatam, 1.25);
				precioBtcAerolineas = dividir (precioAerolineas, BTC);
				precioBtcLatam = dividir (precioLatam, BTC);
				precioXKmAerolineas = dividir(km, precioAerolineas);
				precioXKmLatam = dividir (km, precioLatam);
				diffPrecio = resta(precioLatam, precioAerolineas);

				printf("\nLos precios han sido calculados!\n");

				break;

			case 4:

				printf("\nLatam: \n");
				printf("a) Precio con tarjeta de debito: %f\n", precioTarjetaDebitoLatam);
				printf("b) Precio con tarjeta de credito: %f\n", interesTarjetaCreditoLatam);
				printf("c) Precio pagando con Bitcoin: %f\n", precioBtcLatam);
				printf("d) Precio unitario: %f\n", precioXKmLatam);
				printf("\nAerolineas: \n");
				printf("a) Precio con tarjeta de debito: %f\n", precioTarjetaDebitoAerolineas);
				printf("b) Precio con tarjeta de credito: %f\n", interesTarjetaCreditoAerolineas);
				printf("c) Precio pagando con Bitcoin: %f\n", precioBtcAerolineas);
				printf("d) Precio unitario: %f\n", precioXKmAerolineas);
				printf("La diferencia de precio es: %f\n\n", diffPrecio);
				break;

			case 5:
				system("cls");
				precioTarjetaDebitoAerolineas = multiplicar (162965, 0.90);
				precioTarjetaDebitoLatam = multiplicar (159339, 0.90);
				interesTarjetaCreditoAerolineas = multiplicar(162965, 1.25);
				interesTarjetaCreditoLatam = multiplicar(159339, 1.25);
				precioBtcAerolineas = dividir (162965, BTC);
				precioBtcLatam = dividir (159339, BTC);
				precioXKmAerolineas = dividir(7090, 162965);
				precioXKmLatam = dividir (7090, 159339);
				diffPrecio = resta(159339, 162965);

				printf("\nLatam: \n");
				printf("a) Precio con tarjeta de debito: %f\n", precioTarjetaDebitoLatam);
				printf("b) Precio con tarjeta de credito: %f\n", interesTarjetaCreditoLatam);
				printf("c) Precio pagando con Bitcoin: %f\n", precioBtcLatam);
				printf("d) Precio unitario: %f\n", precioXKmLatam);
				printf("\nAerolineas: \n");
				printf("a) Precio con tarjeta de debito: %f\n", precioTarjetaDebitoAerolineas);
				printf("b) Precio con tarjeta de credito: %f\n", interesTarjetaCreditoAerolineas);
				printf("c) Precio pagando con Bitcoin: %f\n", precioBtcAerolineas);
				printf("d) Precio unitario: %f\n", precioXKmAerolineas);
				printf("La diferencia de precio es: %f\n", diffPrecio);

				break;

			case 6:
				break;
			}

		}while(opcion !=6);

			printf("Hasta luego!!\n");

	return EXIT_SUCCESS;
}


