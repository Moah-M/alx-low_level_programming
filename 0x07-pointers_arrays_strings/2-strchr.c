#include "main.h"

/**
 * _strchr - main func
 * Return: 0
 */
char *_strchr(char *s, char c)
{
	int i = 0;
	char d;

	while (i < sizeof(s))
	{
		if (s[i] == c)
		{
			break;
		}
		else
		{
			i++;
		}
	}
	return (s);
}

	
	
