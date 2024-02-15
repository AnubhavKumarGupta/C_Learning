#include <stdio.h>
int main(void)
{
    int i, j, n;
    printf("Enter number of lines : ");
    scanf("%d", &n);
    for (j = 1; j <= n; j++)
    {
        for (i = 1; i <= j; i++)
            printf("%3d");
        printf("\n");
    }
    return 0;
}