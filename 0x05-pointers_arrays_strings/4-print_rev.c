#include "main.h"
#include <unistd.h>
/**
 * print_rev - print a string reverse form
 * @s: pointer to char input
 * Return: void function
 */
void print_rev(char *s)
{
	int i = 0;

	for (i = 0; *(s + i) != '\0'; i++)
		;
	for (i--; i >= 0; i--)
		_putchar(*(s + i));
	_putchar(10);
}
