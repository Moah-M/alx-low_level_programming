#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - func
 * @argc: var 1
 * @argv: var 2
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int x = 0, i;

	for (i = 0; i < argc; i++)
	{
		if (atoi(argv[i]) >= 0)
		{
			x += atoi(argv[i]);
		}
		else
		{
			printf("0\n");
		}
	}
	printf("%d\n", x);
	return (1);
}
