#include "main.h"
#include <stdio.h>
/**
 * infinite_add - adds two numbers
 * @n1: number one.
 * @n2: number two.
 * @r: buffer that the function will use to store the result.
 * @size_r: buffer size:
 * Return: the pointer to dest.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int x1 = 0, x2 = 0, op, bg, a1, a2, add = 0;

	while (*(n1 + x1) != '\0')
		x1++;
	while (*(n2 + x2) != '\0')
		x2++;
	if (x1 >= x2)
		bg = x1;
	else
		bg = x2;
	if (size_r <= bg + 1)
		return (0);
	r[bg + 1] = '\0';
	x1--, x2--, size_r--;
	a1 = *(n1 + x1) - 48, a2 = *(n2 + x2) - 48;
	while (bg >= 0)
	{
		op = a1 + a2 + add;
		if (op >= 10)
			add = op / 10;
		else
			add = 0;
		if (op > 0)
		*(r + bg) = (op % 10) + 48;
		else
			*(r + bg) = '0';
		if (x1 > 0)
			x1--, a1 = *(n1 + x1) - 48;
		else
			a1 = 0;
		if (x2 > 0)
			x2--, a2 = *(n2 + x2) - 48;
		else
			a2 = 0;
		bg--, size_r--;
	}
	if (*(r) == '0')
		return (r + 1);
	else
		return (r);
}
