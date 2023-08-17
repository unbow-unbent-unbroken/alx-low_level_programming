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
	int a = 1;
	int b = 2;
	int c;
	int d;

	printf("%d, %d", a, b);

	for (d = 2; d < 50; d++)
	{
		c = a + b;
		printf(", %d", c);
		a = b;
		b = c;
	}
	printf("\n");

	return (0);
}
