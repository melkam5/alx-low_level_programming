#include "main.h"
/**
 * *rot13 - encodes a string into ROT13
 * @a: pointer to char array input
 * Return: pointer to char a
 */
char *rot13(char *a)
{
	int i, j;
	char alph[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; *(a + i) != '\0'; i++)
	{
		for (j = 0; *(alph + j) != '\0'; j++)
		{
			if (*(a + i) == *(alph + j))
			{
				*(a + i) = *(rot + j);
				break;
			}
		}
	}
	return (a);
}
