#include <stdio.h>
int main(void)
{
    int i, j, n;
    printf("Enter number of lines : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
            printf("%3d", i + j - 1);

        printf("\n");
    }
    return 0;
}