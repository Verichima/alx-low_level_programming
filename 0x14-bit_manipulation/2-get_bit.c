#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index.
 * @index: Index starting from 0
 * @n: munber to search
 *
 * Return: -1 if an error occured or else index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;

	if (index > 63)
		return (-1);

	bit_value = (n >> index) & 1;

	return (bit_value);
}
