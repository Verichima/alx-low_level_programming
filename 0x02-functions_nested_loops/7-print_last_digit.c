#include "main.h"

/**
 * print_last_digit - function that print last digit
 * @x: parimeter function
 *
 * Return: always 0
 */

int print_last_digit(int x)
{
	int y;

	y = x % 10;
	if (x < 0)
		y = -y;
	_putchar(y + '0');
	return (y);


}
