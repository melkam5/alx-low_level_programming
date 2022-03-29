#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: pointer to int matrix input
 * @size: int value input
 * Return: void function
 */
void print_diagsums(int *a, int size)
{
	int row, column, sumMainDiag = 0, sumAntiDiag = 0;

	for (row = 0; row < size; row++)
	{
		for (column = 0; column < size; column++)
		{
			if (row == column)
				sumMainDiag += a[row * (size + 1)];
			if (row + column == size - 1)
				sumAntiDiag += a[(row + 1) * (size - 1)];
		}
	}
	printf("%i, %i\n", sumMainDiag, sumAntiDiag);
}
