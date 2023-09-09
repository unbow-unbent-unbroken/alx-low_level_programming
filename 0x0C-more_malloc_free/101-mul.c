#include <stdio.h>
#include <stdlib.h>

/**
 * is_positive_number - Checks if a string contains only positive digits.
 * @str: The input string to check.
 *
 * Return: 1 if str contains only positive digits, 0 otherwise.
 */

int is_positive_number(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Return: 0 on success, 98 on incorrect arguments or non-digit input.
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	if (!is_positive_number(argv[1]) || !is_positive_number(argv[2]))
	{
		printf("Error\n");
		return (98);
	}

	unsigned long int num1 = strtoul(argv[1], NULL, 10);
	unsigned long int num2 = strtoul(argv[2], NULL, 10);
	unsigned long int result = num1 * num2;

	printf("%lu\n", result);

	return (0);
}
