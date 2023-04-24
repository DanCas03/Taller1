#include <iostream>
#include "taller.h"	// This is the header file
#include <string>

using namespace std;
typedef struct 
{
    int array[10];
    int tamano;
    string numeroString;
    int numeroInt;
    float numeroFloat;
    bool util;
} tRegistro;
typedef tRegistro *tRegistroPtr;
tRegistroPtr registroPtr = new tRegistro;


void menu()
{
    bool salir;
    int opcion;
    do
    {
        cout << "1. Ingresar datos" << endl;
        cin >> opcion;
        cout << "2. Mostrar datos" << endl;
        cin >> opcion;
        cout << "3. Salir" << endl;
        salir=true;
    } while (salir == false);
}
int main()
{
    menu();
    delete registroPtr;
    return 0;
}