#include "main.h"

/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: void pointer input
 * @old_size: int input
 * @new_size: int input
 * Return: ptr or NULL depending of conditions
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned long i;
	int *alloc, *copy;

	if (old_size == new_size)
		return (ptr);

	if (!new_size && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
	{
		alloc = malloc(new_size);
		if (!alloc)
			return (NULL);
		return (alloc);
	}

	alloc = malloc(new_size);
	if (!alloc)
		return (NULL);

	copy = ptr;
	for (i = 0; i <  new_size / sizeof(unsigned int); i++)
	{
		if (i < old_size / sizeof(unsigned int))
			alloc[i] = copy[i];
		else
			alloc[i] = 0;
	}
	free(ptr);
	return (alloc);
}
