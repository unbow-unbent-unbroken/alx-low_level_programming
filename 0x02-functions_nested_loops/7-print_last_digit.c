#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - A function that prints the last digit of a number
 *
 *@n: The input value
 *
 * Return: The value of the last digit
 */

int print_last_digit(int n)
{
	if (n < 0)
	{
		n = -(n % 10);
	}
	else if (n > 0)
	{
		n = n % 10;
	}
	else
	{
		n = 0;
	}
	_putchar(n + '0');
	return (n);
}
