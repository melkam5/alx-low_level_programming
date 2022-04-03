#include "main.h"
/**
 * _prime - calculate the prime number.
 * @n: int variable input
 * @i: int variable input
 * Return: int value output
 */
int _prime(int n, int i)
{
	if (n == i)
		return (1);

	if (n % i == 0)
		return (0);


	return (_prime(n, i + 1));
}
/**
 * is_prime_number - returns 1 if the input integer is a prime number,
 *  otherwise return 0.
 * @n: int variable input
 * Return: int value output
 */
int is_prime_number(int n)
{
	if (n < 0 || n == 1 || n == 4)
		return (0);

	return (_prime(n, 2));

}
