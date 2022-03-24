#include "main.h"
/**
 * *cap_string - capitalize all the words
 * @a: pointer to char input
 * Return: char pointer function
 */
char *cap_string(char *a)
{
	int i = 0, j = 0, new_line = 0, new_space = 0, more_char = 0;
	char new_l[] = "\n", new_s[] = "\t", more_c[] = ",;.!?(){}\" ";

	if (*a >= 97 && *a <= 122)
		*a -= 32;
	while (*a)
	{
		while (more_c[j])
		{
			if (more_c[j] == *a)
				more_char = 1;
			j++;
		}
		j = 0;
		while (new_l[j])
		{
			if (new_l[j] == *a)
				new_line = 1;
			if (new_s[j] == *a)
				new_space = 1;
			j++;
		}
		if (new_line && *(a + 1) != '\0')
			*(a + 1) -= 32;
		if (new_space)
			*(a + 1) -= 32;
		if (more_char && *(a + 1) >= 97 && *(a + 1) <= 122)
			*(a + 1) -= 32;
		a++;
		i++;
		j = 0;
		new_line = 0;
		new_space = 0;
		more_char = 0;
	}
	return (a - i);
}
