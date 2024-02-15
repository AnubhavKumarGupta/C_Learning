#include <stdio.h>
int main()
{
    int a = 2, b = 4, temp;
    temp = a;
    a = b;
    b = temp;
    printf("%d\t %d\t", a, b);
    return 0;
}