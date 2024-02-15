#include <stdio.h>
#include <ctype.h>
int main()
{
    char a, b;
    printf("Input the lowercase\n");
    scanf("%c", &a);
    b = toupper(a);
    printf("%c", b);
    return 0;
}