#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - funct
 *@r: var
 */
void rev_string(char *s)
{
	char ss[100];
	ss = strrev(s);
	printf("%s\n", ss);

}
