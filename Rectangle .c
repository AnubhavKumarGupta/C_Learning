#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a, b, c, d;
        scanf("%d%d%d%d", &a, &b, &c, &d);
        if (a == b || a == c || a == d)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }
    return 0;
}