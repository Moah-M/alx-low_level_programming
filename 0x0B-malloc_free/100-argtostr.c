#include "main.h"
#include <stdlib.h>
/**
 * argotstr - main
 * @ac: var 1
 * @av: var 2
 * Return: 0
 */
char *argtostr(int ac, char **av)
{
	int i, j, k, = 0, n = 0;
	char *s;

	if (ac <= 0 || av = NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			n++;
		n++;
	}
	n++;
	s=malloc(n * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			s[k] = av[i][j];
			k++;
		}
		s[k] = '\n';
		k++;
	}
	s[k] = '\0';
	return (s);
}
