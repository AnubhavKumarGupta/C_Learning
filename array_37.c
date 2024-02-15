#include <stdio.h>
#define row 3
#define col 3
int main()
{
    int i, j, mat1[row][col], mat2[col][row];
    printf("Enter the matrix elements\n");
    for (i = 0; i < row; i++)
        for (j = 0; j < col; j++)
            scanf("%d", &mat1[row][col]);
    for (i = 0; i < col; i++)
        for (j = 0; j < row; j++)
            mat2[i][j] = mat1[j][i];
    printf("This is transpose matrix\n");
    for (i = 0; i < col; i++)
    {
        for (j = 0; j < row; j++)
            printf("%4d", mat2[i][j]);
        printf("\n");
    }
    return 0;
}