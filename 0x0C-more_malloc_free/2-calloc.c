#include <stdlib.h>
#include "main.h"

/**
 * *_memset - Function to fill memory
 * @s: memory area
 * @b: char to copy
 * @n: number it would copy
 *
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}

/**
 * *_calloc - function that allocates memory for an array
 * @nmemb: number of element in the array
 * @size: element size
 *
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *abc;

	if (nmemb == 0 || size == 0)
		return (NULL);

	abc = malloc(size * nmemb);
	if (abc == NULL)
		return (NULL);

	_memset(abc, 0, nmemb * size);
	return (abc);
}
