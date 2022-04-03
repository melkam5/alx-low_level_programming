#include "main.h"
/**
 * _puts_recursion - prints a string, followed by a new line.
 * @s: pointer to char array input
 * Return: void function
 */
void _puts_recursion(char *s)
{
	if (!s || !*s)
	{
		_putchar(10);
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
