#include <stdio.h>
#include <math.h>
int main()
{
    int n, i;
    printf("Enter the number\n");
    scanf("%d", &n);
    for (i = 2; i <= sqrt(n); i++) // sqrt is a liberary function which return the square of the number
        if (n % i == 0)
            break;
    if (i > sqrt(n))
    {
        printf("the number is prime\t");
    }
    else
    {
        printf("the number is NOT prime\t");
    }

    return 0;
}