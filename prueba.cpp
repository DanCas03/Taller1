#include <iostream>
#include <string>
#include <fstream>
#include "biblioteca1.h"
using namespace std;

int main(){
    string nombreArchivo,textoQueQueremosEliminar;
    do
    {
        cout << "Introduce el nombre del archivo: ";
        cin >> nombreArchivo;
    } while (!validarArchivo(nombreArchivo));
    
    
    int op;


do{
    cout << "¿Qué quieres hacer?" << endl;
    cout << "1. Leer el archivo." << endl;
    cout << "2. Añadir ds al archivo." << endl;
    cout << "3. Eliminar datos del archivo." << endl;
    cout << "4. Eliminar todos los datos del archivo." << endl;
    cout << "5. Comprobar si el archivo está vacío." << endl;
    cout << "6. Salir del programa." << endl;
    cout << "Opción: ";
    cin >> op;
    switch (op){
        case 1:
            imprimirDatosArchivo(nombreArchivo); 
            break;
        case 2:
            añadirDatosArchivo(nombreArchivo);
            imprimirDatosArchivo(nombreArchivo);
            break;
        case 3:
        imprimirDatosArchivo(nombreArchivo);
        cout<<endl;
        cout<<"ingresa el texto a eliminar: "; cin>>textoQueQueremosEliminar;
            eliminarDatoEspecifico(nombreArchivo,textoQueQueremosEliminar);
            imprimirDatosArchivo(nombreArchivo);
            break;
        case 4:
            eliminarTodosDatos(nombreArchivo);
            cout<<"datos eliminados"<<endl;
            break;
        case 5:
            if(!archivoVacio(nombreArchivo)){ cout<<"hay contenido en el archivo"<<endl;}
                 else cout<<"archivo vacio"<<endl;
            break;
        case 6:
            cout << "Saliendo del programa..." << endl;
            break;
        default:
            cout << "Opción no válida." << endl;
            break;
    }
}while(op != 5);

system("pause");

    return 0;
}