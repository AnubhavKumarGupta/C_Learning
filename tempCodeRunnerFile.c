#include <stdio.h>
#include <string.h>

int main()
{

    char word1[100], word2[100];

    // Get the strings which
    // is to be checked
    scanf("%[^\n]\ns", word1);
    printf("%s", word2);

    // Get the strings which
    // is to be checked
    scanf("%[^\n]\ns", word2);
    printf("\n%s", word2);

    // Check if both strings are equal
    printf("\n");

    if (strcmp(word1, word2) == 0)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    return 0;
}