#include <stdio.h>
#include "main.h"

/**
 * main - Entry  point
 *
 * Description: A program that prints its name
 *
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: Exit (Success)
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}

	return (0);
}
