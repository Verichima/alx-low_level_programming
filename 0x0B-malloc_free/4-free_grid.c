#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Function that free 2 dimentional grid
 * @grid: input
 * @height: one dimentional grid
 *
 * Return: Null
 */

void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}
	free(grid);
}
