#include "main.h"

/**
 * print_alphabet_x10 - function
 */
void print_alphabet_x10(void)
{
	int a;
	char f;

	for (a = 0; a <= 9; ++a)
	{
		for (f = 'a'; f <= 'z'; ++f)
		{
			_putchar(f);
		}
		{
			_putchar('\n');
			}
		}
}
