#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * creatae_array - main
 * @size: var 1;
 * @c: var 2;
 * Return: 0
 */
char *create_array(unsigned int size, char c)
{
	char *x;
	unsigned int i;

	x = malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < sizeof(x); i++)
		{
			x[i] = c;
			return (x);
		}
	}
	return (x);
}

