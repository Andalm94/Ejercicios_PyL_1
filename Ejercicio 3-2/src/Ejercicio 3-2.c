/*
Crear una función que muestre por pantalla el número flotante que recibe como parámetro.
 */

#include <stdio.h>
#include <stdlib.h>

void mostrarFlotante(float numeroFlotante);

int main(void) {
	setbuf(stdout, NULL);

	float numero;
	printf("Ingrese un numero flotante:");
	scanf("%f", &numero);

	mostrarFlotante(numero);

	return EXIT_SUCCESS;
}

void mostrarFlotante(float numeroFlotante){
	printf("El numero ingresado como parametro es %f", numeroFlotante);
}
