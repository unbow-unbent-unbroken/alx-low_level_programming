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
	while (*s != '\0')
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
