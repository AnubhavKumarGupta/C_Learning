#include <stdio.h>
int main()
{
    int w, x, y, z;
    scanf("%d%d%d", &w, &x, &y);
    printf("Input Elements is %d %d %d\n", w, x, y);
    z = w > x && w > y ? w : x > y && x > w ?x : y;
    printf("%d is the greatest among all", z);
    return 0;
}