#include <time.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * main - odoes thehard work
 * Return: value passer
 */
int main(void)
{
	int n, last_d;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_d = n % 10;
	if (last_d > 0)
		printf("Last digit of %d is %d and is greater than 5", n, last_d);
	else if (last_d < 0)
		printf("Last digit of %d is %d and is less than 6 and not 0", n, last_d);
	else
		printf("Last digit of %d is %d and is 0", n, last_d);
	return (0);
}
