#include <stdio.h>
#define c 0.50
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a;
        float b, d;
        scanf("%d%f", &a, &b);
        if (a % 5 == 0 && b / 5 == 0)
        {
            d = b - a - c;
            printf("%0.2f", d);
        }
    }
    return 0;
}