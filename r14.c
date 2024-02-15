#include <stdio.h>
int main()
{
    int a;
    printf("Input the number\n");
    scanf("%d", &a);
    switch (a)
    {
    case (-1):
        printf("Input is negative\n");
        break;
    case 0:
        printf("Input is Zero\n");
        break;

    default:
        printf("Input is positive\n");
        break;
    }
    return 0;
}