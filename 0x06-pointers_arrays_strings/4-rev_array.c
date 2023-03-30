#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers.
 *
 * @a: array
 * @n: number of element found in array
 *
 * Return: Nothing
 */

void reverse_array(int *a, int n)
{
	int i;
	int b;

	for (i = 0; i < n--; i++)
	{
		b = a[i];
		a[i] = a[n];
		a[n] = b;
	}
}
