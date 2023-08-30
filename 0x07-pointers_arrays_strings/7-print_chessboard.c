#include <stdio.h>
#include "main.h"

/**
 * print_chessboard - Prints the chessboard
 * @a: Pointer to a 2D array representing the chessboard.
 *
 * Description: The function prints a 8x8 chessboard
 *
 * Return: 0 (Success)
 */

void print_chessboard(char (*a)[8])
{
	int row, col;

	for (row = 0; row < 8; row++)
	{
		for (col = 0; col < 8; col++)
		{
			_putchar(a[row][col]);
		}
		_putchar('\n');
	}
}
