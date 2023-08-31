#include <stdio.h>
#include "main.h"

int is_palindrome(char *s);
int check_palindrome(char *s, int start, int end);

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to be checked.
 *
 * Return: 1 if s is a palindrome, 0 otherwise.
 */

int is_palindrome(char *s)
{
	int length = _strlen_recursion(s);
	return (check_palindrome(s, 0, length - 1));
}

/**
 * check_palindrome - Helper function to check if a string is a palindrome.
 * @s: The string to be checked.
 * @start: The starting index for comparison.
 * @end: The ending index for comparison.
 *
 * Return: 1 if s is a palindrome, 0 otherwise.
 */

int check_palindrome(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}

	if (s[start] != s[end])
	{
		return (0);
	}

	return (check_palindrome(s, start + 1, end - 1));
}
