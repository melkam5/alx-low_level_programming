#include "main.h"
#include <stdio.h>
/**
 * print_array - print array with n index
 * @a: pointer to int array input
 * @n: type int n is size array a
 * Return: void function
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%i", *(a + i));
		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}
