#include <stdio.h>

int main()
{
    int i, f = 1, num;
    printf("enter a num:\n");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        f = f * i;
    }
    printf("Factorial=%d", f);
}