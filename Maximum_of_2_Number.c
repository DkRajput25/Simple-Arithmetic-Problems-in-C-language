#include <stdio.h>  
#include <conio.h>  
void main()  
{  
    int i,j;
    printf(" Enter a first number:\n ");  
    scanf("%d", &i); 
    printf(" Enter a Second number:\n ");  
    scanf("%d", &j); 

    if (i>j)
    {
        printf("%d is Maximum",i);

    }
    else
    {
        printf("%d is Maximum",j);
    }
    
    getch();  
}  