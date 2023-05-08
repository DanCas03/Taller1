#ifndef biblioteca1
#define biblioteca1

#include <iostream>
#include <string>

using namespace std;
bool validarArchivo(string nombreArchivo);
void leerArchivo(string nombreArchivo);
void añadirDatosArchivo(string nombreArchivo);
void imprimirDatosArchivo(string nombreArchivo);
void eliminarDatosArchivo(string nombreArchivo);
bool archivoVacio(string nombreArchivo);

void introducirDatosArray(string array[], int tamano);

void imprimirArray(string array[], int tamano);

bool estaVacia(string array[], int tamano);


//función que dice si un string es un número entero
bool esNumeroEntero(string numero);

//función que dice si un string es un número real
bool esNumeroReal(string numero);

// función de string a integer
int stringToInt(string numero);
// función de string a float
float stringToFloat(string numero);
// función que nos dice si un número es primo
bool esPrimo(string numeroString);
// funcion de intercambiar dos variables
// void swap(int *x, int *y); asi se llama

void swap(int a , int b );
//función para saber si un string es un número entero
bool isInteger(string str);
bool soloEspacios(string str);
bool cadenaValida(string str);
bool esFloatValido(string &str);

#include"biblioteca1.cpp"
#endif