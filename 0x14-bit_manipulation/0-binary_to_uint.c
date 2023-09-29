#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - A function that converts a binary to an unsigned int.
 * @b: The pointer a string of 0 and 1 chars
 *
 * Return: the number converted or 0 if b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int x = 0;

	if (b == NULL)
	{
		return (0);
	}

	for (; *b != '\0'; b++)
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}

		x = (x << 1) | (*b - '0');
	}

	return (x);
}
