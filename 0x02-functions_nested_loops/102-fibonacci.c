#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A program that prints the first 50 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 *
 * Return: 0 (Success)
 */

int main(void)
{
	long int a = 1;
	long int b = 2;
	long int c;
	int d;

	printf("%lu, %lu", a, b);

	for (d = 2; d < 50; d++)
	{
		c = a + b;
		printf(", %lu", c);
		a = b;
		b = c;
	}
	printf("\n");

	return (0);
}
