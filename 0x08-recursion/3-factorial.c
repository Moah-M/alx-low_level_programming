#include "main.h"

/**
 * factorial - main
 * Return: 0
 */
int factorial(int n)
{
	if (n == 1)
		return (1);
	else
	{
		return n * factorial(n-1);
	}
}

