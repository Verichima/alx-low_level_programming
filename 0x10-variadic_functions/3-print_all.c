#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Function that prints anything
 * @format: List of types of argument passed to the function
 * @...: More arguments
 */

void print_all(const char * const format, ...)
{
	int a = 0;
	char *alphabet, *rmv = "";
	va_list spell;

	va_start(spell, format);
	if (format)
	{
		while (format[a])
		{
			switch (format[a])
			{
				case 'c':
					printf("%s%c", rmv, va_arg(spell, int));
					break;
				case 'i':
					printf("%s%d", rmv, va_arg(spell, int));
					break;
				case 'f':
					printf("%s%f", rmv, va_arg(spell, double));
					break;
				case 's':
					alphabet = va_arg(spell, char *);
					if (!alphabet)
						alphabet = "(nil)";
					printf("%s%s", rmv, alphabet);
					break;
				default:
					a++;
					continue;
			}
			rmv = ", ";
			a++;
		}
	}

	va_end(spell);
	printf("\n");
}
