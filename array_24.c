#include <stdio.h>
#define N 20
int main()
{
    int i, size, arr[N], scan;
    printf("input the size of the array\n");
    scanf("%d", &size);
    printf("input the array\n");
    for (i = 0; i < size; i++)
        scanf("%d", &arr[i]);
    scan = i;
    if (scan == arr[i])
    {
        printf("All number are distinct\n");
    }
    else
    {
        printf("Not ALL distinct\n");
    }
    return 0;
}
