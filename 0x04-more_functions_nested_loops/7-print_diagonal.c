#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - Function that draws a diagonal line
 * @n: the parameter that prints the line
 * Return: empty
 */

void print_diagonal(int n)
{
	int x, y;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			for (y = 0; y < x; y++)
			{
				_putchar(32);
			}
		}
		_putchar(92);
		_putchar('\n');
	}
}
