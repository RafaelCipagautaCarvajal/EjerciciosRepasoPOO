#include <iostream>
using namespace std;

int w,x,y,z;

int mayor (int a,int b);
int menor (int a,int b);

int main()
{
	cout<<"Ingrese numero 1:"<<endl;
	cin>>y;
	cout<<"Ingrese numero 2:"<<endl;
	cin>>z;	
	
	
	w=mayor (y,z);
	x=menor (y,z);

	cout<<"Mayor numero:"<<endl;
	cout<<w<<endl;
	cout<<"Menor numero:"<<endl;
	cout<<x<<endl;
	

return 0;
}


int mayor (int a,int b)
{
int x;	
	if(a>b)
	{
		x=a;
	}
	if(b>a)
	{
		x=b;
	}
return x;		
}

int menor (int a,int b)
{
int x;	
	if(a<b)
	{
		x=a;
	}
	if(b<a)
	{
		x=b;
	}
return x;	
}
