#include <iostream>
#include <string>
#include <fstream>
#include "biblioteca1.h"
using namespace std;

int main(){
    string nombreArchivo;
    do
    {
        cout << "Introduce el nombre del archivo: ";
        cin >> nombreArchivo;
    } while (!validarArchivo(nombreArchivo));
    
    
    int op;

    cout << "¿Qué quieres hacer?" << endl;
    cout << "1. Leer el archivo." << endl;
    cout << "2. Añadir datos al archivo." << endl;
    cout << "3. Eliminar datos del archivo." << endl;
    cout << "4. Comprobar si el archivo está vacío." << endl;
    cout << "Opción: ";
    cin >> op;
    switch (op){
        case 1:
            leerArchivo(nombreArchivo);
            imprimirDatosArchivo(nombreArchivo);
            break;
        case 2:
            añadirDatosArchivo(nombreArchivo);
            imprimirDatosArchivo(nombreArchivo);
            break;
        case 3:
            eliminarDatosArchivo(nombreArchivo);
            break;
        case 4:
            archivoVacio(nombreArchivo);
            break;
        case 5:
            cout << "Saliendo del programa..." << endl;
            break;
        default:
            cout << "Opción no válida." << endl;
    }

    return 0;
}