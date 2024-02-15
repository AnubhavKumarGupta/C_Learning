#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Input the number\n");
    scanf("%d%d",&a,&b);
    c=a>b?a:b;
    printf("%d is the greatest",c);
    return 0;

}