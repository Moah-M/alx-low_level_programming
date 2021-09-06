#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strlen - main function
 * @s: var 1
 * @x: var 2
 * Return: 0
 */
int _strlen(char *s)
{
	int x = 0;
	while (*s++ != '\0')
		x++;
	return (x);
}
