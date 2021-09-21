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

	p = (char *)malloc(10 * sizeof(char) + 3);
	if (p == NULL)
	{
		printf("Error");
	}
	else
	{
		p = str;
	}
	return (p);
}

