#include "main.h"
/**
 * *_memcpy - copies memory area.
 * @dest: pointer to char array input
 * @src: pointer to char array input
 * @n: bytes of the memory area
 * Return: pointer to char dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);
	return (dest);
}
