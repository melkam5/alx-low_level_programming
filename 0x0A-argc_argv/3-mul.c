#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers.
 * @argc: int variable input, size argv
 * @argv: pointer to char array input, contain arguments
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	int i, mul = 1;

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
			mul *= atoi(argv[i]);
		printf("%i\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
