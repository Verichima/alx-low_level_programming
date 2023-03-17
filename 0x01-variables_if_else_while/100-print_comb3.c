#include <stdio.h>

/**
 * main - major function
 *
 * Return: 0 completed successfully
 */

int main(void)
{
	int i;
	int j;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = i ; j < 10 ; j++)
		{
			if (i < j && i != j)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
