#include <stdio.h>
void modifyValue(int *ptr)
{
	*ptr = 20;
}

int main()
{
	int num = 5;
	modifyValue(&num);
	int sum = num + 25;
	printf("%d\n", sum);

	return (0);
}
