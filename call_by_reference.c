#include <stdio.h>

void swap(int *m, int *n);

void main()
{
    int a = 5, b = 2;
    swap(&a, &b);
    puts("After swapping:");
    printf("a is %d\nb is %d", a, b);
}

void swap(int *m, int *n)
{
    int p;
    p = *m;
    *m = *n;
    *n = p;
}