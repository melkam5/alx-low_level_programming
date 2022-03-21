#include "main.h"
/**
 * swap_int - swap a = b and b = a
 * @a: pointer to int input
 * @b: pointer to int input
 * Return: void function
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
