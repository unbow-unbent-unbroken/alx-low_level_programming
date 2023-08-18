#include <stdio.h>
#include "main.h"

/**
 * print_numbers - prints numbers, from 0 t0 9
 *
 * Return: 0 (Success)
 */

void print_numbers(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
	{
		_putchar(num);
	}
	_putchar('\n');
}
