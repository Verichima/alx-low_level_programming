#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0
 */

int main(void)
{
	int p;
	int sum;

	sum = 0;


	for (p = 0 ; p < 1024 ; p++)
	{
		if ((p % 3 == 0) || (p % 5 == 0))
		{
			sum = sum + p;
		}

	}
	printf("%d\n", sum);
	return (0);
}
