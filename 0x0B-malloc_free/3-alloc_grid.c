#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Returns pointer to a 2-dimensional array of integers
 * @width: Width of the grid
 * @height: Height of the grid
 * Return: Pointer to grid
 */
int **alloc_grid(int width, int height)
{
	int x, y, z;
	int **p;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}
	p = malloc(sizeof(int *) * height);
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}

	for (x = 0; x < height; x++)
	{
		p[x] = malloc(sizeof(int) * width);
		if (p[x] == NULL)
		{
			for (; x >= 0; x--)
			{
				free(p[x]);
			}
			free(p);
			return (NULL);
		}
	}
	for (y = 0; y < height; y++)
	{
		for (z = 0; z < width; z++)
		{
			p[y][z] = 0;
		}
	}
	return (p);
}
