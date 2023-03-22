#include <stdio.h>

/**
 * main - prints the sum of the even-valued forms
 *
 * Less tha 4,000,000.
 *
 * Return: always 0
 */

int main(void)
{
		int i = 0;
		long j = 1, k = 2, sum = k;

		while (k + j < 4000000)
		{
			k += j;
			if (k % 2 == 0)
				sum += k;
			j = k - j;
			++i;
		}
		printf("%ld\n", sum);
		return (0);
}
