#include <stdio.h>
#include <stdlib.h>
/**
 * main - define
 * Return: pass
 */
int main(void)
{
	int a = '0';

	for (a = '0'; a <= '8'; a++)
	{
		putchar(a);
		putchar(',');
		putchar(' ');
	}
	putchar('9');
	return (0);
}


