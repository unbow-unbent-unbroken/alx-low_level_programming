#include <stdio.h>
#include "main.h"

/**
 * print_binary - A function that prints the binary rep of a num.
 * @n: The numeber to be repped.
 *
 * Return: 0 Success.
 */

void print_binary(unsigned long int n)
{
	if (n == 0 || n == 1)
	{
		_putchar('0' + n);
	}
	else
	{
		print_binary(n >> 1);
		_putchar('0' + (n & 1));
	}
}
