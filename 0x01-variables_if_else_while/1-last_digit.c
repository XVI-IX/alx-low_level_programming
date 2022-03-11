#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - function to perform some relational operations on random number n
 *
 * Return: String representing operation output
 */

/* betty style doc for function main goes there */
int main(void)
{
		int n;

		srand(time(0));
		n = rand() - RAND_MAX / 2;
		int m = n % 10;

		if (m > 5)
		{
			printf("Last digit of %i is %i and is greater than 5\n",
			n, m);
		}
		else if (m == 0)
		{
			printf("Last digit of %i and is 0\n", n);
		}
		else if (m < 6 && m != 0)
		{
			printf("Last digit of %i is %i and is less than 6 and not 0\n",
			n, m);
		}
		return (0);
}
