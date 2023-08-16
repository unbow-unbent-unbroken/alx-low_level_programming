#include <stdio.h>
#include "main.h"

/**
 * _abs - computes absolute numbers
 *
 * @j: input number as an integar.
 *
 * Return: 0 (Success)
 */

int _abs(int j)
{
	if (j < 0)
	{
		return (-j);
	}
	else
	{
		return (j);
	}
}
