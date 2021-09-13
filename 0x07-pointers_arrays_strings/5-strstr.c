#include "main.h"

/**
 * _strstr - main
 * @haystack: var1
 * @needle: dasd
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;

	while (i < 100)
	{
		if ((haystack + i) == needle)
		{
			return (haystack + i);
		}
		i++;
	}
	return (haystack + i);
}
