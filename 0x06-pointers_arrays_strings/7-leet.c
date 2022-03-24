#include "main.h"
/**
 * *leet - encodes a string into 1337-leet
 * @a: pointer to char array input
 * Return: pointer to char a
 */
char *leet(char *a)
{
	int i = 0, j = 0;
	char lower[] = "aeotl", upper[] = "AEOTL", digit[5] = {52, 51, 48, 55, 49};

	while (*a)
	{
		while (j < 5)
		{
			if (*a == lower[j] || *a == upper[j])
				*a = digit[j];
			j++;
		}
		j = 0;
		i++;
		a++;
	}
	return (a - i);
}
