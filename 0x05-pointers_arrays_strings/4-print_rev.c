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
	if (s == NULL)
		return;
	int length = 0;
	while (s[length] != '\0')
	{
		length++;
	}
	for (int i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
