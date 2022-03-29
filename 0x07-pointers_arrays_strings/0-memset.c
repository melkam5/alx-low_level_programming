#include "main.h"
/**
 * *_memset - fills memory with a constant byte.
 * @s: pointer to char array input
 * @b: char input, byte value
 * @n: bytes of the memory area
 * Return: pointer to char dest
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;
	return (s);
}
