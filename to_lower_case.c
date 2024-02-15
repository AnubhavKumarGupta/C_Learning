#include <stdio.h>
#include <ctype.h>
int main()
{
    int a, b;
    printf("Input the upper case latter\n");
    scanf("%c", &a);
    b = tolower(a);
    printf("%c", b);
    return 0;
}