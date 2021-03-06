/*
Ejercicio 4-1:
Realizar un programa EN EL MAIN que permita calcular y mostrar el factorial de un n?mero.
Por ejemplo:
5! = 5*4*3*2*1 = 120
*/
#include <stdio.h>
#include <stdlib.h>

int calcularFactorial (int numero);

int main(void) {
	setbuf(stdout, NULL);

	int numero;
	int resultado = 0;

	printf("Ingrese un numero:\n");
	scanf("%d", &numero);

	resultado = calcularFactorial(numero);

	printf("El factorial del numero ingresado es %d", resultado);

	return EXIT_SUCCESS;
}

int calcularFactorial (int numero){
	int resultado = 0;

	if (numero == 0){
		resultado = 1;
	}
	else{
		resultado = numero * calcularFactorial(numero-1);
	}

	return resultado;
}
