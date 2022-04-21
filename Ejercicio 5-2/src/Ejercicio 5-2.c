/*
Ejercicio 5-2:Pedir el ingreso de 10 números enteros entre -1000 y 1000.
Determinar:Cantidad de positivos y negativos. Sumatoria de los pares.
El mayor de los impares.Listado de los números ingresados.
Listado de los números pares.Listado de los números de las posiciones impares.
Se deberán utilizar funciones y arrays.
 */

#include <stdio.h>
#include <stdlib.h>
#include "IngresoDeDatos.h"

#define LEN 10

int main(void) {
	setbuf(stdout, NULL);

	int arrayNumerosIngresados [LEN];
	int cantidadPositivos = 0;
	int cantidadNegativos = 0;
	int acumuladorPares = 0;
	int mayorImpar;
	int flagHayMayorImpar = -1;
	int arrayNumerosEnPosicionesImpares [LEN/2];

	int i;

	for(i = 0; i<LEN; i++){
		//Ingreso de numeros
		getInt(&arrayNumerosIngresados[i], "Por favor ingrese un numero\n", "Ingrese un numero entre -1000 y 1000",
		-1000, 1000, 3);


		//Conteo de positivos y negativos
		if (arrayNumerosIngresados[i] >= 0){
			cantidadPositivos++;
		}
		else{
			cantidadNegativos++;
		}

		//Acumulacion de pares y seleccion del impar mayor
		if(arrayNumerosIngresados[i]%2 == 0){
			acumuladorPares += arrayNumerosIngresados[i];
		}
		else{
			if(flagHayMayorImpar == -1 || arrayNumerosIngresados[i] > mayorImpar){
				mayorImpar = arrayNumerosIngresados[i];
				flagHayMayorImpar = 0;
			}
		}

		//Carga de numeros en posiciones impares
		if(i%2 != 0){
			arrayNumerosEnPosicionesImpares[i-1] = arrayNumerosIngresados[i];
			printf("arrayNumerosEnPosicionesImpares[i] : %d\n", arrayNumerosEnPosicionesImpares[i]);
			printf("arrayNumerosIngresados[i] : %d\n", arrayNumerosIngresados[i]);
		}

	}


	printf("-----RESULTADOS-----\n");
	printf("La cantidad de positivos es: %d\n", cantidadPositivos);
	printf("La cantidad de negativos es: %d\n", cantidadNegativos);
	printf("La sumatoria de todos los numeros pares es: %d\n", acumuladorPares);
	if(flagHayMayorImpar == 0){
		printf("El mayor de los impares es: %d\n", mayorImpar);
	}
	printf("Listado de numeros en posiciones impares:\n");

	for(i=0; i<LEN/2; i++){
		printf("%d   ", arrayNumerosEnPosicionesImpares[i]); //error
	}

	return EXIT_SUCCESS;
}
