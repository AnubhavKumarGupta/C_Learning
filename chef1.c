#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int A, B, C, D;
        scanf("%d %d %d %d", &A, &B, &C, &D);
        if (A + B + C <= D)
        {
            printf("1\n");
        }
        else if (A + B <= D)
        {
            printf("2\n");
        }
        else
        {
            printf("3\n");
        }
    }

    return 0;
}