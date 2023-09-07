#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * strtow - Splits a string into words.
 * @str: The input string.
 *
 * Return: A pointer to an array of strings (words) or NULL on failure.
 */

char **strtow(char *str)
{
	if (str == NULL || str[0] == '\0')
		return (NULL);

	/* Count the number of words */
	int word_count = 0;
	char *token = strtok(str, " ");
	while (token != NULL)
	{
		word_count++;
		token = strtok(NULL, " ");
	}

	if (word_count == 0)
		return (NULL);

	/* Allocate memory for the array of words */
	char **words = (char **)malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	/* Extract and copy words */
	token = strtok(str, " ");
	for (int i = 0; i < word_count; i++)
	{
		words[i] = strdup(token); /* Use strdup to allocate and copy each word */
		if (words[i] == NULL)
		{
			/* Memory allocation failed, free previously allocated words and return NULL */
			for (int j = 0; j < i; j++)
				free(words[j]);
			free(words);
			return (NULL);
		}
		token = strtok(NULL, " ");
	}

	words[word_count] = NULL;
	return (words);
}
