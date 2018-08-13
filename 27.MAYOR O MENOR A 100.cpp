#include <conio.h>
#include <stdio.h>

int main()
{
    	int numero;

    	printf( "\n   Introduzca un numero entero: ");
    	scanf( "%d", &numero );

    	if ( numero > 100 )
      	  printf( "\n   El numero es mayor a 100" );
    	else
         printf( "\n   El numero es menor a 100" );

    	getch();
    	return 0;
}

