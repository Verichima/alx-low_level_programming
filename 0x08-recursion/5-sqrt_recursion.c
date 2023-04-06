#include "main.h"
#include <stdio.h>

int _sqrt(int n, int a);

/**
 * _sqrt_recursion -  Returns the natural square root of a number
 *
 * @n: inpute value to calculate natural square root
 *
 * Return: To return natural square root
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - to calculate natural square root
 * @n: input value for the calculation
 * @a: another input value as an iterate
 *
 * Return: To return natural square root
 */

int _sqrt(int n, int a)
{
	int sqrt = a * a;

	if (sqrt > n)
		return (-1);
	if (sqrt == n)
		return (a);
	return (_sqrt(n, a + 1));
}
