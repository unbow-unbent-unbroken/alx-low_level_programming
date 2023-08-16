#include "main.h"

/**
 * main - Entry point
 *
 * Description: A program that prints the alphabets in lowercase
 * Return: 0 (Success)
 */

void print_alphabet(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}

	_putchar('\n');
}
