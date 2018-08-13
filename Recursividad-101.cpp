#include <iostream>
using namespace std;
int acumulador, contador, n1, n2;

int main()
{
    

    cout<<"Ingrese primer numero:"<<endl;
    cin>>n1;
    cout<<"Ingrese segundo numero"<<endl;
    cin>>n2;

    if ( n1 >= 0 && n2 >= 0 )
    {
        acumulador = 0;

        if ( n2 != 0 )
        {
            contador = 1;
            while ( contador <= n1 )
            {
                acumulador += n2;
                contador++;
            }
        }

        cout<<n1<<"*"<<n2<<"="<<acumulador<<endl;

    }
    else
    {
    
	 	cout<<"Ambos numeros deben ser mayor a cero"<<endl;	
	}    

   

system ("pause"); 
return 0;
}
