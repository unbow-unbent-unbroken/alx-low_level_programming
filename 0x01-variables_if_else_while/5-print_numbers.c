#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A program that prints all single digit of base 10 starts from 0
 * Return: 0 (Success)
 */

int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		printf("%d", n);
	}

	printf("\n");

	return (0);
}
