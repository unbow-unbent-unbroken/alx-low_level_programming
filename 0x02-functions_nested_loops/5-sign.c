#include <stdio.h>
#include "main.h"

/**
 * print_sign - return 1 and print + if > zero
 * return 0 and print 0 if n = zero
 * return -1 and print - if n < zero
 *
 * @n: an int value
 * Return: 0 (Success)
 */

int print_sign(int n)
{
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n >= 1)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
