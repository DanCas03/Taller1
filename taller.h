#include <iostream>
#include <string>
using namespace std;

int imprimirArray(int array[], int tamano)
{
    for (int i = 0; i < tamano; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
    return 0;
}
//función que dice si un string es un número entero
bool esNumeroEntero(string numero)
{
    for (int i = 0; i < numero.length(); i++)
    {
        if ((numero[i] <= '0' && numero[i] >= '9'))
        {
            return false;
        }
    }
    return true;
}
//función que dice si un string es un número real
bool esNumeroReal(string numero)
{
    for (int i = 0; i < numero.length(); i++)
    {
        if ((numero[i] <= '0' && numero[i] >= '9') || numero[i] != '.' || numero[i] != ',')
        {
            return false;
        }
    }
    return true;
}
// función de string a integer
int stringToInt(string numero)
{
    int numeroInt=0;  
    if (esNumeroEntero(numero) ){
    int numeroInt = stoi(numero);
    return numeroInt;
    }else
    {
        cout << "no es numero" << endl;
    }
    
    return numeroInt;
}
// función de string a float
float stringToFloat(string numero)
{
    float numeroFloat=0;
    if (esNumeroReal(numero))
    {
        numeroFloat = stof(numero);
        return numeroFloat;
    }else
    {
        cout << "no es numero" << endl;
    }
    
    return numeroFloat;
}
// funcion de intercambiar dos variables
// void swap(int *x, int *y); asi se llama

void swap(int a , int b ){
	int aux = 0;
	aux = a;
	a = b;
	b = aux;
}
