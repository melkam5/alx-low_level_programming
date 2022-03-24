#include "main.h"
/**
 * *string_toupper - change letter lowercase to uppercase
 * @a: pointer to char input
 * Return: char pointer function
 */
char *string_toupper(char *a)
{
	int i = 0;

	while (*a)
	{
		if (*a >= 97 && *a <= 122)
			*a -= 32;
		a++;
		i++;
	}
	return (a - i);
}
