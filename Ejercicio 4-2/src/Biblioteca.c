#include <stdio.h>
#include <stdlib.h>


int getFloat(char mensaje[], float min, float max, float * numero){
	int succes;
	int auxiliar;
	succes = -1;

	do{
		printf(mensaje);
		scanf("%d", &auxiliar);
	}while(auxiliar<min || auxiliar>max);

	*numero = auxiliar;
	succes = 0;
	return succes;
}
