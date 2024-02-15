#include <stdio.h>
int main()
{
    int a, b = 0, c,d,sum=0;
    printf("Input the number\n");
    scanf("%d", &a);
    d=a;
    while (d > 0)
    {
        b = b * 10 + d % 10;
        d = d / 10;
        c = b * b * b;
        sum=sum+d;
    }
    if (sum == d)
    {
        printf("the number is Armstrong\n");
    }
    else
    {
        printf("the number is NOT Armstrong\n");
    }
    return 0;
}