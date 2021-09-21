#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - main
 * Return: 0
 * @str: var 1
 */
char *_strdup(char *str)
{
	char *p;
	unsigned int i;

	p = (char *)malloc(10 * sizeof(char) + 3);
	if (p == NULL)
	{
		printf("Error");
	}
	else
	{
		i = 0;
		while (i >= sizeof(str))
		{
			p[i] = str[i];

			if (str[i] == '\0' || " " || NULL)
				break;
			i++;
		}
	}
	return (p);
}

