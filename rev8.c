#include <stdio.h>
int main()
{
    int a, b, c, d;
    printf("Input the number\n");
    scanf("%d%d%d", &a, &b, &c);
    d = a > b && a > c ? a : b > a && b > c ? b
                                            : c;
    printf("%d is the greatest among all", d);
    return 0;
}