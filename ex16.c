#include <stdio.h>
int main()
{
    int i, j, n;
    printf("Input the number of times\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)

            printf("%2d", i+j);
        printf("\n");
    }
    return 0;
}