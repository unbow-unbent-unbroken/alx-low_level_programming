#include <stdio.h>
#include "main.h"

/**
 * _strchr - locate character in a string
 * @s: char array string
 * @c: char to look for
 * Return: NULL if char not found, or pointer to first occurrence of char `c`
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);  /* Return pointer to the first occurrence of character c */
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);  /* Return pointer to null terminator if char c is '\0' */
	}
	return (NULL); /* Return NULL if character c is not found */
}
