#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number : \n");
    scanf("%d", &a);
    printf("Octal - %o, Hexadecimal - %x\n", a, a);
    return 0;
}