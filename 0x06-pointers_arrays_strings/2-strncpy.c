#include "main.h"
/**
 * *_strncpy - copy two array a dest with a source
 * @dest: pointer to char array input
 * @src: pointer to char array input
 * @n: n bytes from src
 * Return: pointer to char dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j, size_src, size_dest;

	for (size_src = 0; *(src + size_src) != '\0'; size_src++)
		;
	for (size_dest = 0; *(dest + size_dest) != '\0'; size_dest++)
		;
	if (n > size_src)
	{
		for (i = 0; i < size_src; i++)
			*(dest + i) = *(src + i);
		for (j = i; j < n; j++)
			*(dest + j) = '\0';
		return (dest);
	}
	else
	{
		for (i = 0; i < n; i++)
			*(dest + i) = *(src + i);
	}
	return (dest);
}
