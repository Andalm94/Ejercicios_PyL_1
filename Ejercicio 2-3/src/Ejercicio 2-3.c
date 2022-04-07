/*
Ejercicio 2-3:
Debemos alquilar el servicio de transporte para llegar a Mar del Plata con un grupo de personas, de cada persona debemos obtener los siguientes datos:
número de cliente,
estado civil ('s' para soltero", 'c' para casado o 'v' viudo),
edad( solo mayores de edad, más de 17),
temperatura corporal (validar por favor)
y sexo ('f' para femenino, 'm' para masculino, 'o' para no binario).
NOTA: el precio por pasajero es de $600.
Se debe informar (solo si corresponde):
a) La cantidad de personas con estado "viudo" de más de 60 años.
b) el número de cliente y edad de la mujer soltera más joven.
c) cuánto sale el viaje total sin descuento.
d) si hay más del 50% de los pasajeros que tiene más de 60 años , el precio final tiene un descuento del 25%, que solo mostramos si corresponde.
 */

#include <stdio.h>
#include <stdlib.h>

#define P 600

int main(void) {
	setbuf(stdout, NULL);

	char estadoCivilIngresado;
	int edadIngresada;
	float temperaturaIngresada;
	char sexoIngresado;
	char continuar;

	int cantidadMayores = 0;
	int cantidadViudosMayores = 0;
	int numeroDeCliente = 0;

	int numeroClienteMujerSolteraJoven = -1;
	int edadMujerSolteraJoven = -1;

	int precioSinDescuento;
	int precioConDescuento = -1;

	do{
		//INGRESO DE DATOS
		printf("Por favor, ingrese el estado civil del pasajero(Casado: C // Soltero: S // Viudo: V):\n");
		fflush(stdin);
		scanf("%c", &estadoCivilIngresado);

		printf("Por favor, ingrese la edad del pasajero:\n");
		fflush(stdin);
		scanf("%d", &edadIngresada);

		do{
			printf("Por favor, ingrese la temperatura corporal del pasajero:\n");
			fflush(stdin);
			scanf("%f", &temperaturaIngresada);
		}while(temperaturaIngresada<35 || temperaturaIngresada>44);


		printf("Por favor, ingrese el sexo del pasajero: (F/M/O):\n");
		fflush(stdin);
		scanf("%c", &sexoIngresado);



		if (edadIngresada>60){
			cantidadMayores++;
			if(estadoCivilIngresado == 'V'){
				cantidadViudosMayores++;
			}
		}

		if(estadoCivilIngresado == 'S' && sexoIngresado == 'F'){
			numeroClienteMujerSolteraJoven = numeroDeCliente;
		    edadMujerSolteraJoven = edadIngresada;
		}


		numeroDeCliente++;

		printf("Desea agregar mas pasajeros? (S/N)\n");
		fflush(stdin);
		scanf("%c", &continuar);

	}while(continuar=='S');



	precioSinDescuento = numeroDeCliente * P;


	// INFORMES:
	if(cantidadViudosMayores > 0){
		printf("La cantidad de viudos mayores a 60 años es de %d pasajeros.\n", cantidadViudosMayores); //funca
	}

	if(edadMujerSolteraJoven != -1){
		printf("La mujer soltera mas joven tiene %d años y su numero de cliente es %d.\n", edadMujerSolteraJoven, numeroClienteMujerSolteraJoven);
	}

	printf("El precio del viaje es de %d pesos\n", precioSinDescuento);

	if(cantidadMayores > numeroDeCliente/2){
		precioConDescuento = precioSinDescuento*0.75;
		printf("El precio del viaje con el descuento es de %d pesos", precioConDescuento);
	}


	return EXIT_SUCCESS;
}
