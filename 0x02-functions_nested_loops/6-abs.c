#include "main.h"

/**
 * _abs - function that computes value of an integer.
 *
 * @a: function parameter
 *
 * Return: a if computes the absolute value if an integer
 */

int _abs(int a)
{
	if (a < 0)
		a = -(a);
	else if (a >= 0)
		a = a;
	return (a);
}

