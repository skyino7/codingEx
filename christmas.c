#include <stdio.h>

int main(void)
{
	int n = 10, i, j, k;

	for (i = 0; i < n; i++)
	{
		for (j = 1; j <= n - i; j++)
		{
			printf(" ");
		}
		printf("*");

		for (k = 1; k <= i - 1; k++)
		{
			printf("|");
		}

		for (j = 1; j < i; j++)
		{
			printf("|");
		}
		if (i > 0)
		{
			printf("*");
		}
		printf("\n");
	}
}
