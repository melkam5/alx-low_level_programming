#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_search - Searchs for a value in an array using binary search
 * @array: The array to search in
 * @size: Size of the aray
 * @value: The value to search for
 *
 * Return: index of the value if the vale exists othewise -1
 */
int binary_search(int *array, size_t size, int value)
{
	if (array != NULL)
	{
		size_t L = 0;
		size_t R = size - 1;
		size_t m;
		size_t i;

		while (L <= R)
		{
			m = (L + R) / 2;
			printf("Searching in array: ");
			for (i = L; i <= R; ++i)
			{
				if (i == R)
					printf("%d\n", *(array + i));
				else
					printf("%d, ", *(array + i));
			}
			if (*(array + m) == value)
				return (m);
			else if (*(array + m) > value)
				R = m - 1;
			else if (*(array + m) < value)
				L = m + 1;
		}
	}
	return (-1);
}
