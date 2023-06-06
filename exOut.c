#include <stdio.h>

int main(void)
{
	char c = 255;
	c = c + 10;
	printf("%d\n", c);
	
	printf("%d\n", printf("%s\n", "Hello World!"));

	printf("%10s", "Hello\n");

	return 0;
}
