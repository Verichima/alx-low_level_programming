#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - function that prints strings
 * @separator: the string to be printed
 * @n: the number of strings passed to the function
 * @...: Another value to be passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list words;
	char *alphabet;
	unsigned int num;

	va_start(words, n);
	for (num = 0; num < n; num++)
	{
		alphabet = va_arg(words, char *);
		if (alphabet == NULL)
			printf("(nil)");
		else
			printf("%s", alphabet);

		if (num != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	va_end(words);
	printf("\n");
}
