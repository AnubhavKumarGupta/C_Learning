#include <stdio.h>
#define PI 3.14
int main()
{
    int r, a, p;
    printf("The radius of the circle\n");
    scanf("%d", &r);
    a = PI * r * r;
    p = 2 * PI * r;
    printf("The area of the circle is %d\t the perimeter of the circle is %d\t", a, p);
    return 0;
}