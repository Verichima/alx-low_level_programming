#include <stdio.h>

/**
 * main - The main output
 *
 * Return: 0 shows success
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

printf("Size of a char:  %lu byte(s)\n", (unsigned long)sizeof(a));
Printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
Printf("Size of a float: %lu btye(s)\n", (unsigned long) sizeof(f));
return (0);
}
