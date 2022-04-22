#ifndef MANEJOARRAYS_H_
#define MANEJOARRAYS_H_

/// @brief Toma un array y lo inicializa con los valores del tercer parametro
/// @param array: cadena a inizializar
/// @param len: longitud del array
/// @param datoInicial: dato que se cargara en todas las posiciones de array
/// @return -1 si se han ingresado datos invalidos. 0 en caso contrario.
int inicializarArrayInt (int array[], int len, int datoInicial);

/// @brief Toma un array y lo ordena de menor a mayor
/// @param array: cadena a inizializar
/// @param len: longitud del array
/// @return -1 si se han ingresado datos invalidos. 0 en caso contrario.
int ordenarArrayInt(int pArray[], int len);

/// @brief Toma un array y lo muestra al usuario
/// @param array: cadena a inizializar
/// @param len: longitud del array
/// @return -1 si se han ingresado datos invalidos. 0 en caso contrario.
int mostrarArrayInt(int array[], int len);

/// @brief Toma un array de caracteres y lo muestra al usuario
/// @param array: cadena a inizializar
/// @param len: longitud del array
/// @return -1 si se han ingresado datos invalidos. 0 en caso contrario.
int mostrarArrayChar(char array[], int len);



#endif
