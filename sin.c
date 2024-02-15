#include <stdio.h>
#include <math.h>
int main()
{
    int a, s;
    printf("Input the angle in radion\n");
    scanf("%d", &a);
    s = sin(a);
    printf("%d", s);
    return 0;
}