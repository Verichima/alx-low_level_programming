#include "main.h"

/**
 * factorial - Function that returns the factorial of a given number
 * @n: the input that could be lower than 0
 *
 * Return: An integer
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
