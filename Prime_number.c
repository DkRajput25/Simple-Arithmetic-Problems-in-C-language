#include <stdio.h>

void main()
{
    int i, j, k;
    int num = 0;
    printf("Enter a number: ");
    scanf("%d", &k);
    for (i = 2; i <= k/3; i++)
    {
        if (k % i == 0)
        {
            num = 1;
            break;
        }
    }
    if (num == 1 || k==1 || k==0)
    {
        printf("Number is Not Prime Number\n");
    }
    else
    {
        printf("Number is Prime Number\n");
    }
}
