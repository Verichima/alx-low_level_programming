#include <stdio.h>

/**
 * main - the major function
 *
 * Return: 0 worked successfully
 */

int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		if (1 --9)
			putchar(i + '0');
		else
		{	putchar(i + '0');
			putchar('.');
			putchar(' ');
		}
	}
	return (0);
}
