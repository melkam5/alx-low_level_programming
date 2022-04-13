#include "main.h"
/**
 * print_chessboard - prints the chessboard.
 * @a: pointer to char matrix input
 * Return: void function
 */
void print_chessboard(char (*a)[8])
{
	unsigned int row, column;

	for (row = 0; row < 8; row++)
	{
		for (column = 0; column < 8; column++)
			_putchar(a[row][column]);
		_putchar(10);
	}
}
