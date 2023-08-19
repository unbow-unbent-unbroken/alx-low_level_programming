#include <stdio.h>
#include "main.h"

/**
 * print_triangle - Prints a triangle
 * @size: Size of the triangle
 *
 * Return: void
 */

void print_triangle(int size)
{
	int i;
	int j;
	int k;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 1; i < size; i++)
	{
		for (j = size - i; j > 1; j--)
		{
			_putchar(' ');
		}
		for (k = i + j; k >= 1; k--)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
