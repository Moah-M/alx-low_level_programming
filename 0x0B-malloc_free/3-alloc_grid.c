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
	int *p;

	p = (int *)malloc(width + height * sizeof(int));
        if (p == NULL)
		return (0);	

	width = 0, height = 0;	
	for (i = 0; i < p; i++)
	{
		printf("%d ", width);

		for (j = 0; j < p; j++)
		{
			printf("%d ", height);
		}
	}
	return (p);
}

