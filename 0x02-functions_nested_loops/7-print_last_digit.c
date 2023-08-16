#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - A function that prints the last digit of a number
 *
 *@n: The input value
 *
 * Return: The value of the last digit
 */

int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
		last_digit =  -n % 10;
	else
		last_digit = n % 10;


	-putchar(last_digit + '0');

	return (last_digit);
}
