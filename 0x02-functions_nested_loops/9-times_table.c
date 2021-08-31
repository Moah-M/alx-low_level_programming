#include "main.h"
/**
 * times_table - funtion
 * Return: 0
 * /
 */
void times_table(void)
{
	int k, l, m;

	for (l = 0; l <= 9; l++)
	{
		l = k * m;
		_putchar(',');
		_putchar(' ');

		if(l >= 9)
		{
			_putchar(' ');
			_putchar(l + '0');
		}
		else
		{
			_putchar((l / 10) + '0');
			_putchar((1 % 10) + '0');
		}
	}
	_putchar('\n');
}

