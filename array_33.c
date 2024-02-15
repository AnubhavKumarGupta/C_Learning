#include <stdio.h>
#define max 20
int main()
{
    int i, j, a[max][max], m, n, temp;
    printf("Enter the number of rows\n");
    scanf("%d", &m);
    printf("Enter the number of column\n");
    scanf("%d", &n);
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
        printf("\n");
    }
    for (j = 0; j < n; j++)
    {
        temp = a[0][j];
        a[0][j] = a[m - 1][j];
        a[m - 1][j] = temp;
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            printf("%4d", a[i][j]);
        printf("\n");
    }
    printf("\n\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            printf("%4d", a[i][j]);
        printf("\n");
    }
    return 0;
}