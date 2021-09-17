#include <stdio.h>

/**
 * main - main function
 * @argc: var 1
 * @argv: var 2
 * Return: 0;
 */
int main(int argc, char **argv)
{
	unsigned long int i = 0;

	for (i = 0; i < argc; i++)
	printf("%s\n", argv[i]);
	return (0);
}
