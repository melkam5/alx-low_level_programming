#include "main.h"
/**
 * rev_string - reverse string function
 * @s: pointer to char input
 * Return: void function
 */
void rev_string(char *s)
{
	char tmp[500];
	int i = 0, j;

	for (i = 0; *(s + i) != '\0'; i++)
		tmp[i] = *(s + i);
	for (i--, j = 0; i >= 0; i--, j++)
		*(s + j) = tmp[i];
}
