#include "main.h"
/**
 * _strncpy - main func
 * @dest: var 1
 * @src: var 2
 * @n: num 1
 * Return: 0
 */


char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, op = 0;

	while (op == 0)
	{
		if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
			break;
		op = *(s1 + i) - *(s2 + i);
		i++;
	}
	return (op);
}
