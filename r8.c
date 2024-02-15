#include <stdio.h>
int main()
{
    int x, y, z;
    scanf("%d%d", &x, &y);
    z = x > y ? x : y;
    printf("%d is the greatest among them", z);
    return 0;
}