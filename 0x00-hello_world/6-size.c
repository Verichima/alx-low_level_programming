#include <stdio.h>

/**
 * main - The main output
 *
 * Return: 0 shows success
 */

int main(void)
{
	printf("Size of a char:  %lu byte(s)", sizeof(char));
	Printf("Size of an int: %lu byte(s)", sizeof(int));
	printf("Size of a long int: %lu byte(s)", sizeof(long int));
	printf("Size of a long long int: %lu byte(s)", sizeof(long long int));
	Printf("Size of a float: %lu btye(s)", sizeof(float));
	return (0);
}
