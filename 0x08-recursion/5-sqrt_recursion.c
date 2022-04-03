#include "main.h"
/**
 * _square - returns the natural square root of a number.
 * @n: int variable input
 * @i: int variable input
 * Return: int value output
 */
int _square(int n, int i)
{
	if (n == i * i)
		return (i);
	if (i * i > n)
		return (-1);
	return (_square(n, i + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: int variable input
 * Return: int value output
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (0);

	return (_square(n, 1));
}
