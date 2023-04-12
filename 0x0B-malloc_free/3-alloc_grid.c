#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Function that returns a pointer
 * @width: fitst dimentional array
 * @height: second dimentional array
 *
 * Return: 2 dimentional array
 */

int **alloc_grid(int width, int height)
{
	int **abc;
	int m, n;

	if (width <= 0 || height <= 0)
		return (NULL);

	abc = malloc(sizeof(int *) * height);
	if (abc == NULL)
		return (NULL);
	for (m = 0; m < height; m++)
	{
		abc[m] = malloc(sizeof(int) * width);
		if (abc[m] == NULL)
		{
			for (; m >= 0; m--)
				free(abc[m]);
			free(abc);
			return (NULL);
		}
	}

	for (m = 0; m < height; m++)
	{
		for (n = 0; n < width; n++)
			abc[m][n] = 0;
	}
	return (abc);
}
