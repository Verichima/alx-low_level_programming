#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9
 * Description: Prints the numbers excluding 2 and 4
 * Return: The numbers since 0 up to 9
 */


void print_most_numbers(void)
{
	int a = 0;

	for (; a <= 9; a++)
	{
		if (x == 2 || a == 4)
		{
			continue;
		}
		else
		{
			_putchar(a + '0');
		}
	}
		_putchar('\n');
}

