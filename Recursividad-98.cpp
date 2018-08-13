#include <iostream>
using namespace std;
 int x, y;
double potencia(int, int);
int main()

{
   
    cout << "Introduzca base:"<<endl;
    cin >> x;
    do
    {
        cout << "Introduzca exponente :"<<endl;
        cin >> y;
    }while(y<0);
    
	cout << x << " elevado a " << y << " = " << potencia(x,y) << endl;
    

system("pause");
}

double potencia(int x, int y)
{
 if (y==0)
    { return 1;
	}
 else
 	{
     return x*(potencia(x,y-1));
	}
}
