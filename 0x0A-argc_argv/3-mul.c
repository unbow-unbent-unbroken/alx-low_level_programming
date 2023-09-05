#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: A program that multiples two numbers.
 * Assume the two numbers and the result can be stored in an integer
 * if program does not receive two argument print error
 *
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 1 if (Error) or 0 (Success)
 */

int main(int argc, char *argv[])
{
	int a;
	int b;
	int c;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	c = a * b;

	printf("%d\n", c);
	return (0);
}
