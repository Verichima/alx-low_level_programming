#include "main.h"

/**
 * _strlen_recursion - Function that returns the length of a string
 * @s: value representing the string
 *
 * Return: Length of a string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * compare - Function to comapre strings
 * @s: Value representing the string
 * @a1: small input iterator
 * @a2: large input iterator
 *
 * Return: Null
 */

int compare(char *s, int a1, int a2)
{
	if (*(s + a1) == *(s + a2))
	{
		if (a1 == a2 || a1 == a2 + 1)
			return (1);
		return (0 + compare(s, a1 + 1, a2 - 1));
	}
	return (0);
}

/**
 * is_palindrome - Function that returns 1 if a string is a palindrome
 * @s: Value representing a string
 *
 * Return: 1 else 0
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (compare(s, 0, _strlen_recursion(s) - 1));
}
