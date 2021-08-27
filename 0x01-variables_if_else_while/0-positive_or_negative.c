#include <stdio.h>
/**
 * main - defines what the main purpose is
 * Return: gives a response
 */
int main(void)
{
	int n = rand(2);
	if (n > 0)
	{
		printf("%d is positive", n);
	}
	else if (n < 0)
	{
		printf("%d is negative", n);
	}
	else
	{
		printf("%d is zero", n);
	}
	return (0);
}
