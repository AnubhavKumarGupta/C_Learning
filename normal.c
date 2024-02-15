#include <stdio.h>
int main()
{
	int i, j, a;
	printf("Enter number of times :");
	scanf("%d", &a);

	for (i = 1; i <= a; i++)
	{
		for (j = 1; j <= a; j++)
		{
			if (i == j)
				printf("\\");
			else if (i + j == a + 1)
				printf("/");
			else
				printf("*");
		}
		printf("\n");
	}
	printf("\n\n");
	return 0;
}
