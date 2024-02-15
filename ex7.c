#include <stdio.h>
int reverse(int a);
int main()
{
    int x;
    printf("Input the number\n");
    scanf("%d", &x);
    printf("%d", reverse(x));
    return 0;
}
int reverse(int a)
{
    int result = 0;
    while (a > 0)
    {
        result = result * 10 + a % 10;
        a = a / 10;
    }

    return result;
}
