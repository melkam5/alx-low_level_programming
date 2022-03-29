#include "main.h"
#include <stdlib.h>
/**
 * *_strpbrk - searches a string for any of a set of bytes.
 * @s: pointer to char array input
 * @accept: pointer to char array input
 * Return: pointer to char array output
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
		for (j = 0; *(accept + j) != '\0'; j++)
			if (*(accept + j) == *(s + i))
				return (s + i);
	return ('\0');
}
