#include "main.h"
#include <stdio.h>
/**
 * _strlen_recursion - main function
 * @s: var 1
 * @count: var 2
 * Return: 0
 */
int _strlen_recursion(char *s)
{
	int i, count = 0;

	if (i = 0)
	{
		return count;
	}
	else
	{
		return _strlen_recursion((s + i));
	}
	return count;
}


