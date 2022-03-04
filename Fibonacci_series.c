#include <stdio.h>
#include <math.h>
void main()
{
    int f1 = 0, f2 = 1, f3, i;
    printf("\nFirst 10 Fibonacci numbers");
    printf("\n%d\n%d",f1,f2);
    for ( i = 1; i <= 8; i++)
    {
        f3=f1+f2;
        printf("\n%d",f3);
        f1 = f2;
        f2= f3;
    }
}