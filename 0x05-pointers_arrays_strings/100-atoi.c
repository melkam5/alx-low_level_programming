#include "main.h"
#include <stdio.h>
/**
 * _atoi - find the numbers in array
 * @s: pointer to char array input
 * Return: number find or (0)
 */
int _atoi(char *s)
{
	unsigned int i, number = 0;
	int sign = 1;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) <= 57 && *(s + i) >= 48)
		{
			number = number * 10 + (*(s + i) - 48);
			if (*(s + i + 1) == ' ')
				break;
		}
		else if (*(s + i) == 45)
			sign *= -1;
	}
	return (sign * number);
}
