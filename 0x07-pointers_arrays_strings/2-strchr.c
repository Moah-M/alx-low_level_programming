#include "main.h"

/**
 * _strchr - main func
 * Return: 0
 */
char *_strchr(char *s, char c)
{
	long unsigned int i = 0;
	char *d;

	while (i < 100)
	{
		if (s[i] == c)
		{
			d = (s + i);
			break;
		}
		else
		{
			i++;
		}
	}
	return (d);
}

	
	
