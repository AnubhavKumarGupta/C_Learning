#include <stdio.h>
int main()
{
    int a[] = {1, 2, 4, 5, 7, 8, 9};
    int i;
    for (i = 6; i >= 0; i--)
    {
        printf("%d", a[i]);
    }
    return 0;
}