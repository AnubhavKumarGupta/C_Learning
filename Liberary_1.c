#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c;
    printf("Input the a and b value\n");
    scanf("%d%d", &a, &b);
    c = pow(a, b);
    printf("%d", c);
    return 0;
}