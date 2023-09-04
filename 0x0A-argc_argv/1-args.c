#include <stdio.h>
#include <stdlib.h>

/**
 * main -Entry point
 *
 * Decription: A program that prints the number of arguments passed into it.
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
