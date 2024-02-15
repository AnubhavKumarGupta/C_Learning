#include <stdio.h>
int main()
{
    int a, b;
    char op,add,sub,mul,div;
    printf("Enter the operation\n");
    scanf("%d%d", &a, &b);
    switch (op)
    {
    case 'add':
        printf("%d", a + b);
        break;
    case 'sub':
        printf("%d", a - b);
        break;
    case 'mul':
        printf("%d", a * b);
        break;
    case 'div':
        printf("%d", a / b);
        break;

    default:
        printf("Enter valid operation\n");
    }
    return 0;
}