#include "main.h"
#include <stdio.h>

/**
 * print_rev - funct
 *@r: var
 */
void print_rev(char *s)
{
	char r[10];
	r = strrev(s);
	printf("%s\n", r);
}
