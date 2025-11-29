#include <stdio.h>
int main()
{
    int n, i, fac;
    printf("enter the number:");
    scanf("%d", & n);
    for (i=2; i<=n; i++);
    {
        fac = n*i;
        printf("factorial = %d", fac);
    }
    return 0;
}
