#include <stdio.h>

int find_ana(char[], char[]);

int main()
{
    char arr1[100], arr2[100];
    int flag;

    gets(arr1);
    gets(arr2);
    flag = find_ana(arr1, arr2);
    if (flag == 1)
        printf(" Yes \n", arr1, arr2);
    else
        printf("No\n", arr1, arr2);
    return 0;
}

int find_ana(char arr1[], char arr2[])
{
    int num1[26] = {0}, num2[26] = {0}, i = 0;

    while (arr1[i] != '\0')
    {
        num1[arr1[i] - 'a']++;
        i++;
    }
    i = 0;
    while (arr2[i] != '\0')
    {
        num2[arr2[i] - 'a']++;
        i++;
    }
    for (i = 0; i < 26; i++)
    {
        if (num1[i] != num2[i])
            return 0;
    }
    return 1;
}