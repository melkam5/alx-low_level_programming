#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generates random keygen witn 101-crackme.
 * Return: 0 Always.
 */
int main(void)
{
	int random = 0, pass = 0;
	time_t t;

	srand((unsigned int) time(&t));
	while (pass < 2772)
	{
		random = rand() % 128;
		if ((pass + random) > 2772)
			break;
		pass = pass + random;
		printf("%c", random);
	}
	printf("%c\n", (2772 - pass));
	return (0);
}