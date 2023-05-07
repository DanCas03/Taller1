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
        if ((numero[i] <= '0' || numero[i] >= '9'))
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
        if ((numero[i] <= '0' || numero[i] >= '9') || numero[i] != '.' || numero[i] != ',')
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
        cout << "no es numero entero" << endl;
        return 0;
    }
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
        cout << "no es numero real" << endl;
        return 0;
    }
}
// función que nos dice si un número es primo
bool esPrimo(string numeroString)
{
    int contador = 0;
    if (esNumeroEntero(numeroString))
    {
        int numero=stringToInt(numeroString);
        for (int i = 1; i <= numero; i++){
        if (numero % i == 0) 
        {
            contador++;
        }
    }
    if (contador == 2)
    {
        return true;
    }
    else
    {
        return false;
    }
    }
    else
    {
        cout << "no es numero" << endl;
        return false;
    }
    
}
// funcion de intercambiar dos variables
// void swap(int *x, int *y); asi se llama

void swap(int a , int b ){
	int aux = 0;
	aux = a;
	a = b;
	b = aux;
}
//función para saber si un string es un número entero
bool isInteger(string str) {
    int i = 0;
    for ( i < str.length(); i++;) {
        if (str[i] < '0' || str[i] > '9') {
            return false;
        }
    }
    return true;
}

bool soloEspacios(string str) {
    for (int i = 0; i < str.length(); i++)
        if (str[i] != ' ')
            return true;
    return false;
}

bool cadenaValida(string str){
    if (str.empty())
        return false;
    else
        if (soloEspacios(str))
            return true;
        else 
            return false;   
}

bool esFloatValido(string &str) {
    bool hasDecimalPoint = false;
    for (char c : str) {
        if (c == '.') {
        if (hasDecimalPoint) return false;
            hasDecimalPoint = true;
        } else if (!isdigit(c)) {
        return false;
        }
    }
    try {
    stof(str);
    return true;
    } catch (const invalid_argument &e) {
    return false;
    }
}
