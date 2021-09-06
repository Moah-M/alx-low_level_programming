#include "main.h"
#include <stdio.h>

/**
 * print_rev - funct
 *@r: var
 */
void print_rev(char *s)
{
	int l = 0;

	while (*s++ != '\0')
		l++;
	s -= l + 1;
	while (len--)
		_putchar(s[len]);
	_putchar('\n');
}
