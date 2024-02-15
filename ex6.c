#include <stdio.h>
int add(int a, int b);
int main()
{
    int x, y;
    printf("Input the number\n");
    scanf("%d%d", &x, &y);
    printf("%d", add(x, y)); //value pass nhi kr pa rha tha
    return 0;
}
int add(int a, int b)
{
    int c;
    c = a + b;
    return c;
}
