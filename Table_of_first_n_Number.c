#include <stdio.h>

void main()
{

    int i, j,k;

    printf("\nEnter the number:\n");
    scanf("%d", &k);

    for (j = 2; j <= k; j++)
    {
        printf("\nTable of %d\n", j);
        for (i = 1; i <= 10; i++)
        {
            printf("%d\n", j * i);
        }
    }
}