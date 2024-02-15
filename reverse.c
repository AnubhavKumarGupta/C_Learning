#include <stdio.h>
int main()
{
    int n, rev = 0;
    printf("Input the number\n");
    scanf("%d", &n);
    do
    {
        rev = rev * 10 + n % 10;
        n /= 10;

    } while (n > 0);
    printf("%d\n", rev);

    return 0;
}