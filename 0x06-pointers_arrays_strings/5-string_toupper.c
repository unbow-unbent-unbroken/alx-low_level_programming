#include <stdio.h>
#include "main.h"

/**
 * string_toupper - Changes lowercase letters to uppercase in a string
 * @str: Input string
 * Return: Pointer to the modified string
 */

char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr)
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr - 32;
		}
		ptr++;
	}

	return (str);
}
