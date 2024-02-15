#include <stdio.h>
int main()
{
    int a, b, n, c, sum = 0;
    printf("Input the number\n");
    scanf("%d", &n);
    c = n;
    while (n > 0)
    {
        a = n % 10;
        b = a * a * a;
        sum += b;
        n /= 10;
    }

    if (sum == c)
    {
        printf("This input is armstrong");
    }
    else
    {
        printf("This input is NOT armstrong");
    }
    return 0;
}