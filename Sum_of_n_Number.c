#include <stdio.h>  
#include <conio.h>  
void main()  
{  
    int n,sum;
    printf(" Enter a positive number: ");  
    scanf("%d", &n); 
    
    sum=n * (n + 1) / 2;  

    printf("\n Sum of the first %d number is: %d", n, sum);   
    getch();  
}  