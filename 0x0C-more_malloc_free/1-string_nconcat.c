#include "main.h"

/**
 * _strlen - calculate the lengt of string
 * @s: pointer to char input
 * Return: len (Size s).
 */
unsigned long int _strlen(char *s)
{
	unsigned long int len = 0;

	while (*(s + len) != '\0')
		len++;
	return (len);
}
/**
 * *string_nconcat - concatenates two strings.
 * If n is greater or equal to the length of s2 then use the entire string s2
 * @s1: char pointer input
 * @s2: char pointer input
 * @n: n bytes of s2, int input
 * Return:
 *  The returned pointer shall point to a newly allocated space in memory,
 *  which contains s1, followed by the first n bytes of s2, and null terminated
 *  if NULL is passed, treat it as an empty string
 *  If the function fails, it should return NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, size_s1, size_s2;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	size_s1 = _strlen(s1);
	size_s2 = _strlen(s2);
	if (n >= size_s2)
		n = size_s2;

	str = malloc((size_s1) + (n) + 1);
	if (!str)
		return (NULL);

	for (i = 0; i < (size_s1 + n); i++)
		if (i < (size_s1))
			str[i] = s1[i];
		else
			str[i] = s2[i - (size_s1)];

	str[i] = '\0';
	return (str);
}
