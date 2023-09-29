#include <stdio.h>
#include "main.h"

/**
 * get_bit - A function that returns the value of a bit at a given index.
 * @n: The bit intended to get
 * @index: The index starting from 0
 *
 * Return: value of bit at index or -1 if error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	return ((n >> index) & 1);
}
