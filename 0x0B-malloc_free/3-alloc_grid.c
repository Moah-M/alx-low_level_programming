#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * alloc_grid - main
 * @width: var 1
 * @height: var 2
 * Return 0;
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	width = 0, height = 0;
	
	for (i = 0; i < width; i++)
	{
		printf("%d ", width);

		for (j = 0; j < height; j++)
		{
			printf("%d\n", height);
		}
	}
	return (0);
}

