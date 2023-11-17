#include <stdio.h>
#include <stdlib.h>
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
	char *s = "Having Issues With The Scanf, Can't count the Inputs";

	int u;
	

	//scanf("%s",s);

	//s = malloc(sizeof(char *) + 1);

	/*if (s == NULL)
	{
		printf("Allocation Failed");
	}
	else
	{
		printf("Allocation Success");
	}*/

	//printf("%s\n", s);

	int strCont = 0;
	
	if (s == NULL)
	{
		return (-1);
	}
	else
	{
		//printf("%s", s);
		//strCont = strlen(s);
		strCont = stringlen(s);

		printf("%s\n", s);
		printf("%d\n", strCont);
	}

	return (0);
}
