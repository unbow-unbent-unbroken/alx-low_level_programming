#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A program that prints the lowercase alphabet in reverse
 * Return: 0 (Success)
 */

int main(void)
{
	char rev;

	for (rev = 'z'; rev >= 'a'; rev--)
	{
		putchar(rev);
	}

	putchar('\n');
	return (0);
}
