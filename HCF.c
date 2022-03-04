// Highest Common Factor

#include <stdio.h>

int HCF(int n, int m)
{
    if (n>=m && (n%m == 0))
    return m;
    else
    return HCF(m, (n%m));
}
void main()
{
    int n, m,result;
    printf("Enter the first number :");
    scanf("%d",&n);
    printf("Enter the Second number :");
    scanf("%d",&m);
    result = HCF(n,m);
    printf("The Highest Common Factor is : %d", result);
}