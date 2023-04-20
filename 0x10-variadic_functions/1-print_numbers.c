#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - function that prints numbers, followed by a new line
 * @separator: The string to be printed between numbers
 * @n: The number of integers passed to the function
 * @...: The next parameter to be printed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list cap;
	unsigned int num;

	va_start(cap, n);
	for (num = 0; num < n; num++)
	{
		printf("%d", va_arg(cap, int));
		if (num != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
}


