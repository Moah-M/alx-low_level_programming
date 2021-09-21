#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - main
 * Return: 0
 * @s2: var 1
 * @s1: var 2
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	int i, j, k;
	int count = 0;

	j = 0;
	while (s1[j] != '\0')
	{
		count++;
		j++;
	}
	k = 0;
	while (s2[k] != '\0')
	{
		count++;
		k++;
	}

	p = (char *)malloc(10 * sizeof(char));
	if (p == NULL)
	{
		printf("Error");
	}
	else
	{
		i = 0;
		while (i <= count)
		{
			p[i] = s1[i];
			p[i] = p[i] + s2[i];
			i++;
		}
	}
	return (p);
}

