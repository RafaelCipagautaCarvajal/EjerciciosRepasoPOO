#include <iostream.h>

using namespace std; 

const int z=4; 
struct persona{ 
char nombre[30]; 
char sexo; 
int edad; 
int peso; 
char pelo[15]; 
char piel[15]; 
char ojos[15]; 
char nacionalidad[15]; 
char telefono[15]; 
}; 

void mostrar(persona a); 
void limpiar(); 
char busqueda[30]; 

int main(){ 
char opcion,sexi; 
int eda,pes,cont,caso; 
persona a[z]; 
system("clear"); 
for (int i=0;i<<<<"Caracteristicas de una persona"<<<<"Ingrese el nombre de la persona "<<<": "; cin.getline(a[i].nombre,30); cout<<"Ingrese su sexo: m=masculino, f=femenino: "; cin>>a[i].sexo; 
cout<<"Ingrese su edad: "; cin>>a[i].edad; 
cout<<"Ingrese su peso en Kg: "; cin>>a[i].peso; 
cout<<"Ingrese su color de pelo: "; cin.get(); cin.getline(a[i].pelo,15); cout<<"Ingrese su color de piel: "; cin.getline(a[i].piel,15); cout<<"Ingrese su color de ojos: "; cin.getline(a[i].ojos,15); cout<<"Ingrese su nacionalidad: "; cin.getline(a[i].nacionalidad,15); cout<<"Ingrese su numero telefonico: "; cin.getline(a[i].telefono,15); } cout<<"Desea realizar alguna busqueda de datos s/n?"<>opcion; 
while (opcion=='s'){ 
cout<<"Ingrese un numero segun su opcion de busqueda:"<<<" 1 - Nombre"<<<" 2 - Sexo"<<<" 3 - edad"<<<" 4 - peso"<<<" 5 - pelo"<<<" 6 - piel"<<<" 7 - ojos"<<<" 8 - nacionalidad"<<<" 9 - telefono"<<<" 0 - salir"<>caso; 
switch(caso){ 
case 1: 
limpiar(); 
cout<<"Ingrese el nombre que desea buscar: "<<<"Ingrese la letra correspondiente al sexo: "<>sexi; 
for (int h=0;h<<"Ingrese la edad: "<>eda; 
for (int h=0;h<<"Ingrese el peso: "<>pes; 
for (int h=0;h 
cont=0; 
if (pes==a[h].peso){ 
mostrar(a[h]); 
} 
} 
case 5: 
limpiar(); 
cout<<"Ingrese el color de pelo: "< 
cin.get(); 
cin.getline(busqueda,30); 
for (int h=0;h 
cont=0; 
for (int i=0;i<30;i++){ cont="="0){"> 
cin.get(); 
cin.getline(busqueda,30); 
for (int h=0;h 
cont=0; 
for (int i=0;i<30;i++){ cont="="0){"> 
cin.get(); 
cin.getline(busqueda,30); 
for (int h=0;h 
cont=0; 
for (int i=0;i<30;i++){ cont="="0){"> 
cin.get(); 
cin.getline(busqueda,30); 
for (int h=0;h 
cont=0; 
for (int i=0;i<30;i++){ cont="="0){"> 
cin.get(); 
cin.getline(busqueda,30); 
for (int h=0;h 
cont=0; 
for (int i=0;i<30;i++){ cont="="0){" opcion="'r';"> 
break; 
} 
} 
return 0; 
} 
void mostrar(persona a){ 
cout<<"nombre: "<< 
cout<<"sexo: "<< 
cout<<"edad: "<< 
cout<<"peso: "<< 
cout<<"color de pelo: "<< 
cout<<"color de piel: "<< 
cout<<"color de ojos: "<< 
cout<<"nacionalidad: "<< 
cout<<"telefono: "<< 
cout< 
} 
void limpiar(){ 
for(int f=0;f<30;f++){>

