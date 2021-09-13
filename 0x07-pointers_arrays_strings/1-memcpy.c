#include "main.h"
/**
 * _memcpy - func
 * @dest: 1
 * @src: 2
 * @n: v
 * Return: 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *csrc = (char *)src;
	char *cdest = (char *)dest;

	for (int i = 0; i < n; i++)
	{
		cdest[i] = csrc[i];
	}
	return (dest);
}



