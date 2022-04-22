/*
Ejercicio 7-2: Crear un programa que permita registrar el valor de temperatura m�xima de cada d�a de un mes.
Definir un array de float de 31 posiciones. Cada posici�n corresponder� a un d�a.
Hacer un programa con un men� de dos opciones:
1- imprimir el array
2- cargar array
La opcion 1 imprimir� el �ndice, el n�mero de d�a y el valor de cada posici�n del array
La opci�n 2 pedir� al usuario el d�a (1 a 31) y a temperatura. Guardar� en la posici�n que corresponda.
Ambas opciones deben volver al men� principal.
 */

#include <stdio.h>
#include <stdlib.h>
#include "ManejoArrays.h"
#include "IngresoDeDatos.h"

#define LEN_MES 31

int main(void) {
	setbuf(stdout, NULL);

	float arrayTemperaturasDelMes[LEN_MES];
	char opcionMenu;
	int i;
	int aux;






	inicializarArrayFloat (arrayTemperaturasDelMes, LEN_MES, 0);


	do{
		printf("-----REGISTRO DE TEMPERATURA-----\n");
		printf("1) Mostrar las temperaturas del mes.\n");
		printf("2) Cargar la temperatura de un dia.\n");
		printf("3) Salir.\n");
		aux = getInt(&opcionMenu, "", "Ingrese una opcion valida\n", 1, 3, 3);

		switch(opcionMenu){
		case 1:
			for (i = 0; i < LEN_MES; i++) {
				printf("Temperatura del dia %d : %.1f\n", (i+1), arrayTemperaturasDelMes[i]);
			}
			break;
		case 2:
			cargaAleatoriaDeArrayFloat(arrayTemperaturasDelMes, LEN_MES, -15, 45, "Por favor, ingrese la temperatura:\n", "Por favor, seleccione el dia: \n", "Ha habido un error. Por favor reintente\n");
			break;
		case 3:
			break;
		}



	}while(opcionMenu != 3);


	return EXIT_SUCCESS;
}
