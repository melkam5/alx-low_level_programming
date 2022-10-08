#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * advanced_binary_recursive - Searches recursively for a value in a sorted
  *                             array of integers using binary search.
  * @array: A pointer to the first element of the [sub]array to search.
  * @L: The starting index of the [sub]array to search.
  * @R: The ending index of the [sub]array to search.
  * @value: The value to search for.
  *
  * Return: If the value is not present, -1.
  *         Otherwise, the index where the value is located.
  *
  * Description: Prints the [sub]array being searched after each change.
  */
int advanced_binary_recursive(int *array, size_t L, size_t R, int value)
{
	size_t i;

	if (R < L)
		return (-1);

	printf("Searching in array: ");
	for (i = L; i < R; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);

	i = L + (R - L) / 2;
	if (array[i] == value && (i == L || array[i - 1] != value))
		return (i);
	if (array[i] >= value)
		return (advanced_binary_recursive(array, L, i, value));
	return (advanced_binary_recursive(array, i + 1, R, value));
}

/**
  * advanced_binary - Searches for a value in a sorted array
  *                   of integers using advanced binary search.
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the first index where the value is located.
  *
  * Description: Prints the [sub]array being searched after each change.
  */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}

