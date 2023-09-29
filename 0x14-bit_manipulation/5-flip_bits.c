#include <stdio.h>
#include "main.h"

/**
 * flip_bits - A function that returns the number of bits to flip
 * @n: The pointer to the bits to be flipped
 * @m: The number of bits
 *
 * Return: The number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m;
	unsigned int c = 0;

	for (; x > 0; x >>= 1)
	{
		c += x & 1;
	}

	return (c);
}
