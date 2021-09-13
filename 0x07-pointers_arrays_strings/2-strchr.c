#include "main.h"

/**
 * _strchr - main func
 * @s: sd
 * @c: first c
 * Return: 0
 */
char *_strchr(char *s, char c)
{
	int i = 0;
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
