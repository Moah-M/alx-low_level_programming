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
	int count = 0;

	if (*s != '\0')
	{
		return (1 +_strlen_recursion(s + 1));
	}
}
