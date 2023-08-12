#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints all possible different combinations of 3 digits,
 * separated by , followed by space. Only the smallest combination is printed.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int m, n, o;

	for (m = 0; m <= 7; m++)
	{
		for (n = m + 1; n <= 8; n++)
		{
			for (o = n + 1; o <= 9; o++)
			{
				putchar(m + '0');
				putchar(n + '0');
				putchar(o + '0');
				if (m < 7 || n < 8 || o < 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
