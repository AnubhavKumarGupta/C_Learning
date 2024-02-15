#include <stdio.h>
int main()
{
    int i, fac=1, n;
    printf("Input the number\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        fac *= i;
    {
        printf("%d\n", fac);
    }
    return 0;
}