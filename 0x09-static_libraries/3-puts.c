#include <stdio.h>
#include "main.h"

/**
 * _puts - A function that prints a string
 * @str: The string variable of char type
 *
 * Return: 0 (Success)
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
