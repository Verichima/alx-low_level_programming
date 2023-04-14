#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - function that prints the minimum number
 * @argc: represents number of arguments
 * @argv: array of arguments
 *
 * Return: 0 when successful else 1
 */

int main(int argc, char *argv[])
{
	int num, a, total;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);
	total = 0;

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}

	for (a = 0; a < 5 && num >= 0; a++)
	{
		while (num >= coins[a])
		{
			total++;
			num -= coins[a];
		}
	}

	printf("%d\n", total);
	return (0);
}

