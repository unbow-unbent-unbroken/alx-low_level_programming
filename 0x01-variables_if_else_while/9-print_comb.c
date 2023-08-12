#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A program that prints all of single-digit numbers
 * Return: 0 (Success)
 */

int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
		if (n != '9')
		{
			putchar(',');
			putchar(' ');

		}
	}

	putchar('\n');
	return (0);
}
