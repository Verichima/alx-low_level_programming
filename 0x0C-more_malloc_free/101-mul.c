#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#define ERR_MSG "Error"

/**
 * is_digit - Function to check content of file
 * @S: the string0 be evaluated
 * Return: 0 if non-digit is found else 1
 */
int is_digit(char *s)
{
	int a = 0;

	while (s[a])
	{
		if (s[a] < '0' || s[a] > '9')
			return (0);
		a++;
	}
	return (1);
}

/**
 * _strlen - return length of a string
 * @s: string
 *
 * Return length of string
 */

int _strlen(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}

/**
 * errors - handles errors for main
 */

void errors(void)
{
	printf("Error\n");
	exit(98);
}


/**
 * main - several 2 positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	char *s1, *s2;
	int cap1, cap2, cap, a, carry, digit1, digit2, *result, b = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();

	cap1 = _strlen(s1);
	cap2 = _strlen(s2);
	cap = cap1 + cap2 + 1;
	result = malloc(sizeof(int) * cap);
	if (!result)
		return (1);
	for (a = 0; a <= cap1 + cap2; a++)
		result[a] = 0;
	for (cap1 = cap1 - 1; cap1 >= 0; cap1--)
	{
		digit1 = s1[cap1] - '0';
		carry = 0;
		for (cap2 = _strlen(s2) - 1; cap2 >= 0; cap2--)
		{
			digit2 = s2[cap2] - '0';
			carry += result[cap1 + cap2 + 1] + (digit1 * digit2);
			result[cap1 + cap2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[cap1 + cap2 + 1] += carry;
	}
	for (a = 0; a < cap - 1; a++)
	{
		if (result[a])
			b = 1;
		if (b)
			_putchar(result[a] + '0');
	}
	if (!b)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
