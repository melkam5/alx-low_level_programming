#include <stdlib.h>

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
 * *str_concat - concatenates two strings.
 * @s1: char input
 * @s2: char input
 * Return: NULL if str = NULL,
 *  returns a pointer to the concatenated string.
 *  It returns NULL if insufficient memory was available
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, size_s1, size_s2;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	size_s1 = _strlen(s1);
	size_s2 = _strlen(s2);
	str = malloc((size_s1 * sizeof(char)) + (size_s2 * sizeof(char)) + 1);
	if (!str)
		return (NULL);

	for (i = 0; i <= size_s1; i++)
		str[i] = s1[i];

	i--;
	for (j = 0; j <= size_s2; j++, i++)
		str[i] = s2[j];

	return (str);
}
