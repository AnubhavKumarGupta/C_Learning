#include <stdio.h>
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 12, 3, 44, 5, 66, 77, 88, 9};
    printf("%d", sizeof(a) / sizeof(a[0]));
    return 0;
}