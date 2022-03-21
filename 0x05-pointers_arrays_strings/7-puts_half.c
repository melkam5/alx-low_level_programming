#include "main.h"
/**
 * puts_half - print the half of a string
 * @str: pointer to char input
 * Return: void function
 */
void puts_half(char *str)
{
	int i;

	for (i = 0; *(str + i) != '\0'; i++)
		;

	i++;
	for (i /= 2; *(str + i) != '\0'; i++)
	{
		_putchar(*(str + i));
	}
	_putchar(10);
}
