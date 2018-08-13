#include <iostream>
#include<stdlib.h>
#include<time.h>


using namespace std;
int N[3][10],m,n,num;


int main()

{
	srand(time(NULL));
	for(n=0;n<10;n++)
		{
			N[0][n]=num=1+rand()%(20-1);
		    cout<<N[m][n]<<"   ";	
		}
		
		cout<<""<<endl;
	for(n=0;n<10;n++)
		{
			N[1][n]=N[0][n]*N[0][n];
		    cout<<N[1][n]<<"  ";	
		}
		
		cout<<""<<endl;
	for(n=0;n<10;n++)
		{
			N[2][n]=N[0][n]+N[1][n];
		    cout<<N[2][n]<<"  ";	
		}
		cout<<""<<endl;

system("pause");
return 0;	
	
}
