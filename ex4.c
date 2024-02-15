#include <stdio.h>
int square(int a);
int main()
{
    int a;
    printf("Input the numbes\n");
    scanf("%d", &a);
    printf("%d", square(a));
    return 0;
}
int square(int a)
{
    return a * a;
}