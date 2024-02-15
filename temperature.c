#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the temp\n");
    scanf("%d", &a);
    b = (9 * a / 5) + 32; //care should be taken before applying the formula to convert F to C
    //i.e; 9*temp/5 is correct not this (9/5*a) 
    printf("%d\t", b);
    return 0;
}