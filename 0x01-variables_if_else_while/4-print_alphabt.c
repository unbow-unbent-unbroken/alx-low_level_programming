#include <stdio.h>

/**
 * main - Entry point
 *
 * Decription: A program that prints the alphabet in lowercase except q and e
 * Return: 0 (Success)
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet != 'e' && alphabet != 'q')
			putchar(alphabet);

	}

	putchar('\n');
	return (0);
}
