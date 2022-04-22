#include <stdio.h>
#include <stdlib.h>
#include "ManejoArrays.h"
#include "IngresoDeDatos.h"
//Arrays INT
int inicializarArrayInt (int array[], int len, int datoInicial){
	int i;
	int retorno = -1;

	if(array != NULL && len>0){
		for(i=0; i<len; i++){
			array[i] = datoInicial;
		}
		retorno = 0;
	}

	return retorno;
}

int cargaAleatoriaDeArrayInt(int array[], int len, int datoMin, int datoMax, char * mensajeDato, char * mensajePosicionEnArray, char * mensajeError){
	int retorno = -1;
	char continuar;

	int posicionEnArray;
	int datoIngresado;
	int validacionRetorno;

	do{

		validacionRetorno = getInt(&posicionEnArray, mensajePosicionEnArray, mensajeError, 0, len, 3);
		if (validacionRetorno == 0){
			validacionRetorno = getInt(&datoIngresado, mensajeDato, mensajeError, datoMin, datoMax, 3);
			if(validacionRetorno == 0){
				array[posicionEnArray-1] = datoIngresado;
			}
		}

		printf("Quiere ingresar otro dato?  s/n\n");
		fflush(stdin);
		scanf("%c", &continuar);
	}while (continuar == 'S' || continuar == 's');



	return retorno;
}

int ordenarArrayInt(int pArray[], int len) {

	int retorno = -1;
	int i;
	int aux;
	int estaOrdenado;

	if (pArray != NULL && len > 0) {
		do {
			estaOrdenado = 1;
			len--;
			for (i = 0; i < len; i++) {
				if (pArray[i] > pArray[i + 1]) {

					aux = pArray[i];
					pArray[i] = pArray[i + 1];
					pArray[i + 1] = aux;
					estaOrdenado = 0;
				}
			}
		} while (estaOrdenado == 0);
		retorno = 0;
	}

	return retorno;
}

int mostrarArrayInt(int array[], int len) {
	int i = 0;
	if (array != NULL && len > 0) {
		for (i = 0; i < len; i++) {
			printf("%d ", array[i]);
		}
	}
	return 0;
}

int inicializarArrayFloat (float array[], int len, float datoInicial){
	int i;
	int retorno = -1;

	if(array != NULL && len>0){
		for(i=0; i<len; i++){
			array[i] = datoInicial;
		}
		retorno = 0;
	}

	return retorno;
}


int mostrarArrayChar(char array[], int len) {
	int i = 0;
	if (array != NULL && len > 0) {
		while (array[i] != '\0') {
			printf("%c ", array[i]);
			i++;
		}
	}
	return 0;
}





int cargaAleatoriaDeArrayFloat(float array[], int len, int datoMin, int datoMax, char * mensajeDato, char * mensajePosicionEnArray, char * mensajeError){
	int retorno = -1;
	char continuar;

	int posicionEnArray;
	float datoIngresado;
	int validacionRetorno;

	do{

		validacionRetorno = getInt(&posicionEnArray, mensajePosicionEnArray, mensajeError, 0, len, 3);
		if (validacionRetorno == 0){
			validacionRetorno = getFloat(&datoIngresado, mensajeDato, mensajeError, datoMin, datoMax, 3);
			if(validacionRetorno == 0){
				array[posicionEnArray-1] = datoIngresado;
			}
		}

		printf("Quiere ingresar otro dato?  s/n\n");
		fflush(stdin);
		scanf("%c", &continuar);
	}while (continuar == 'S' || continuar == 's');



	return retorno;
}
