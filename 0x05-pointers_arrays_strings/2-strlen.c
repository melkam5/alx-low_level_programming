#include "main.h"
/**
 * _strlen - calculate the lengt of string
 * @s: pointer to char input
 * Return: len (Size s).
 */
int _strlen(char *s)
{
	int i = 0, len = 0;

	while (*(s + i) != '\0')
	{
		len++;
		i++;
	}
	return (len);
}
