#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: Input value passed to the function.
 * @...: Additional value for the summation.
 *
 * Return: 0, if n == 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list it;
	unsigned int a, sum = 0;

	va_start(it, n);
	for (a = 0; a < n; a++)
		sum += va_arg(it, int);
	va_end(it);
	return (sum);
}

