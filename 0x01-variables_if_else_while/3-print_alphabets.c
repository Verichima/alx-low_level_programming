#include <stdio.h>

/**
 * main - function that explains the alphabets
 *
 * Return: 0 means success
 */

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
	putchar (i);
	for (i = 'A'; i <= 'Z' ; i++)
	putchar (i);
	putchar ('\n');
	return (0);
}
