#include <stdio.h>

int main(void)
{
	int base = 16;

	while (base)
	{
	
		if (base <= 10)
		{
			putchar(base + 10);
		}
		else 
		{
			putchar(base + 10 + 'a');
		}

		base--;

	}

	putchar('\n');
	return (0);
}
