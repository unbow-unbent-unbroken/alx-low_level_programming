#include <stdio.h>
#include "main.h"

int sqrt_cal(int n, int p);

/**
 * _sqrt_recursion - Function that returns the natural square root of a number
 * @n: int variable parameter that holds the number
 *
 * Return: the natural square root of a number.
 */

int _sqrt_recursion(int n)
{
	return (sqrt_cal(n, 1));
}

/**
 * sqrt_cal - Recursive helper function for calculating the square roott
 * @n: the number for which the square root is calculated
 * @p: The current value for the square root
 *
 * Return: the natural square root of the number
 */

int sqrt_cal(int n, int p)
{
	if (n < 0)
	{
		return (-1);
	}
	if (p * p > n)
	{
		return (-1);
	}
	if (p * p == n)
	{
		return (p);
	}
	return (sqrt_cal(n, p + 1));
}
