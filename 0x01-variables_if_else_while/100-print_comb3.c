#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A program that prints all possible different combo of 2 digits
 * Return: 0 (Success)
 */

int main(void)
{
	int n, m;

	for (n = '0'; n <= '9'; n++)
	{
		for (m = '0'; m <= '9'; m++)
		{
			if (n != m && n < m)
			{
				putchar(n);
				putchar(m);
				if (n == '9' && m == '8')
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
