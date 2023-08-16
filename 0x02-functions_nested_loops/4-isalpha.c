#include <stdio.h>
#include "main.h"

/**
 * _isalpha - checks for alphabetical characters
 *
 * @c: The char in alphabet
 *
 * Return: 0 (Success)
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
