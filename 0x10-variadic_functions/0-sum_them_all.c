#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: const unsigned int input
 * Return: the sum of all its parameters.
 *  If n == 0, return 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int value = 0;

	if (n)
	{
		va_list args;

		va_start(args, n);

		for (i = 0; i < n; i++)
		{
			value += va_arg(args, int);
		}

		va_end(args);
		return (value);
	}
	return (0);
}
