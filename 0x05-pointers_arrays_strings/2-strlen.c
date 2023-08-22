#include <stdio.h>
#include "main.h"

/**
 * _strlen - A function that returns the lenght of a string
 * @s: The variable of char type
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int len = 0;
	while (s != '\0')
	{
		len++;
		s++;
	}
	return len;
}
