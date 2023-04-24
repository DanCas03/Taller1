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
    bool salir=false;
    int opcion;
    do
    {
        cout << "Menu" << endl; 
        cout << "1. ..." << endl;
        cout << "2. ..." << endl;
        cout << "3. ..." << endl;
        cout << "4. Salir" << endl;
		cin >> opcion;
		
		switch (opcion)
		{
			case 1: cout << "Usted ha seleccionado la opción 1";
			break;
			case 2: cout << "Usted ha seleccionado la opción 2";
			break;
			case 3: cout << "Usted ha seleccionado la opción 3";
			break;
            case 4: {cout << "Usted ha seleccionado salir";
            salir=true; break;}
			default: cout << "Usted ha ingresado una opción incorrecta";
			break;
		}   
    } while (salir == false);
}
int main()
{
    menu();
    delete registroPtr;
    return 0;
}
