/*
Ejercicio 5-1:Pedir el ingreso de 5 números. Mostrarlos y calcular la sumatoria de los mismos.
 */

#include <stdio.h>
#include <stdlib.h>
#include "Biblioteca.h"

#define LEN 5

int main(void) {
	setbuf(stdout, NULL);

	int arrayInt [LEN];
	int acumulador = 0;
	int i;

	for(i = 0; i<LEN; i++){
		getInt(&arrayInt[i], "Por favor ingrese un numero\n", "ERROR", 0, 1000000, 3);
		acumulador += arrayInt[i];
	}

	printf("Usted ha ingresado los siguientes numeros:\n");
	for(i = 0; i<LEN; i++){
		printf("%d     ", arrayInt[i]);
	}
	printf("\nLa sumatoria de los mismos es: %d \n", acumulador);


	return EXIT_SUCCESS;
}
