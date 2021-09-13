#include "main.h"
/**
 * _memset - main function
 * 
 * Return: 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
