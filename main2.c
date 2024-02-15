#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void insert(int v, int z)
{
    printf("%d\n", v);
    printf("%d\n", z);
}

int main()
{

    int ex, a = 0, b = 0, n = 10;
    int co;
    char A[30], B[30];
    scanf("%[^\n]s", A);
    while (A[a] != '\0')
    {
        if (A[a] != '+' || '-')
        {
            B[b] = A[a];
            b += 1;
            B[b] = '\0';
        }
        else
        {
            int c = 0, sum = 0, co = 0, ex = 0;
            while (B[c] != '\0')
            {
                if (B[c] != 'X')
                {
                    sum = 10 * sum + B[c];
                    co = sum;
                }
                else
                {
                    ex = B[c + 1];
                    break;
                }
                c += 1;
            }
            insert(co, ex);
            b = 0;
        }
        a += 1;
    }

    int k = 0;
    while (B[k] != '\0')
    {
        int add = 0;
        if (B[k] != 'X')
        {
            add = 10 * add + B[k];
            co = add;
        }
        else
        {
            if (B[k + 1] == '\0')
            {
                ex = 1;
            }
            else
                ex = B[k + 1];
        }
        k += 1;
    }
    insert(co, ex);
    return 0;
}