#include <stdio.h>
#include "main.h"

/**
 * _atoi - function to converts a string
 * @s: The string
 *
 * Return: the string converted
 */
int _atoi(char *s)
{
	int a, b, c, cap, d, num;

	a = 0;
	b = 0;
	c = 0;
	cap = 0;
	d = 0;
	num = 0;

	while (s[cap] != '\0')
		cap++;

	while (a < cap && d == 0)
	{
		if (s[a] == '-')
			++b;

		if (s[a] >= '0' && s[a] <= '9')
		{
			num = s[a] - '0';
			if (b % 2)
				num = -num;
			c = c * 10 + num;
			d = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			d = 0;
		}
		a++;
	}

	if (d == 0)
		return (0);

	return (c);
}

/**
 * main - function that prints the result of the multiplication
 * @argc: represents the number of arguments
 * @argv: represents the array of arguments
 *
 * Return: 0 if successful, else 1
 */
int main(int argc, char *argv[])
{
	int final, digit1, digit2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	digit1 = _atoi(argv[1]);
	digit2 = _atoi(argv[2]);
	final = digit1 * digit2;

	printf("%d\n", final);

	return (0);
}
