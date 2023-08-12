#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A program that prints all single digits of base 10 start from 0
 * Return: 0 (Success)
 */

int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}

	putchar('\n');
	return (0);
}
