#include <stdio.h>
#include <stdlib.h>
/**
 * main - define
 * Return: pass
 */
int main(void)
{
	int a = '0';

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);
		putchar(',');
		putchar(' ');
	}
	return (0);
}


