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
	int i, j;
	int count = 0;

	j = 0;
	while (str[j] != '\0')
	{
		count++;
		j++;
	}

	p = (char *)malloc(count * sizeof(char) + 3);
	if (p == NULL)
	{
		printf("Error");
	}
	else
	{
		i = 0;

		if (str == NULL)
			return (0);
		while (i <= count)
		{
			p[i] = str[i];
			i++;
		}
	}
	return (p);
}

