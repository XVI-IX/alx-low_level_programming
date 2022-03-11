#include <stdlib.h>
#include <time.h>
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
		char *s = "Last digit of";
		char *e = "and is greater than 5";

		if ((n % 10) > 5)
		{
			printf("%s %i %s\n", s, n, e);
		}
		else if ((n % 10) == 0)
		{
			printf("%s %i and is 0\n", s, n);
		}
		else if ((n % 10) < 6 && != 0)
		{
			e = "and is less than 6 and not 0";
			printf("%s %i %s\n", s, n, e);
		}
		return (0);
}
