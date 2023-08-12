#include <stdio.h>
#include <string.h>

int stringlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	return len;
}

int main(void)
{
	char *s = "Hello ALX Africa!";
	int strCont;
	
	//strCont = strlen(s);
	strCont = stringlen(s);

	printf("%s\n", s);
	printf("%d\n", strCont);

	return (0);
}
