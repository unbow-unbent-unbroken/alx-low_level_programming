#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: A pointer to the concatenated string or NULL on failure.
 */

char *str_concat(char *s1, char *s2)
{
	char *concatenated;
	int len_s1 = 0, len_s2 = 0, total_len = 0;
	int i, j;

	/* Handle NULL input strings by treating them as empty strings */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Calculate the lengths of s1 and s2 */
	while (s1[len_s1] != '\0')
		len_s1++;
	while (s2[len_s2] != '\0')
		len_s2++;

	/* Calculate the total length of the concatenated string */
	total_len = len_s1 + len_s2;

	/* Allocate memory for the concatenated string */
	concatenated = (char *)malloc((total_len + 1) * sizeof(char));

	if (concatenated == NULL)
		return (NULL); /* Memory allocation failed */

	/* Copy s1 into the concatenated string */
	for (i = 0; i < len_s1; i++)
		concatenated[i] = s1[i];

	/* Copy s2 into the concatenated string */
	for (j = 0; j < len_s2; j++)
		concatenated[i + j] = s2[j];

	/* Null-terminate the concatenated string */
	concatenated[total_len] = '\0';

	return (concatenated);
}
