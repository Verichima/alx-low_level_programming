#include "main"

/**
 * print_line - Function that draws a straight line in the terminal
 * @n: the number of lines to draw
 */

void print_line(int n)
{
	int a;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < n; a++)
		{
			_putchar (95);
		}
		_putchar('\n');
	}
}


