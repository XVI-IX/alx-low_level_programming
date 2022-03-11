#include <stdlib.h>
#include <time.h>
/**
 * main - Function to check if random number is zero, positive or negative
 *
 * Return: Prints string to denote class of random number
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n == 0)
	{
		printf("%i is zero\n", n);
	}
	else if (n > 0)
	{
		printf("%i is positive\n", n);
	}
	else
	{
		printf("%i is negative\n", n);
	}
	return (0);
}
