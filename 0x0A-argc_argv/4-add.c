#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - function that check string there are digit
 * @str: an array
 *
 * Return: 0
 */

int check_num(char *str)
{
	unsigned int measure;

	measure = 0;
	while (measure < strlen(str))
	{
		if (!isdigit(str[measure]))
		{
			return (0);
		}

		measure++;
	}
	return (1);
}

/**
 * main - Function that print the name of the program
 * @argc: measures arguments
 * @argv: Arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])

{
	int measure;
	int s;
	int sum = 0;

	measure = 1;
	while (measure < argc)
	{
		if (check_num(argv[measure]))
		{
			s = atoi(argv[measure]);
			sum += s;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		measure++;
	}

	printf("%d\n", sum);

	return (0);
}
