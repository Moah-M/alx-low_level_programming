#include "main.h"
/**
 * times_table - funtion
 * Return: 0
 * /
 */
void times_table(void)
{
	int k=0;
       	int l=0;
	int m=0;


	for (l = 0; l <= 9; l++)
	{
		_putchar('0');
		for (k = 1; k <=9; k++)
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
}

