#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A program that finds and prints the sum of even-valued terms.
 * Return: 0 (Success)
 */

int main(void)
{
	int a = 1;
	int b = 2;
	int c = 0;
	int d;

	while (b <= 4000000)
	{
		if (b % 2 == 0)
		{
			c += b;
		}

		d = a + b;
		a = b;
		b = d;
	}
	printf("%d\n", c);
	return (0);
}
