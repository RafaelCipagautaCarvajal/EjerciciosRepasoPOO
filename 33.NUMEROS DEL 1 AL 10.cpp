#include <conio.h>
#include <stdio.h>

int main()
{
    int a;

    printf( "\n   " );

    a = 1;   
    while ( a <= 10 )       
    {
        printf( "%d ", a );   
        a++;                  
    }

    getch();

    return 0;
}
