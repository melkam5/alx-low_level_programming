#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter
 *  on each element of an array.
 * @array: pointer to int input
 * @size: size_t type variable input
 * @action: pointer to void function input
 * Return: void function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
		for (i = 0; i < size; i++)
			(*action)(*(array + i));
}
