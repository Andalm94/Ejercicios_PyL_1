#include <stdio.h>

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

