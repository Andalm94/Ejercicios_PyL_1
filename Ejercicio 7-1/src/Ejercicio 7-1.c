/*
Ejercicio 7-1: Hacer una función que se llame calcularMayor().
Debe recibir dos números enteros y devolver por referencia el mayor.
Debe retornar 1 si hay mayor o 0 si ambos son iguales.
 */

#include <stdio.h>
#include <stdlib.h>
#include "ManejoArrays.h"
#include "IngresoDeDatos.h"

int calcularMayor(int numero1, int numero2, int * numeroMayor);

int main(void) {
	setbuf(stdout, NULL);
	int numero1;
	int numero2;
	int numeroMayor;

	printf("A continuacion, ingrese 2 numeros y se calculara el mayor: \n");

	if(getInt(&numero1, "", "", -1000000, 1000000, 100) == 0 && getInt(&numero2, "", "", -1000000, 1000000, 100) == 0){

		if(calcularMayor(numero1, numero2, &numeroMayor) == 1 || calcularMayor(numero1, numero2, &numeroMayor) == 0){
			printf("El numero mayor ingresado es %d", numeroMayor);
		}
	}
	else{
		printf("Ha habido un error, intente nuevamente.\n");
	}



	return EXIT_SUCCESS;
}

int calcularMayor(int numero1, int numero2, int * numeroMayor){
	int retorno = -1;

	if(numero1 != NULL && numero2 != NULL){
		if(numero1 == numero2){
			retorno = 0;
		}
		else{
			if(numero1>numero2){
				*numeroMayor = numero1;
			}
			else{
				*numeroMayor = numero2;
			}
			retorno = 1;
		}

	}

	return retorno;
}
