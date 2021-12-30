#include <stdio.h>

void main()
{

    int i, j;

    printf("\nEnter the number:\n");
    scanf("%d", &i);

    for (j = 1; j <= 10; j++)
    {
        printf("%d x %d = %d\n", i, j, j * i);
    }
}