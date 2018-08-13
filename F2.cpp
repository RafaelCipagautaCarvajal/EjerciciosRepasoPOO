// programa que calcula el numero de horas, minutos, y segundos que hay en 3700 segundos
#include<iostream>
using namespace std;
int main()
{
    int Seg= 3700, Min, H;
    H = (Seg/3600);
    Min =((Seg - H * 3600) / 60);
    cout<<" 3700 segundos  equivalen " << H << " Horas " << Min<<" Minutos "<< endl;
    system("PAUSE");
    return 0;
    
}
