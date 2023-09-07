#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * argstostr - Concatenates all the arguments of a program.
 * @ac: The number of arguments.
 * @av: An array of argument strings.
 *
 * Return: A pointer to the concatenated string or NULL on failure.
 */

char *argstostr(int ac, char **av)
{
	char *concatenated;
	int total_length = 0;
	int i, j;
	int index = 0;

	/* Check for invalid input */
	if (ac == 0 || av == NULL)
		return (NULL);

	/* Calculate the total length of the concatenated string */
	for (i = 0; i < ac; i++)
	{
		int arg_length = 0;

		while (av[i][arg_length] != '\0')
		{
			arg_length++;
			total_length++;
		}

		/* Add 1 for the newline character */
		total_length++;
	}

	/* Allocate memory for the concatenated string */
	concatenated = (char *)malloc((total_length + 1) * sizeof(char));

	if (concatenated == NULL)
		return (NULL); /* Memory allocation failed */

	/* Copy each argument and add a newline character */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			concatenated[index] = av[i][j];
			index++;
		}
		/* Add a newline character */
		concatenated[index] = '\n';
		index++;
	}

	/* Null-terminate the concatenated string */
	concatenated[index] = '\0';

	return (concatenated);
}
