#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - A function that return the value of x raise to power y
 * @x: int variable parameter that holds the value
 * @y: int variable parameter that holds the power
 *
 * Return: if y is < 0 return -1
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
