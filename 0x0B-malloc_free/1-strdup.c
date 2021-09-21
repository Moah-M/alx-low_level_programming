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
	int i;

	p = (char *)malloc(10 * sizeof(char) + 3);
	if (p == NULL)
	{
		printf("Error");
	}
	else
	{
		while (i >= 0)
		{
			p[i] = str[i];

			if (str[i] =='\0')
				break;
		}		
	}
	return (p);
}

