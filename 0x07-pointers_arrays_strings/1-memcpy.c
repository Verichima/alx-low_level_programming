#include "main.h"

/**
 * _memcpy - Function that copies memory area
 * @dest: input value which is the final memory area
 * @src: input value that had the n byte
 * @n: input value copied
 *
 * Return: Changed memory to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int b = n;

	for (; a < b; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
