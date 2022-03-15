#include <stdio.h>
/**
 * print_sign - Prints sign of a number
 * @n: number to check for sign
 *
 * Description: Prints sign of number
 *
 * Return: returns 1 if positive,
 * returns 0 if 0 and returns -1 if negative
 *
 */
int print_sign(int n)
{
	if (n > 0)
	{
		printf("+\n");
		return (1);
	}
	else if (n == 0)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		printf("-1\n");
		return (-1);
	}
}
