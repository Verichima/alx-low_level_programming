#include "function_pointers.h"
/**
 * int_index - function that executes a function
 * given as a parameter on each element of an array.
 * @array: array
 * @size: size of the array
 * @cmp: pointer to function
 * Return: 0 if true, else -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]))
			return (a);
	}
	return (-1);
}
