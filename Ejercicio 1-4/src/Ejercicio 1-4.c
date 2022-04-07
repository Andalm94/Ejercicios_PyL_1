/*
d-Operadores Logicos
Aplicando el concepto de Operadores Lógicos con valores booleanos en el condicional:
Solicitar un número al usuario
Informar si el mismo es par o impar.
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	int numero;

	printf("Por favor ingrese un numero:\n");
	fflush(stdin);
	scanf("%d", &numero);

	if(numero%2==0){
		printf("El numero ingresado es par");
	}
	else{
		printf("El numero ingresado es impar");
	}


	return EXIT_SUCCESS;
}
