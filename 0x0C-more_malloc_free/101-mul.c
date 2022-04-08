#include "main.h"
#include <ctype.h>
#include <stdio.h>

/**
 * _strlen - calculate the lengt of string
 * @s: pointer to char input
 * Return: len (Size s).
 */
unsigned long int _strlen(char *s)
{
	unsigned long int len = 0;

	while (*(s + len) != '\0')
		len++;
	return (len);
}
/**
 * _in_array - set memery to zero in a new array
 * @ar: char array.
 * @lar: length of the char array.
 *
 * Return: pointer of a char array.
 */
char *_in_array(char *ar, int lar)
{
	int i = 0;

	for (i = 0; i < lar; i++)
		ar[i] = '0';
	ar[lar] = '\0';
	return (ar);
}
/**
 * mul_big_numbers - multiplies two numbers very big.
 * @argv: pointer to char array input, contain arguments
 * @size_s1: size of argv[1] int input
 * @size_s2: size of argv[2] int input
 * Return: 0 always
 */
void mul_big_numbers(char *argv[], unsigned int size_s1, unsigned int size_s2)
{
	int i, j, k, ca, mull, mul, len_out = size_s1 + size_s2;
	char *ptr;

	ptr = malloc(len_out + 1);
	if (!ptr)
	{
		_putchar('E'), _putchar('r'), _putchar('r'), _putchar('o'), _putchar('r');
		_putchar('\n'), exit(98);
	}
	ptr = _in_array(ptr, len_out);
	k = len_out - 1, i = size_s1 - 1, j = size_s2 - 1, ca = mull = 0;
	for (; k >= 0; k--, i--)
	{
		if (i < 0)
		{
			if (mull > 0)
			{
				mul = (ptr[k] - 48) + mull;
				if (mul > 9)
					ptr[k - 1] = (mul / 10) + '0';
				ptr[k] = (mul % 10) + 48;
			}
			i = size_s1 - 1, j--, mull = 0, ca++, k = len_out - (1 + ca);
		}
		if (j < 0)
		{
			if (ptr[0] != '0')
				break;
			len_out--;
			free(ptr), ptr = malloc(len_out + 1), ptr = _in_array(ptr, len_out);
			k = len_out - 1, i = size_s1 - 1, j = size_s2 - 1, ca = mull = 0;
		}
		if (j >= 0)
		{
			mul = ((argv[1][i] - 48) * (argv[2][j] - 48)) + (ptr[k] - 48) + mull;
			mull = mul / 10, ptr[k] = (mul % 10) + 48;
		}
	}
	printf("%s\n", ptr);
	exit(0);
}
/**
 * mul_small_numbers - multiplies two numbers small.
 * @argc: int variable input, size argv
 * @argv: pointer to char array input, contain arguments
 * Return: 0 always
 */
void mul_small_numbers(int argc, char *argv[])
{
	int i, mul = 1, multiple_10 = 1;

	if (argv[1][0] == '1' && argv[1][1] == '\0')
	{
		for (i = 0; argv[2][i]; i++)
			_putchar(argv[2][i]);
		_putchar(10);
		exit(0);
	}

	if (argv[2][0] == '1'  && argv[2][1] == '\0')
	{
		for (i = 0; argv[1][i]; i++)
			_putchar(argv[1][i]);
		_putchar(10);
		exit(0);
	}

	for (i = 1; i < argc; i++)
		mul *= atoi(argv[i]);

	while (multiple_10 < mul)
		multiple_10 *= 10;

	multiple_10 /= 10;
	while (multiple_10 != 1)
	{
		_putchar(mul / multiple_10 + 48);
		mul -= (multiple_10 * (mul / multiple_10));
		multiple_10 /= 10;
	}
	_putchar(mul % 10 + 48);
	_putchar(10);
}
/**
 * main - multiplies two numbers.
 * @argc: int variable input, size argv
 * @argv: pointer to char array input, contain arguments
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	int i, j, size_s1 = 0, size_s2 = 0;

	if (argc != 3)
	{
		_putchar('E'), _putchar('r'), _putchar('r'), _putchar('o'), _putchar('r');
		_putchar('\n');
		return (98);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
			if (!isdigit(argv[i][j]))
			{
				_putchar('E'), _putchar('r'), _putchar('r'), _putchar('o'), _putchar('r');
				_putchar('\n');
				return (98);
			}
	}
	if (argv[1][0] == '0' || argv[2][0] == '0')
	{
		_putchar('0');
		_putchar(10);
		return (0);
	}

	size_s1 = _strlen(argv[1]);
	size_s2 = _strlen(argv[2]);
	if ((size_s1 + size_s2 - 1) > 10)
		mul_big_numbers(argv, size_s1, size_s2);

	mul_small_numbers(argc, argv);
	return (0);
}
