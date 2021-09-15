#include "main.h"
#include <stdio.h>
/**
 * _print_rev_recursion - main
 * @s: var 1
 */
void _print_rev_recursion(char *s)
{
	int i;

	for (i = sizeof(s); i < 1; i--)
	{
		printf("%s", (s + i));
	}
}


