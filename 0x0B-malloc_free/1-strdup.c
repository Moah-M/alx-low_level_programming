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
	int count = 0;

	while(*str++ != '\0')
		y++;

	p = (char *)malloc(10 * sizeof(char) + 3);
	if (p == NULL)
	{
		printf("Error");
	}
	else
	{
		i = 0;
		while (i <= y)
		{
			p[i] = str[i];
			i++;
		}
	}
	return (p);
}

