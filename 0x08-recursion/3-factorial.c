#include "main.h"

/**
 * factorial - main
 * Return: 0
 */
int factorial(int n)
{
	if (n == 1)
		return (0);
	else
	{
		return n * factorial(n-1);
	}
}

