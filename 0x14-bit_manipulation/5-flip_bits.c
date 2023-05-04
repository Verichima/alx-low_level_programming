#include "main.h"

/**
 * flip_bits - function that returns the number of bits
 * @n: first number
 * @m: second number
 *
 * Return: number of bit to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, num = 0;
	unsigned long int actual;
	unsigned long int special = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		actual = special >> a;
		if (actual & 1)
			num++;
	}

	return (num);
}
