#include <stdio.h>
int fac(int a); //define
int main()
{
    int n;
    printf("Input the number\n");
    scanf("%d", &n);
    printf("%d", fac(n)); //calling
    return 0;
}
int fac(int a) //definition
{
    int i, fac = 1;
    for (i = a; i > 1; i--)
    {
        fac *= i;
    }
    return fac;
}