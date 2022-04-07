/*
Crear una función que pida el ingreso de un entero y lo retorne.
*/

#include <stdio.h>
#include <stdlib.h>

int pedirEntero(char mensaje[]);

int main(void) {
	setbuf(stdout, NULL);
	int numeroEntero;

	numeroEntero = pedirEntero("Por favor ingrese un numero entero");
	printf("Usted ingreso el numero %d", numeroEntero);


	return EXIT_SUCCESS;
}

int pedirEntero(char mensaje[]){
	int numero;

	printf(mensaje);
	scanf("%d", &numero);

	return numero;
}
