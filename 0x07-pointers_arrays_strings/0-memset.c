#include "main.h"

/**
 * _memset - Function that fills memory with a constant byte
 * @n: input value or byte which is filled
 * @s: input value that points
 * @b: input value which is the constant byte
 *
 * Return: New value introduced for n byte
 */

char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	for (; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}
