#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: A program that prints all arguments it receives.
 * all argument should be printed, including the first one
 * only print one argument per line, ending with a new line
 *
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
