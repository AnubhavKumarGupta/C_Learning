#include <stdio.h>
#define row m
#define col n
int main()
{
    int n, m, i, j, mat1[row][col], mat2[row][col];
    printf("Enter the number of rows\n");
    scanf("%d", &m);
    printf("Enter the number of column\n");
    scanf("%d", &n);
    printf("input the matrix\n");
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &mat1[i][j]);
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            if (mat2[j][i] = mat1[i][j])
            {
                printf("Matrix is symmetric\n");
            }
            else
            {
                printf("Matrix is not symmetric\n");
            }

    printf("Resultant matrix is\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
            printf("%5d", mat2[j][i]);
        printf("\n");
    }
    return 0;
}