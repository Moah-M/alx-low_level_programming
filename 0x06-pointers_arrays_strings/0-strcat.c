#include "main.h"
#include <stdio.h>

/**
 * *_strcat - function
 * Return: value
 */

char *_strcat(char *dest, char *src)
{
	while(*dest)
	{
		dest++;
	}
	while(*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
}

