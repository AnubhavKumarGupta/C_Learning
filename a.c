#include <stdio.h>
void swap(int &, int &);
int main()
{

    int array[] = {3, 5, 1, 4, 6, 2};

    int done = 0;

    int i;

    while (done == 0)
    {

        done = 1;

        for (i = 0; i <= 4; i++)
        {
            if (array[i] < array[i + 1])

            {

                swap(array[i], array[i + 1]);

                done = 0;
            }
        }
    }

    for (i = 5; i >= 1; i--)
    {
        if (array[i] > array[i - 1])
        {
            swap(array[i], array[i - 1]);

            done = 0;
        }
    }

    printf("%d", array[3]);
}
void swap(int &x, int &y)
{
    int t;
    t = y;
    y = x;
    x = t;
}