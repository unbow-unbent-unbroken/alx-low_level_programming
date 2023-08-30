#include <stdio.h>
#include "main.h"

/**
 * _strspn - search a string for a set of bytes
 * @s: char string array
 * @accept: char array to check bytes with
 * Return: Number of bytes in the intial segment of `s`
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int is_accept;

	while (*s != '\0')
	{
		is_accept = 0; /* Initialize flag for checking if character is in accept */

		/* Loop the chars in accept and check if the current char in s matches */
		for (int i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				is_accept = 1; /* Set flag if character is found in accept */
				break;
			}
		}

		if (!is_accept)
		{
			break; /* If character is not found in accept, break the loop */
		}

		count++;
		s++;
	}
	return (count);
}
