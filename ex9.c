#include <stdio.h>
#include <math.h>
int main()
{
    int a,i;
    printf("Input the number\n");
    scanf("%d", &a);
    for (i = 2; i <= sqrt(a); i++)
        if (a % i == 0)
            break;
    if (i > sqrt(a))
    {
        printf("%d is prime number\n", a);
    }
    else
    {
        printf("%d is NOT prime number\n", a);
    }
    return 0;
}