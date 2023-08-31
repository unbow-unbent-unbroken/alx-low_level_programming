#include <stdio.h>
#include "main.h"

int check_prime(int n, int divisor);

/**
 * is_prime_number - A function checks if a number is prime
 * @n: The variable parameter that holds the input number to be chcked
 *
 * Return: 1 if input number ia a prime number else 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	return (check_prime(n, 2));
}
/**
 * check_prime - Helper function to check if a number is prime.
 * @n: The number to be checked.
 * @divisor: The current divisor to check divisibility.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */

int check_prime(int n, int divisor)
{
	if (divisor == n)
	{
		return (1);
	}
	if (n % divisor == 0)
	{
		return (0);
	}

	return (check_prime(n, divisor + 1));
}
