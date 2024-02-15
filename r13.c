#include <stdio.h>
int main()
{
    int a;
    printf("Input the number\n");
    scanf("%d", &a);
    if (a > 100)
    {
        printf("Input number is greater than 100\n");
    }
    else
    {
        printf("Input number is less than 100\n");
    }
    return 0;
}