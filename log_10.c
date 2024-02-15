#include <stdio.h>
#include <math.h>
int main()
{
    int a;
    printf("Input the number\n");
    scanf("%d", &a);
    a = log10(a);
    printf("%d", a);
    return 0;
}