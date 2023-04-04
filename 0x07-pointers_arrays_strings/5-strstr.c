#include "main.h"

/**
 * _strstr - The functiom that locates a substring
 * @haystack: The substring found in the string
 * @needle: The string
 *
 * Return: Nothing
 *
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *a = haystack;
		char *b = needle;

		while (*a == *b && *b != '\0')
		{
			a++;
			b++;
		}

		if (*b == '\0')
			return (haystack);
	}
	return (0);
}
