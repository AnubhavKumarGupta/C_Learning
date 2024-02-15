#include <stdio.h>
int main()
{
    int a[] = {1, 2, 34, 56, 78, 32, 98, 99, 45, 67, 51};
    int small, large, i;
    small = large = a[0];
    for (i = 1; i < 10; i++)
    {
        if (a[i] < small)
            small = a[i];
        if (a[i] > large)
            large = a[i];
    }
    printf("%d is small\t %d is large\t", small, large);
    return 0;
}