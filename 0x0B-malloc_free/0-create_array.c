#include <stdlib.h>

/**
 * *create_array - creates an array of chars, and
 *  initializes it with a specific char.
 * @size: unsigned int input
 * @c: char input
 * Return: NULL if size = 0 else if
 *  a pointer to the array, or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	if (!size)
		return (NULL);

	else
	{
		str = malloc(sizeof(c) * size);
		if (!str)
			return (NULL);

		for (i = 0; i < size; i++)
		{
			str[i] = c;
		}
	}

	return (str);
}
