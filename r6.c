#include <stdio.h>
int main()
{
    int a = 20, b = 5;
    printf("%d\n", a + b);
    printf("%d\n", a - b);
    printf("%d\n", a * b);
    printf("%d\n", a / b);
    printf("%d\n", a % b);
    printf("%u\n", &a);
    printf("%u\n", &b);
    return 0;
}