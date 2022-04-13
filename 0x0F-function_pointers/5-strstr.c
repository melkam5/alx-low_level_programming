#include "main.h"
#include <stdlib.h>
/**
 * *_strstr - locates a substring.
 * @haystack: pointer to char array input
 * @needle: pointer to char array input
 * Return: pointer to char array output
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j, flag_needle = 0;

	if (*needle == '\0')
		return (haystack);
	for (i = 0; *(haystack + i) != '\0'; i++)
	{
		for (j = 0; *(needle + j) != '\0'; j++)
			if (*(needle + j) == *(haystack + i + j))
				flag_needle++;
		if (*(needle + flag_needle) == '\0')
			return (haystack + i);
		flag_needle = 0;
	}
	return (NULL);
}
