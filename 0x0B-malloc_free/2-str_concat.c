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
	int j, k;
	int count1 = 0, count2 = 0;

	j = 0;
	while (s1[j] != '\0')
	{
		count1++;
		j++;
	}
	k = 0;
	while (s2[k] != '\0')
	{
		count2++;
		k++;
	}
	p = (char *)malloc(count1 + count2 * sizeof(char) + 1);
	if (p == NULL)
	{
		printf("Error");
	}
	else
	{
		*p = *s1 + *s2;
	}
	return (p);
}

