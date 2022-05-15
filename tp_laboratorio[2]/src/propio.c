//ifndef TP2_C_
#include "propio.h"

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "arrayPassengers.h"
#define LIBRE 0
#define OCUPADO 1
#define MAXPASSENGERS 2000
#define TP2_C_





int buscarEspacioLibre()
{
    int result= -1;
    int i;
    for(i=0; i<MAXPASSENGERS; i++){
        if(pasajero[i].isEmpty = LIBRE){
            result= LIBRE;
        }
        break;
    }
    return result;
}


int mostrarMenu()
{
    int opcion;
    printf("----------------------------------------------\n");
    printf("1. Dar de Alta\n");
    printf("2. Modificar\n");
    printf("3. Dar de Baja\n");
    printf("4. Informar\n");
    printf("5. Salir\n");
    printf("----------------------------------------------\n");
    scanf("%d", &opcion);
    if(opcion < 1 && opcion > 5){
        mostrarMenu();
    }
    return opcion;
}
int preguntarId()
{
    int index;
    printf("Ingrese Id a utilizar");
    scanf("%d", &index);

    return index;
}


int mostrarMenuModificar()
{
	int opcionModificar;
    printf("----------------------------------------------\n");
    printf("1. Modificar Nombre\n");
    fflush(stdin);
    scanf("%[^\n]", pasajero.name)
    printf("2. Modificar Apellido\n");
    fflush(stdin);
    scanf("%[^\n]", pasajero.lastName)
    fflush(stdin);
    printf("3. Modificar precio\n");
    scanf("%d", &pasajero.price)
    printf("4. Modificar Tipo de pasajero\n");
    scanf("%d", &pasajero.typePassenger);
    printf("5. Modificar Codigo de vuelo\n");
    fflush(stdin);
    scanf("%[^\n]", pasajero.flyCode);
    printf("6. Salir\n");
    scanf("%d", &opcionModificar);

    return opcionModificar;
}

void switchModificar(int opc)
{
	ePassenger pasajero;
    switch( opc ){
		case 1:
		    printf("----------------------------------------------\n");
	    	printf("Nombre: \n");
		    fflush(stdin);
	    	scanf("%[^\n]", pasajero[i].name);
	    	break;
		case 2:
	    	printf("Apellido: \n");
	    	fflush(stdin);
		    scanf("%[^\n]", pasajero[i].lastName);
	    	break;
		case 3:
	    	printf("Precio de vuelo: \n");
	    	scanf("%f", &pasajero[i].price);
	    	break;
		case 4:
	    	printf("Codigo del vuelo: \n");
	    	fflush(stdin);
	    	scanf("%[^\n]", pasajero[i].flyCode);
	    	break;
		case 5:
	    	printf("Tipo de pasajero: \n");
	    	scanf("%d", &pasajero[i].typePassenger);
	    	break;
    	case 7:
	    	printf("Salir del menu\n");
	    	scanf("%d", &opcionModificar);
	    	break;
	   	default:
	       	printf( "La opcion ingresada es incorrecta...");
	       	mostrarMenuModificar();

        }break;
}

int PasajerosMasDelPromedio(int len, float num)
{
	int i;
    int result=0;
    for(i=0; i<len; i++){
		 if (pasajero.price[i]> num)
	       {
			  result++;

		    }
	}
	return result;

}
