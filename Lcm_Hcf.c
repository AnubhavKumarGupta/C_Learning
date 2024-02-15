#include <stdio.h>
int main()
{
    int a, b, x, y;
    printf("Enter the number:\n");
    scanf("%d%d", &x, &y);
    a = x;
    b = y;
    while (a != b)
    {
        if (a < b)

            a = a + x;

        else
            b = b + y;
    }
    printf("%d is the lcm:\n", a);
    a = x;
    b = y;
    while (a != b)
    {
        if (b < a)

            a = a - b;

        else
            b = b - a;
    }
    printf("%d is the Hcf:", a);
    return 0;
}