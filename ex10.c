#include <stdio.h>
int main()
{
    int a[9] = {3, 4, 5, 6, 7, 8, 9, 1, 2};
    int i;
    for (i = 8; i>=0; i--)
    {
        printf("%d\t", a[i]);
    }
    return 0;
}