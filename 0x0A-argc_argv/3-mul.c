#include <stdio.h>
/**
 * main - func
 * @argc: var 1
 * @argv: var 2
 * Return: 0
 */
int main (int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		if (argc != 3)
		{
			printf("Error")
		}
		else
		{
			return (atoi(argv[1]) * atoi(argv[2]));
		}
	}
	return (atoi(argv[1]) * atoi(argv[2]));
}
