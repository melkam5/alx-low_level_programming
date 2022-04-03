#include "main.h"
/**
 * _print_rev_recursion - prints a string in reverse.
 * @s: pointer to char array input
 * Return: void function
 */
void _print_rev_recursion(char *s)
{
	if (!s || !*s)
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
