#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c, d;
    scanf("%d%d%d", &a, &b, &c);
    d = ((-b + sqrt(b * b - 4 * a * c)) / 2 * a);
    printf("%d\n", d);
    return 0;
}