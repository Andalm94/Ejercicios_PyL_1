/*
c-Control de Flujo
Pedirle al usuario su edad y su estado civil ('c'-casado, 's'-soltero, 'v'-viudo, 'd'-divorciado)
Si ingresa una edad menor a 18 a?os y un estado civil distinto a "Soltero",
mostrar el siguiente mensaje: 'Es muy peque?o para NO ser soltero.'
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	int edad;
	char estadoCivil;

	printf("Por favor ingrese su edad:\n");
	fflush(stdin);
	scanf("%d", &edad);

	printf("Por favor ingrese su estado civil: (C-casado // S-soltero // V-viudo // D-divorciado)\n");
	fflush(stdin);
	scanf("%c", &estadoCivil);

	 if(edad < 18 && estadoCivil != 'S'){
		 printf("Es muy peque?o para NO ser soltero.");
	 }

	 return 0;
}
