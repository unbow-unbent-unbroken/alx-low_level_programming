#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - A function that prints a string
 * @s: char variable of the string
 *
 * Return: 0 (Success)
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
