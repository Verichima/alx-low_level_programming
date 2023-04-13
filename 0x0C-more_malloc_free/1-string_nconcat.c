#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - To concatenate two strings
 * @s1: String 1
 * @s2: String 2
 * @n: input value
 *
 * Return: pointer to the resulting string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *z;
	unsigned int a = 0, b = 0, cap1 = 0, cap2 = 0;

	while (s1 && s1[cap1])
		cap1++;
	while (s2 && s2[cap2])
		cap2++;
	if (n < cap2)
		z = malloc(sizeof(char) * (cap1 + n + 1));
	else
		z = malloc(sizeof(char) * (cap1 + cap2 + 1));
	if (!z)
		return (NULL);
	while (a < cap1)
	{
		z[a] = s1[a];
		a++;
	}
	while (n < cap2 && a < (cap1 + n))
		z[a++] = s2[b++];
	while (n >= cap2 && a < (cap1 + cap2))
		z[a++] = s2[b++];
	z[a] = '\0';
	return (z);
}
