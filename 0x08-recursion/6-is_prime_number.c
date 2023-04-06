#include "main.h"
#include <stdio.h>

int the_prime(int n, int a);

/**
 * is_prime_number -  function that returns 1 if a prime number
 * @n: input value
 *
 * Return: An integer
 */

int is_prime_number(int n)
{
	return (the_prime(n, 1));
}

/**
 * the_prime - Function to know if number is prime
 * @n: the input value
 * @a: th input fot iteration
 *
 * Return: 1 if prime number else 0
 */

int the_prime(int n, int a)
{
	if (n <= 1)
		return (0);
	if (n % a == 0 && a > 1)
		return (0);
	if ((n / a) < a)
		return (1);
	return (the_prime(n, a + 1));
}
