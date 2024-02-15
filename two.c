#include <stdio.h>
int main()
{
    int a, b, max1, max2;
    printf("Enter two number : \n");
    scanf("%d%d", &a, &b);
    max1 = a > b ? a : b;
    printf("this is max %d\t Sum is %d\n", max1, a + b);
    max2 = b > a ? b : a;
    printf("this is max %d\t Difference is %d\n", max2, a - b);
    return 0;
}