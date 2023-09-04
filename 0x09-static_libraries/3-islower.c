#include <stdio.h>
#include "main.h"

/**
 * _islower - Returns 1 if c is lowercase else 0
 *
 * @c: char type letter
 *
 * Return: 1 if lowercase, 0 if otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
