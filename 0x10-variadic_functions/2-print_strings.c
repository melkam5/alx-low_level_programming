#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: is the string to be printed between strings
 * @n: const unsigned int input
 * Return: Nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *value;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		value = va_arg(args, char*);
		if (value)
			printf("%s", value);
		else
			printf("(nil)");
		if (separator && (i + 1) != n)
			printf("%s", separator);
	}
	printf("\n");

	va_end(args);
}
