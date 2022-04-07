/*
Ejercicio 2-1: Ingresar 5 n�meros enteros calcular y mostrar el promedio de los n�meros. Probar la aplicaci�n con distintos valores.
Ejemplo 1:  3 - 5 - 7 - 9 - 1
Ejemplo 2:  2 - 1 - 8 -1 - 2
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	int numeroIngresado;
	float acumulador;
	float promedio;

	acumulador = 0;

	for (int i=0; i<5; i++){
		printf("Por favor ingrese un numero:\n");
		fflush(stdin);
		scanf("%d", &numeroIngresado);

		acumulador += numeroIngresado;
	}

	promedio = acumulador/5;

	printf("El promedio de los numeros ingresados es: %.2f", promedio);




	return EXIT_SUCCESS;
}
