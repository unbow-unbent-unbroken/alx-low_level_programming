#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: the number of times the character \ is printed
 *
 * Return: none
 */

void print_diagonal(int n)
{
	int s;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	while (n > 0)
	{
		s = n - 1;

		while (s > 0)
		{
			_putchar(' ');
			s--;
		}

		_putchar('\\');
		_putchar('\n');
		n--;
	}
}
