#include <stdio.h>
#define max 50
int main()
{
    int i, size, arr[50], maxi, mini;
    printf("Enter the size of the array\n");
    for (i = 0; i <= max; i++)
        scanf("%d", &size);
    printf("Enter array\n");
    scanf("%d", &arr[i]);
    maxi = mini = size = 0;
    for (i = 0; i <= size; i++)
    {
        if (arr[i] > max)
            maxi = arr[i];
        if (arr[i] < mini)
            mini = arr[i];
    }
    printf("%d  %d  %d\n", maxi, mini, maxi - mini);
    return 0;
}