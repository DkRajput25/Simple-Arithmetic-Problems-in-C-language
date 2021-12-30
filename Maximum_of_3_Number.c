#include <stdio.h>  
#include <conio.h> 
 
void main()  
{  
    int a,b,c;
    printf(" Enter a first number:\n ");  
    scanf("%d", &a); 
    printf(" Enter a Second number:\n ");  
    scanf("%d", &b); 
    printf(" Enter a Third number:\n ");  
    scanf("%d", &c); 

    if (a>b)
    {
        if (a>c)
    
        {
            printf("%d is Maximum",a);

        }
        else if (b>c)
        {
            printf("%d is Maximum",b);

        }
        else
        {
            printf("%d is Maximum",c);

        }
        
    }
    
    
    getch();  
}  