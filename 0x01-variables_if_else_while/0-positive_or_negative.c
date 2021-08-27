#include <stdio.h>
#include <stdlib.h>
/**
 * main - defines what the main purpose is
 * Return: gives a response
 */
int main(void)
{
	int n = 98;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);
	return (0);
}
