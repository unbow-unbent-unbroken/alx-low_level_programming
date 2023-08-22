#include <stdio.h>
#include "main.h"

/**
 * print_rev - A function that print a string in reverse.
 * @s: The char type variable
 *
 * Return: 0 (Success)
 */

void print_rev(char *s)
{
	int i, j, len;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	len = i;

	for (j = len - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}

	_putchar('\n');
}
