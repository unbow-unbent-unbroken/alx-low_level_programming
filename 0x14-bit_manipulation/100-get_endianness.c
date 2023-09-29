#include <stdio.h>
#include "main.h"

/**
 * get_endianness - A function that checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int num = 1;
	char *byte = (char *)&num;

	return (byte[0] == 1);
}
