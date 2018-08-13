#include <iostream>
using namespace std;
struct Sucursal
{
char descripcion[30],lugar;
int hora;
string fecha;
};
Sucursal a[1];
int y,x,m,t;

int main()

{
	
	
cout<<"Ingrese: "<<endl;
cout<<"Lugar:"<<endl;
cin>>a[1].lugar;
cout<<"Descripcion:"<<endl;
cin>>a[1].descripcion;
cout<<"Hora:"<<endl;
cin>>a[1].hora;
cout<<"Fecha:"<<endl;
cin>>a[1].fecha;
cout<<endl;
	
	
	
	
system("pause");
return 0;
	
	
	
}
