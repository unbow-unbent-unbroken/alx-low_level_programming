#include <stdio.h>

/**
 * main -Entry point
 *
 * Description: A program that prints the numbers from 1 to 100
 * But prints Fizz for mulitiples of 3
 * prints Buzz for multiples of 5
 * print FizzBuzz for mulitiples of 3 and 5
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int c;

	for (c = 1; c <= 100; c++)
	{
		if (c % 3 == 0 && c % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (c % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (c % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", c);
		}
	}

	printf("Buzz\n");

	return (0);
}
