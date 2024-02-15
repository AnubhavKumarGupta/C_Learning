#include <stdio.h>
int odd(int a);
int even(int a);
int main()
{
    int x;
    printf("Input the number\n");
    scanf("%d", &x);
    printf("%d\n", odd(x), even(x));
    return 0;
}
int odd(int a)
{
    int q;
    if (a % 2 != 0)
    {
        q = a + 1;
        return q;
    }
}
int even(int a)
{
    int r;
    if (a % 2 != 0)
    {
        r = a - 1;
        return r;
    }
}