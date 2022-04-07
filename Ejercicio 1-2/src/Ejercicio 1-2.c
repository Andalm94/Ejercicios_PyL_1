/*
b-Entrada/salida
Pedir el sueldo al usuario. Sumarle un 10% e informarle cuál será su sueldo con aumento.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	float sueldo;
	float sueldoConAumento;

	printf("Por favor ingrese su sueldo.\n");
	scanf("%f", &sueldo);

	sueldoConAumento = sueldo * 1.1;

	printf("Su sueldo con aumento es %f", sueldoConAumento);
}
