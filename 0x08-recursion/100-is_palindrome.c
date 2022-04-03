#include "main.h"
/**
 * _strlen_recursion - returns the length of a string.
 * @s: pointer to char array input
 * Return: int value length string
 */
int _strlen_recursion(char *s)
{
	if (!s || !*s)
		return (0);

	return (1 + _strlen_recursion(s + 1));
}
/**
 * _half_s_even - is positioned in the middle of the array, for len even
 * @s: pointer to char array input
 * @i: int variable input
 * @j: int variable input
 * @len: int variable input
 * Return: int value length string
 */
int _half_s_even(char *s, int i, int j, int len)
{
	if (*(s + i) != *(s + j))
		return (0);

	i--, j++;
	if (j == len)
		return (1);
	return (_half_s_even(s, i, j, len));
}
/**
 * _half_s_odd - is positioned in the middle of the array, for len odd
 * @s: pointer to char array input
 * @i: int variable input
 * @j: int variable input
 * @len: int variable input
 * Return: int value length string
 */
int _half_s_odd(char *s, int i, int j, int len)
{
	if (*(s + i) != *(s + j))
		return (0);

	i--, j++;
	if (j == len)
		return (1);
	return (_half_s_odd(s, i, j, len));
}
/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not.
 * @s: pointer char input
 * Return: int value output
 */
int is_palindrome(char *s)
{
	int len_s;

	if (!s || !*s)
		return (0);

	len_s = _strlen_recursion(s);
	if (len_s % 2 == 0)
		return (_half_s_even(s, (len_s / 2) - 1, len_s / 2, len_s));
	else
		return (_half_s_odd(s, (len_s / 2) - 1, (len_s / 2) + 1, len_s));
}
