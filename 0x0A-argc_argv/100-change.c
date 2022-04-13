#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum number of coins to make change
 *  for an amount of money.
 * @argc: int variable input, size argv
 * @argv: pointer to char array input, contain arguments
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	int amount, cents = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}

	if (atoi(argv[argc - 1]) > 0)
	{
		amount = atoi(argv[argc - 1]);
		while (amount)
		{
			if ((amount >= 25))
				amount -= 25;

			else if ((amount >= 10))
				amount -= 10;

			else if ((amount >= 5))
				amount -= 5;

			else if ((amount >= 2))
				amount -= 2;

			else if ((amount >= 1))
				amount -= 1;

			cents++;
		}
		printf("%d\n", cents);
	}

	else
		printf("0\n");

	return (0);
}
