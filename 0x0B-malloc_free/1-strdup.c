#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - A function that returns a pointer to a newly allocated space
 * in memory which contains a copy of the string given as a parameter.
 *
 * @str: The string to duplicate
 *
 * Return: A pointer to the duplicated string or NULL on failure
 */

char *_strdup(char *str)
{
	char *duplicate;
	int length = 0;
	int i;

	/* Check if the input string is NULL */
	if (str == NULL)
	{
		return (NULL);
	}

	/* Calculate the length of the input string */
	while (str[length] != '\0')
	{
		length++;
	}

	/* Allocate memory for the duplicate string */
	duplicate = (char *)malloc((length + 1) * sizeof(char));

	/* Check if memory allocation failed */
	if (duplicate == NULL)
	{
		return (NULL);
	}

	/* Copy the characters from the input string to the duplicate */
	for (i = 0; i <= length; i++)
	{
		duplicate[i] = str[i];
	}

	return (duplicate);
}
