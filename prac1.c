#include <stdio.h>
#include <stdlib.h>

void swap(int *az, int *bz)
{
    int temp = *az;
    *az = *bz;
    *bz = temp;
}

// A function for carrying out bubble sort.
void sort(int arr[], int k)
{
    int i, j;
    for (i = 0; i < k - 1; i++)

        // The last i elements are already in place.
        for (j = 0; j < k - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
}

// A function that arranges the array.
void rearrangeArray(int arr[], int k)
{
    // Sorting the elements in an array
    sort(arr, k);

    int tempArr[k]; // To store modified array

    // Numbers from a sorted array are added to
    // new array as needed
    int ArrIndex = 0;

    // Traverse from beginning to end at the same time.
    for (int i = 0, j = k - 1; i <= k / 2 ||
                               j > k / 2;
         i++, j--)
    {
        tempArr[ArrIndex] = arr[i];
        ArrIndex++;
        tempArr[ArrIndex] = arr[j];
        ArrIndex++;
    }

    // Changing the original array
    for (int i = 0; i < k; i++)
        arr[i] = tempArr[i];
}

// Driver Code
int main(void)
{
    int *arr, k;
    scanf("%d", &k);
    arr = (int *)malloc(k * sizeof(int));

    for (int i = 0; i < k; i++)
        scanf("%d", &arr[i]);

    rearrangeArray(arr, k);

    for (int i = 0; i < k; i++)
        printf("%d ", arr[i]);

    printf("\n");

    return 0;
}