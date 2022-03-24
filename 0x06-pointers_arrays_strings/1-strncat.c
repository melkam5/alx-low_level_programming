#include "main.h"
/**
 * *_strncat - concatenates two array a dest with a source
 * @dest: pointer to char array input
 * @src: pointer to char array input
 * @n: n bytes from src
 * Return: pointer to char dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; *(dest + i) != '\0'; i++)
		;
	for (j = 0; j < n && *(dest + j) != '\0' && *(src + j) != '\0'; j++, i++)
		*(dest + i) = *(src + j);
	*(dest + i) = '\0';
	return (dest);
}
