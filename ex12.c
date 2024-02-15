#include <stdio.h>
int main()
{
    int i, j, a;
    printf("Input the times of number\n");
    scanf("%d", &a);
    for (i = 1; i <= a; i++) //for no. of lines
    {
        for (j = 1; j <= i; j++)//for no. of stars

            printf("*  ");
        printf("\n");//for next line of pyramid
    }

    return 0;
}