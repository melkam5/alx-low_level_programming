#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the number of arguments passed into it.
 * @argc: int variable input, size argv
 * @argv: pointer to char array input, contain arguments
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%i\n", argc - 1);
	return (0);
}
