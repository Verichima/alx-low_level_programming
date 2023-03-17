#include <stdio.h>

/**
 * main - the major function here
 *
 * Return: 0 well succesful
 */

int main(void)
{
	char i;

	for (i = 'z' ; i >= 'a' ; i--)
		putchar(i);
	putchar('\n');
	return (0);
}

