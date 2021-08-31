#include "main.h"
/**
 * main - function
 * Return: 0
 */
int main(void)
{
	char x[] = "_putchar";
	int i = 0;

	while (x[i] != '\0')
	{
		_putchar(x[i]);
		i++;
	}
	_putchar(10);
	return (0);
}

