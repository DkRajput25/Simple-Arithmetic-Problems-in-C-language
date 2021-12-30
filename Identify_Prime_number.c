// Identify y is Prime Number or Not 

#include <stdio.h>

void main()
{
    int y;

    printf("\nEnter the number:\n");
    scanf("%d", &y);

    if (y == 1)
    {
        printf("Not Prime number");
    }
    else if (y == 2 || y == 3 || y == 5)
    {
        printf("Prime number");
    }
    else if (y % 2 == 0 || y % 3 == 0 || y % 5 == 0)
    {
        printf("Not Prime number");
    }
    else
    {
        printf("Prime number");
    }
}