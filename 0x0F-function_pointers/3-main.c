#include "3-calc.h"
/**
 * main - calculator function.
 * @argc: int variable input, size argv
 * @argv: pointer to char array input, contain arguments
 * Return:
 * if the number of arguments is wrong, print Error,
 *  followed by a new line, and exit with the status 98
 * if the operator is none of the above, print Error,
 *  followed by a new line, and exit with the status 99
 * if the user tries to divide (/ or %) by 0, print Error,
 *  followed by a new line, and exit with the status 100
 */
int main(int argc, char *argv[])
{
	int (*result)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}

	result = get_op_func(argv[2]);
	if (!result)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%i\n", result(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
