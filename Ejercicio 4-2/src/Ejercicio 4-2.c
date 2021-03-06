/*
Ejercicio 4-2:
Realizar un programa que permita la carga de temperaturas en celsius y fahrenheit,
validando que las temperaturas ingresadas est?n entre el punto de congelaci?n y ebullici?n del agua
para cada tipo de escala.
Las validaciones se hacen en una biblioteca.
Las funciones de transformaci?n de fahrenheit a celsius y de celsius a fahrenheit se hacen en otra biblioteca.
 */

#include <stdio.h>
#include <stdlib.h>
#include "Biblioteca.h"


int main(void) {
	setbuf(stdout, NULL);
	char continuar;
	int opcion;
	int retorno;
	float temperatura;
	float temperaturaConvertida;

	do{
		printf("Bienvenido al conversor de temperaturas. Elija una opci?n:\n");
		printf("1) Convertir C? a F?\n");
		printf("2) Convertir F? a C?\n");
		scanf("%d", &opcion);

		switch(opcion){
			case 1:
				retorno = getFloat("Ingrese la temperatura en C?", 0, 100, &temperatura);
				if (retorno == 0){
					temperaturaConvertida = (temperatura * 9/5) + 32;
				}
				break;
			case 2:
				retorno = getFloat("Ingrese la temperatura en F?", 0, 100, &temperatura);
				if (retorno == 0){
					temperaturaConvertida = (temperatura - 32) * 5/9;
				}
				break;
		}

		printf("La temperatura convertida es %.2f\n", temperaturaConvertida);
		printf("Desea continuar?(s/n)\n");
		scanf("%c", &continuar);
	}while(continuar == 's');

	return EXIT_SUCCESS;
}

