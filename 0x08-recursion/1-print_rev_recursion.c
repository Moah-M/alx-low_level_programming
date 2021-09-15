#include "main.h"
#include <stdio.h>
/**
 * _print_rev_recursion - main
 * @s: var 1
 * @i: vae 2
 * Return: 0
 */
void _print_rev_recursion(char *s)
{
	int i = sizeof(s);
	i--;
	if (i == 1)
	{
		return;
	}
	else
	{
		_print_rev_recursion(s + i);
		printf("%s", s+i);
	}
}

