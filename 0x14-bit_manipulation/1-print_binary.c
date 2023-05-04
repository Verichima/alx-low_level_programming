#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number.
 * @n: number to print in binary
 */

void print_binary(unsigned long int n)
{
	int a, num = 0;
	unsigned long int actual;

	for (a = 63; a >= 0; a--)
	{
		actual = n >> a;

		if (actual & 1)
		{
			_putchar('1');
			num++;
		}
		else if (num)
			_putchar('0');
	}
	if (!num)
		_putchar('0');
}
