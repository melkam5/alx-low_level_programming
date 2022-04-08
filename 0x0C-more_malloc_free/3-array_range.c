#include "main.h"

/**
 * *array_range - creates an array of integers.
 *  The array created should contain all the values from min (included)
 *  to max (included), ordered from min to max
 * @min: int input, min num of array(more small)
 * @max: int input, max num of array(more big)
 * Return: the pointer to the newly created array
 *  If min > max, return NULL
 *  If malloc fails, return NULL
 */
int *array_range(int min, int max)
{
	int i, size = max - min;
	int *alloc;

	if (min > max)
		return (NULL);

	alloc = malloc((size + 1) * sizeof(*alloc));
	if (!alloc)
		return (NULL);

	for (i = 0; i <= (size); i++)
		alloc[i] = min++;
	return (alloc);
}
