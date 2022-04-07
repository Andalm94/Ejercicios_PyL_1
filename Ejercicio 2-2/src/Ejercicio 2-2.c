/*
Ejercicio 2-2:
Ingresar 10 números enteros, distintos de cero. Mostrar:Cantidad de pares e impares.
El menor número ingresado.De los pares el mayor número ingresado.Suma de los positivos.
Producto de los negativos.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	int numeroIngresado;
	int cantidadPares = 0;
	int cantidadImpares = 0;
	int menorIngresado;
	int flagMenorIngresado = 1;
	int mayorParIngresado;
	int flagMayorParIngresado = 1;
	int acumuladorPositivos = 0;
	int productoNegativos = 0;


	printf("Por favor ingrese 10 numeros enteros que no sean 0:\n");
	for (int i=0; i<10; i++){
		fflush(stdin);
		scanf("%d", &numeroIngresado);


		if(numeroIngresado % 2 == 0){
			cantidadPares++;
			if(flagMayorParIngresado == 1 || numeroIngresado > mayorParIngresado){
				flagMayorParIngresado = 0;
				mayorParIngresado = numeroIngresado;
			}
		}
		else{
			cantidadImpares++;
		}

		if (flagMenorIngresado == 1 || menorIngresado > numeroIngresado){
			flagMenorIngresado = 0;
			menorIngresado = numeroIngresado;
		}

		if(numeroIngresado > 1){
			acumuladorPositivos += numeroIngresado;
		}
		else{
			productoNegativos *= numeroIngresado;
		}
	}

	printf("Usted ha ingresado %d numeros pares y %d numeros impares\n", cantidadPares, cantidadImpares);
	printf("El menor numero ingresado ha sido %d\n", menorIngresado);
	printf("De los pares, el mayor numero ingresado ha sido %d\n", mayorParIngresado);
	printf("La suma de los positivos es %d\n", acumuladorPositivos);
	printf("El producto de los negativos es %d\n", productoNegativos);


	return EXIT_SUCCESS;
}
