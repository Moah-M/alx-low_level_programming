#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * alloc_grid - main
 * @width: var 1
 * @height: var 2
 * Return 0;
 */
int **alloc_grid(int width = 0, int height = 0)
{
	int *p;
	int i, j;
	
	for (i = 0; i < 10; i++)
	{
		printf("%d ", width);

		for (j = 0; j < 10; j++)
		{
			printf("%d", height);
		}
	}
	return ();
}

