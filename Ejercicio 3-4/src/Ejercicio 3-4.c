/*
Realizar un programa en donde se puedan utilizar los prototipos de la funci?n Sumar en sus 4 combinaciones.
int Sumar1(int, int);
int Sumar2(void);
void Sumar3(int, int);
void Sumar4(void);
*/
#include <stdio.h>
#include <stdlib.h>

int Sumar1(int numero1, int numero2);
int Sumar2();
void Sumar3(int numero1, int numero2);
void Sumar4();

int main(void) {
	setbuf(stdout, NULL);



	return EXIT_SUCCESS;
}

int Sumar1(int numero1, int numero2){
	int resultado;
	resultado = numero1+numero2;

	return resultado;
}
int Sumar2(){
	int numero1;
	int numero2;
	int resultado;

	printf("Ingrese 2 sumandos:\n");
	scanf("%d", &numero1);
	scanf("%d", &numero2);
	resultado = numero1 + numero2;

	return resultado;
}
void Sumar3(int numero1, int numero2){
	int resultado;

	resultado = numero1 + numero2;

	printf("El resultado de ambos sumandos es %d", resultado);
}
void Sumar4(){
	int numero1;
	int numero2;
	int resultado;

	printf("Ingrese 2 sumandos:\n");
	scanf("%d", &numero1);
	scanf("%d", &numero2);
	resultado = numero1 + numero2;

	printf("El resultado de ambos sumandos es %d", resultado);
}
