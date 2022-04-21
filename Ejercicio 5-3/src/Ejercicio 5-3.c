/*
Ejercicio 5-3:Realizar un programa que permita el ingreso de 10 números enteros distintos de cero.
La carga deberá ser aleatoria (todos los elementos se inicializarán en cero por default).
Determinar el promedio de los positivos.
Utilizar funciones y arrays.
 */

#include <stdio.h>
#include <stdlib.h>
#include "IngresoDeDatos.h"
#include "ManejoArrays.h"

#define LEN 10


int main(void) {
	setbuf(stdout, NULL);

	int array [LEN];
	int validacionRetorno;
	int posicionEnArray;
	int numeroIngresado;

	float acumuladorPositivos = 0;
	int contadorPositivos = 0;
	float promedioPositivos;

	int i;
	char continuar;



	inicializarArrayInt(array, LEN, 0);
	do{
		validacionRetorno = getInt(&posicionEnArray, "Ingrese el lugar donde desee guardar su numero(1-10)\n",
		"Ese lugar no existe.\n", 1, 10, 3);

		if(validacionRetorno == 0 && array[posicionEnArray-1] == 0){
			validacionRetorno = getInt(&numeroIngresado, "Ingrese un numero distinto de 0:\n", "Ha ingresado 0.\n", -100, 100, 3);
			if (validacionRetorno == 0 && numeroIngresado != 0){
				array[posicionEnArray-1] = numeroIngresado;
			}
		}
		else{
			printf("Ha habido un error en la carga.\n");
		}



		if(numeroIngresado > 0){
			acumuladorPositivos += numeroIngresado;
			contadorPositivos ++;
		}

		printf("Quiere ingresar otro dato?  s/n\n");
		fflush(stdin);
		scanf("%c", &continuar);

	}while(continuar == 'S' || continuar == 's');

	promedioPositivos = acumuladorPositivos/contadorPositivos;

	printf("-----RESULTADOS-----\n");
	printf("Usted ha cargado los siguientes datos:\n");
	for (i = 0; i < LEN; i++) {
		printf("En la posicion %d:  %d \n", (i+1), array[i]);
	}
	printf("El promedio de positivos es %.2f:  ", promedioPositivos);



	return EXIT_SUCCESS;
}
