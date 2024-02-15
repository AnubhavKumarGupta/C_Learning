#include <stdio.h>
int main()
{
    int i, n,result = 0,temp;
    printf("Input the number\n");
    scanf("%d", &n);
    temp=n;
    while (n > 0)
    {
        result = result * 10 + n % 10;
        n=n/10;
    }
    if (temp==result)
    {
        printf("The number is Palindrom\n");
    }
    else
    {
        printf("The number is not palindrom\n");
    }

    return 0;
}