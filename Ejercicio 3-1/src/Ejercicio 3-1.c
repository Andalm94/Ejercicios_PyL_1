/*
Ejercicio 3-1:
Crear una funci?n que permita determinar si un n?mero es par o no.
La funci?n retorna 1 en caso afirmativo y 0 en caso contrario. Probar en el main.
 */
#include <stdio.h>
#include <stdlib.h>

int pedirInt(char mensaje[]);
int esPar(int numero);

int main(void) {
	setbuf(stdout, NULL);

	int numero;
	int resultado;


	numero = pedirInt("Ingrese un numero");
	resultado = esPar(numero);

	printf("ingresaste: %d\n", numero);

	if(resultado == 1){
		printf("El numero ingresado es par.\n");
	}
	else{
		printf("El numero ingresado es impar.\n");
	}

	return EXIT_SUCCESS;
}


int pedirInt(char mensaje[]){
	int numeroPedido;

	printf(mensaje);
	fflush(stdin);
	scanf("%d", &numeroPedido);

	return numeroPedido;
}
int esPar(int numero){
	int resultado = 0;

	if(numero%2 == 0){
		resultado = 1;
	}

	return resultado;
}
