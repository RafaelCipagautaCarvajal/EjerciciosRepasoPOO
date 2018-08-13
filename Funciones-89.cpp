#include <iostream>
using namespace std;

int y;

int factorial (int a);

int main()
{
	cout<<"Ingrese un numero:"<<endl;
	cin>>y;
	factorial(y);

return 0;
}


int factorial(int a)
{
int x=1;	
	for(a;a>0;a--)
	{
		x=x*a;
	}
	cout<<x<<endl;	
}

