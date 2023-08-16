#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Description: A program that prints _putchar followed by a new line
 * Return: 0 (Success)
 */

int main(void)
{
	char sh[8] = "_putchar";
	int x;

	for (x = 0; x < 8; x++)
	{
		_putchar(sh[x]);
	}
		_putchar('\n');

	return (0);
}
