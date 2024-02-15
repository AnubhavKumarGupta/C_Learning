#include <stdio.h>
int main()
{
    int N, arr[N], i, small, large, min, max;
    printf("Enter the size of the array\n");
    scanf("%d", &N);
    printf("Input the elements of the array\n");
    for (i = 0; i <= N; i++)
    {
        scanf("%d", &arr[i]);
    }

    small = large = arr[0];
    for (i = 0; i <= N; i++)
    {
        if (arr[i] < small)
            small = arr[i];
        if (arr[i] > large)
            large = arr[i];
    }
    printf("%d is the small & %d is large", small, large);
    return 0;
}