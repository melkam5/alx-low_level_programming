#include <stdlib.h>

/**
 * _strlen - calculate the lengt of string
 * @s: pointer to char input
 * Return: len (Size s).
 */
int _strlen(char *s)
{
	int i = 0, len = 0, unique = 0;

	while (*(s + i) != '\0')
	{
		len++;
		if (*(s + len) == ' ' && !unique)
		{
			len += 2;
			unique = 1;
		}
		i++;
	}
	return (len);
}
/**
 * *argstostr - concatenates all the arguments of your program.
 *  Each argument should be followed by a \n in the new string
 * @ac: int input
 * @av: double pointer char input
 * Return: NULL if ac == 0 or av == NULL
 *  a pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int i, j, size = 0;
	char *str, *aux;

	if (!av || !ac)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		size += _strlen(av[i]);
		size += 1;
	}

	str = malloc((size * sizeof(char)) + 1);
	if (!str)
		return (NULL);

	aux = str;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			*str = av[i][j];
			str++;
		}
		*str = '\n';
		str++;
	}

	return (aux);
}
