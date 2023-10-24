#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - Frees a 2 dimensional grid
 * @grid: Address of the two dimensional array
 * @height: Height of the grid
 * Return: Always 0.
 */
void free_grid(int **grid, int height)
{
	int size;

	for (size = 0; size < height; size++)
	{
		free(grid[size]);
	}
	free(grid);
}
