#include <stdio.h>
#include "main.h"

/**
 * _isdigit - checks for a digit
 *
 * @c: variables digit
 *
 * Return: 1 if a digit else 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
