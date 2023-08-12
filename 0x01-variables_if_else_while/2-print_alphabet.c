#include <stdio.h>

/**
 * main - Entry point
 *
 * Dsecription: A program that prints the alphabet in lowercase
 * Return: 0 (Success)
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}

	putchar('\n');
	return (0);
}
