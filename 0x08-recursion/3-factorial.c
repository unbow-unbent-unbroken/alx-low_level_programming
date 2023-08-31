#include <stdio.h>
#include "main.h"

/**
 * factorial - A function that returns the factorial of a given number
 * @n: int variable parameter that holds the number
 *
 * Return: -1 if n is < 0 else n factorial
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n <= 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
