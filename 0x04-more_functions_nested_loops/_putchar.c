#include <unistd.h>
#include "main.h"
#include <stdio.h>
/**
 * _putchar - func
 * @c: var
 * Return: val 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
