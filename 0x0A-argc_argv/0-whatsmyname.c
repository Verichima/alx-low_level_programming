#include "main.h"
#include <stdio.h>

/**
 * main - function that prints the name of the program
 * @argc: represents the number of arguments
 * @argv: represents the array of arguments
 *
 * Return: Nothing
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
