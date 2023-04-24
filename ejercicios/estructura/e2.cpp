/*
2.- Una compañía de seguros de reconocido prestigio ha decidido contratar sus servicios para
desarrollar un sistema que le permita calcular sus ganancias y pérdidas. Para ello es necesario
controlar sus ingresos y egresos, de los cuales se desea conocer por egreso: fecha, concepto,
monto y beneficiario; por ingreso: fecha, concepto y monto. Si el ingreso proviene de un
asegurado natural, se desea su número de póliza, nombre y C.I.; si proviene de un asegurado
jurídico solo su RIF.
Asimismo, es necesario tener control de los asegurados y para ello desean registrar su nombre, C.I.
ó RIF, número de póliza, fecha de adquisición y fecha de vencimiento.
Ud. debe satisfacer los siguientes requerimientos:
a) Diseñar una estructura de datos que permita representar esta información.
b) Dada una fecha, calcular el monto obtenido de ganancia ó perdida hasta la fecha
actual.
c) Conocer qué tipo de asegurado ha recibido más beneficios por parte del seguro.
d) Registrar un ingreso.
*/
#include<iostream>
#include<conio.h>
#include <stdlib.h>
using namespace std;

struct egreso{
  int fecha;
  char concepto[20];
  int monto;
  char beneficiario[20];
}perderDinero[100];

struct ingreso{
  int fecha;
  char concepto[20];
  int monto;
}ganarDinero[100];

struct  aseguradoNatural{
  char poliza[20];
  char nombre[20];
  int CI;
  char beneficiario[20];
}AN[100];

struct  aseguradoJuridico{
  char rif[20];
}AJ[100];

struct asegurado {
  // poliza o rif despues
  int nroDePoliza;
  int fechaIncio;
  int fechaFin;
}PersonaConSeguro[100];

int main(){
   int fechaActual = 20042023 , fechaBuscar; // 20/04/2023
   int N_egresos , N_ingresos , t_ganancia=0 , t_perdida=0, balanceDeDinero=0;
cout<<"Cuantos egresos huberion: "; cin >> N_egresos;
cout<<"\n";
cout<<"Cuantos ingresos huberion: "; cin >> N_ingresos;
cout<<"\n";   

for(int i=0; i<N_egresos;i++){  
      fflush(stdin);
   
  cout<<i+1<<"fecha: ";
  cin>>perderDinero[i].fecha;
  fflush(stdin); 
  cout<<i+1<<"concepto: ";
  cin.getline(perderDinero[i].concepto,20,'\n');
  fflush(stdin); 
  cout<<i+1<<"monto: ";    
  cin>>perderDinero[i].monto; 
  fflush(stdin); 
  cout<<i+1<<"Persona a dar el dinero: ";
  cin.getline(perderDinero[i].beneficiario,20,'\n');
      }
  

cout<<"imprimir"<<endl;

for(int i=0; i<N_egresos;i++){  
  cout<<i+1<<". fecha: "<<perderDinero[i].fecha<<endl; 
  cout<<i+1<<". concepto: "<<perderDinero[i].concepto<<endl;
  cout<<i+1<<". monto: "<<perderDinero[i].monto<<endl; 
  cout<<i+1<<". Persona a dar el dinero: "<<perderDinero[i].beneficiario<<endl;
  cout<<"\n";      
      }


for(int i=0; i<N_ingresos;i++){  
     
      fflush(stdin);
  cout<<i+1<<". fecha: ";
  cin>>ganarDinero[i].fecha;
  fflush(stdin); 
  cout<<i+1<<". concepto: ";
  cin.getline(ganarDinero[i].concepto,20,'\n');
  fflush(stdin); 
  cout<<i+1<<". monto: ";    
  cin>>ganarDinero[i].monto; 
      }

cout<<"imprimir"<<endl;

for(int i=0; i<N_ingresos;i++){  
  cout<<i+1<<". fecha: "<<ganarDinero[i].fecha<<endl; 
  cout<<i+1<<". concepto: "<<ganarDinero[i].concepto<<endl;
  cout<<i+1<<". monto: "<<ganarDinero[i].monto<<endl; 
  cout<<"\n";      
      }

// total de ganacia o perdida , segun fecha indicada
cout<<"A partir de que fecha buscar: "; cin >> fechaBuscar;
cout<<"\n"; 
for(int i=0; i<N_egresos;i++) 
if ((fechaBuscar <= fechaActual)&&(fechaBuscar <= perderDinero[i].fecha)) t_perdida += perderDinero[i].monto;

 for(int i=0; i<N_ingresos;i++) 
if ((fechaBuscar <= fechaActual)&&(fechaBuscar <= ganarDinero[i].fecha)) t_ganancia += ganarDinero[i].monto;    
      
balanceDeDinero = t_ganancia - t_perdida;

cout<<"El balence es:"<<balanceDeDinero<<endl;

system("pause");
return 0;
}