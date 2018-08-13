 //Escribir un programa que sume, reste, multiplique y divida dos números leídos desde el teclado
 #include<iostream>
 #include <stdio.h>
 #include <math.h>
 using namespace std;

int main(){
	
	float Num1, Num2, suma, resta, multi, divi;
	
	cout <<" la suma de "<< Num1 << "+" << Num2 << " es: " <<  " " << Num1 + Num2 << endl;
    cout<<" la resta de " << Num1 << " - " << Num2<< " es:"<<  " " <<Num1-Num2 <<endl;
    cout<<" la multiplicacion  de " << Num1 << " * " << Num2 << " es:"<<  " " <<  Num1*Num2 << endl;
    cout<<" la divicion de " << Num1 << " / " << Num2 << " es:"<<  " " << Num1/Num2 << endl;
    system("PAUSE");
    return 0;
    
}
	
