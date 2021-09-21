#include "main.h"
#include <stdio.h>
/**
 * creatae_array - main
 * @size: var 1;
 * @c: var 2;
 * Return: 0
 */
char *create_array(unsigned int size, char c)
{
	char x[100];
	unsigned int i;

	c == 'H';

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			return (*(x + i) == c);
		}
	}
	return (*(x + i) == c);
}


